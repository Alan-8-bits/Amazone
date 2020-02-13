#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileMenu= ui->menuBar->addMenu(tr("&Archivo"));
    openFileAction = new QAction(tr("Abrir archivo"), this);
    connect(openFileAction, SIGNAL(triggered()), this,SLOT(openFile()));

    fileMenu->addAction(openFileAction);

    //Cargo los usuarios----------------------------------------------------
    fileName="products.json";
    dbFile.setFileName(fileName);
    loadDB();
    //----------------------------------------------------------------------

    loadProducts();

    ui->emailLE->setInputMask("xxxxxxxxxxxxxxxxxxxx@xxxxxxxxxx.com");
    ui->newMailLE->setInputMask("xxxxxxxxxxxxxxxxxxxx@xxxxxxxxxx.com");

}

MainWindow::~MainWindow()
{
    if(canasta.items.size()!=0)
        users.at(actualUser).addPurchase(canasta);

    for (size_t i=0;i<canasta.items.size();i++) {
        QHash<QString, int> aristas;

        for (size_t x=0;x<canasta.items.size();x++) {
            if(x!=i){
                aristas[canasta.items.at(x)]=grafo.value(canasta.items.at(i)).value(canasta.items.at(x))+1;
            }
        }

        grafo[canasta.items.at(i)]=aristas;
    }

    saveDB();

    // mostrar grafo en consola

    QHash<QString, QHash<QString,int> >::iterator origen;
    origen=grafo.begin();

    while (origen!=grafo.end()) {
        QHash<QString,int>::iterator destino;
        destino=origen.value().begin();

        QString aux=origen.key()+", ";


        while (destino!=origen.value().end()) {
            aux.append(destino.key());
            aux.append("(");
            aux.append(QString::number(destino.value()));
            aux.append(") , ");

            ++destino;
        }
        qDebug()<<aux;
        aux.clear();

        ++origen;
    }

    delete ui;
}

void MainWindow::enableLoginPB()
{
    if(ui->emailLE->text().length() > 0 && ui->passwordLE->text().length() > 0)
        ui->loginPB->setEnabled(true);
    else
        ui->loginPB->setEnabled(false);

}

void MainWindow::enableCreatePB()
{
    if(ui->newNameLE->text().length()>0&&ui->newMailLE->text().length()>0&&ui->newPasswordLE->text().length()>0&&ui->lineEdit->text().length()>0)
        ui->createPB->setEnabled(true);
    else {
        ui->createPB->setEnabled(false);
    }
}

void MainWindow::change_layout(size_t inicio, size_t final, vector<Producto*> from)
{
    QLayoutItem* item;
    while( (item=layoutaux->takeAt(0)) )
    {
        delete item->widget();
        delete item;
    }

    delete layoutaux;

    QGridLayout *lay =new QGridLayout;

    for (size_t i=inicio;i<final;i++) {

        QLabel *imagen=new QLabel;
        QLabel *descripcion=new QLabel;
        QLabel *precio=new QLabel;

        descripcion->setMaximumSize(400,150);
        descripcion->setText(from.at(i)->getNombre());
        descripcion->setWordWrap(true);

        QFont font = descripcion->font();
        font.setPointSize(15);
        font.setBold(true);
        font.setFamily("Century Gothic");
        descripcion->setFont(font);

        precio->setMaximumSize(150,150);
        precio->setText(QString::number(from.at(i)->getPrecio())+" $");
        precio->setFont(font);
        precio->setAlignment(Qt::AlignCenter);

        QString aux = QString("imgs/"+from.at(i)->getId()+".jpg");

        QPixmap pixmap(aux);
        imagen->setScaledContents(1);
        imagen->setMaximumSize(150,150);

        QSpinBox *box= new QSpinBox;

        QPushButton *agregar= new QPushButton;
        agregar->setText("Agregar");

        //connect(box,SIGNAL(valueChanged(int)),from.at(i),SLOT(setComprados(int)));

        connect(agregar,&QPushButton::clicked,from.at(i),[=]()
        {
            canasta.items.push_back(from.at(i)->getId());
            from.at(i)->setComprados(from.at(i)->getComprados()+box->value());
            box->setValue(0);
            vector<QString> can;
            for (int y=0;y<canasta.sizeItems();y++) {
                can.push_back(canasta.items.at(y));
            }
            change_recommended(can);
        });

//        connect(agregar,&QPushButton::clicked,this,[=]()
//        {
//            canasta.items.push_back(from.at(i)->getId());
//            from.at(i)->setComprados(from.at(i)->getComprados()+box->value());
//            box->setValue(0);
//        });

        imagen->setPixmap(pixmap);
        lay->addWidget(imagen,int(i),0);
        lay->addWidget(descripcion,int(i),1);
        lay->addWidget(precio,int(i),2);
        lay->addWidget(box,int(i),3);
        lay->addWidget(agregar,int(i),4);
    }
    layoutaux=lay;
    ui->scrollAreaWidgetContents->setLayout(layoutaux);
}

void MainWindow::change_best_selled()
{
    QLayoutItem* item;
    while( (item=layoutrec->takeAt(0)) )
    {
        delete item->widget();
        delete item;
    }
    delete layoutrec;
    QGridLayout *lay =new QGridLayout;
    priority_queue<Producto,vector<Producto>,CompareSelled> cola;

    for (size_t i=0;i<productos.size();i++) {
        cola.push(productos.at(i));
    }

    for (size_t i=0;i<3;i++) {
        QLabel *imagen=new QLabel,*vendidos=new QLabel;
        QPixmap pixmap("imgs/"+cola.top().getId()+".jpg");
        imagen->setScaledContents(1);
        imagen->setMaximumSize(150,150);
        imagen->setPixmap(pixmap);

        vendidos->setText(QString::number(cola.top().getComprados()));
        lay->addWidget(imagen,0,int(i));
        lay->addWidget(vendidos,1,int(i));

        QPushButton *agregar= new QPushButton;
        agregar->setText("Agregar");
        QSpinBox *box= new QSpinBox;
        QLabel *precio=new QLabel;

        precio->setMaximumSize(150,150);
        precio->setText(QString::number(cola.top().getPrecio())+" $");
        precio->setAlignment(Qt::AlignCenter);

        for (size_t x=0;x<productos.size();x++) {
            if(cola.top().getId()==productos.at(x).getId()){

                connect(agregar,&QPushButton::clicked,&productos.at(x),[=]()
                {
                    canasta.items.push_back(productos.at(x).getId());
                    productos.at(x).setComprados(productos.at(x).getComprados()+box->value());
                    box->setValue(0);
                    vector<QString> can;
                    for (int y=0;y<canasta.sizeItems();y++) {
                        can.push_back(canasta.items.at(y));
                    }
                    change_recommended(can);
                });

                break;
            }
        }

        lay->addWidget(precio,1,int(i));
        lay->addWidget(box,2,int(i));
        lay->addWidget(agregar,3,int(i));


        cola.pop();
    }
    layoutrec=lay;
    ui->recomendaciones->setText("Mas vendidos:");
    ui->scrollAreaWidgetContents_2->setLayout(layoutrec);
}

void MainWindow::change_recommended(vector<QString> can)
{
    QLayoutItem* item;
    while( (item=layoutrec->takeAt(0)) )
    {
        delete item->widget();
        delete item;
    }
    delete layoutrec;
    QGridLayout *lay =new QGridLayout;

    priority_queue<arista,vector<arista>,CompareIterators> cola;

    vector<arista> vec;
    for (size_t i=0;i<can.size();i++) {
        QHash<QString,int>::iterator origen;

        QHash<QString,int> aristas =grafo.value(can.at(i));
        origen=aristas.begin();
        while (origen!=aristas.end()) {
            bool validator=true;
            for (size_t x=0;x<vec.size();x++) {
                if(vec.at(x).producto==origen.key()){
                    vec.at(x).key+=origen.value();
                    validator=false;
                    break;
                }
            }
            if(validator){
                arista ari;
                ari.producto=origen.key();
                ari.key=origen.value();
                vec.push_back(ari);
            }
            ++origen;
        }
    }

    for (size_t i=0;i<vec.size();i++) {
        cola.push(vec.at(i));
    }

//    for (size_t i=0;i<can.size();i++) {
//        QHash<QString,int>::iterator origen;

//        QHash<QString,int> aristas =grafo.value(can.at(i));

//        origen=aristas.begin();
//        while (origen!=aristas.end()) {

//            bool validator=true;
//            int niu_disco=0;
//            priority_queue<arista,vector<arista>,CompareIterators> check=cola;
//            while (check.size()>0) {
//                if(origen.key()==check.top().producto){
//                    validator=false;
//                    niu_disco=check.top().key;
//                    break;
//                }
//                check.pop();
//            }

//            if(validator){
//                arista ari;
//                ari.producto=origen.key();
//                ari.key=origen.value();
//                cola.push(ari);
//            }

//            ++origen;
//        }
//    }

    if(cola.size()==0){
        return;
    }
    for (size_t iterador=0;iterador<3;iterador++) {
        Producto aux;
        for (size_t x=0;x<productos.size();x++) {
            if(productos.at(x).getId()==cola.top().producto){
                aux=productos.at(x);
            }
        }
        bool comprado=false;
        for (size_t x=0;x<canasta.sizeItems();x++) {
            if(canasta.items.at(x)==aux.getId()){

            }
        }

        if(!comprado){
            QLabel *imagen=new QLabel,*vendidos=new QLabel;
            QPixmap pixmap("imgs/"+aux.getId()+".jpg");
            imagen->setScaledContents(1);
            imagen->setMaximumSize(150,150);
            imagen->setPixmap(pixmap);

            vendidos->setText(QString::number(cola.top().key));

            QPushButton *agregar= new QPushButton;
            agregar->setText("Agregar");
            QSpinBox *box= new QSpinBox;
            QLabel *precio=new QLabel;

            precio->setMaximumSize(150,150);
            precio->setText(QString::number(aux.getPrecio())+" $");
            precio->setAlignment(Qt::AlignCenter);

            for (size_t x=0;x<productos.size();x++) {
                if(aux.getId()==productos.at(x).getId()){

                    connect(agregar,&QPushButton::clicked,&productos.at(x),[=]()
                    {
                        canasta.items.push_back(productos.at(x).getId());
                        productos.at(x).setComprados(productos.at(x).getComprados()+box->value());
                        box->setValue(0);
                        vector<QString> can;
                        for (int y=0;y<canasta.sizeItems();y++) {
                            can.push_back(canasta.items.at(y));
                        }
                        change_recommended(can);
                    });

                    break;
                }
            }

            lay->addWidget(imagen,0,int(iterador));
            lay->addWidget(vendidos,1,int(iterador));
            lay->addWidget(precio,1,int(iterador));
            lay->addWidget(box,2,int(iterador));
            lay->addWidget(agregar,3,int(iterador));
        }

        cola.pop();
        if(cola.size()==0){
            break;
        }
    }

    layoutrec=lay;
    ui->recomendaciones->setText("Te puede interesar:");
    ui->scrollAreaWidgetContents_2->setLayout(layoutrec);
}

void MainWindow::on_emailLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);

    enableLoginPB();
}

void MainWindow::on_passwordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);

    enableLoginPB();
}

void MainWindow::on_newUserPB_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_newNameLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreatePB();
}

void MainWindow::on_newMailLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreatePB();
}

void MainWindow::on_newPasswordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreatePB();
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreatePB();
}

void MainWindow::on_createPB_clicked()
{
    QMessageBox message;
    size_t i=0;
    bool correo=false,confirmacion=false;

    for (;i<users.size();++i)
        if(users.at(i).getEmail() == ui->newMailLE->text()){
            message.setText("El usuario ya existe");
            message.setIcon(QMessageBox::Warning);
            break;
        }

    if(ui->newMailLE->text().size()<6){
        message.setText("No ha escrito un correo valido");
        message.setIcon(QMessageBox::Critical);
    }
    else {
        correo=true;
    }
    if(ui->lineEdit->text()!=ui->newPasswordLE->text()){
        message.setText("No coinciden las contraseñas escritas");
        message.setIcon(QMessageBox::Information);
    }
    else {
        confirmacion=true;
    }

    if(i==users.size() && correo && confirmacion){
        User u;
        u.setName(ui->newNameLE->text());
        u.setEmail(ui->newMailLE->text());
        u.setPassword(ui->newPasswordLE->text());
        users.push_back(u);

        ui->newNameLE->clear();
        ui->newMailLE->clear();
        ui->newPasswordLE->clear();
        ui->lineEdit->clear();

        ui->stackedWidget->setCurrentIndex(0);

        message.setText("Usuario registrado con exito");
        message.setIcon(QMessageBox::Information);
    }
    message.exec();
}

void MainWindow::on_loginPB_clicked()
{
    QMessageBox message;
    size_t i=0;

    for (;i<users.size();++i) {
        if(users.at(i).getEmail()==ui->emailLE->text()){
            if(users.at(i).getPassword()==ui->passwordLE->text()){
                ui->stackedWidget->setCurrentIndex(2);
                actualUser=i;
                QDateTime date=QDateTime::currentDateTime();
                canasta.date=date.toString("dd/MM/yy HH:mm:ss");
                ui->comboBox->currentIndexChanged(ui->comboBox->currentIndex());
                change_best_selled();
                break;
            }
            else {
                message.setText("Usuario y contraseña no coinciden");
                message.setIcon(QMessageBox::Critical);
                message.exec();
                break;
            }
        }
    }
    if(i==users.size()){
        message.setText("El usuario no existe");
        message.setIcon(QMessageBox::Warning);
        message.exec();
    }
}

void MainWindow::openFile()
{
    fileName= QFileDialog::getOpenFileName(this, "DataBase", "","Archivos JSON (*.json)");

    if(fileName.length()>0){
        dbFile.setFileName(fileName);
        loadDB();
    }
}

void MainWindow::loadDB()
{
    QByteArray data;
    QJsonObject jsonObj;
    QJsonDocument jsonDoc;
    QJsonArray jsonArray;

    dbFile.open(QIODevice::ReadOnly);
    data = dbFile.readAll();
    jsonDoc=QJsonDocument(QJsonDocument::fromJson(data));

    jsonObj = jsonDoc.object();
    jsonArray= jsonObj["users"].toArray();

    for (int i=0;i<jsonArray.size();i++) {
        QJsonObject aux;
        User us;

        aux=jsonArray.at(i).toObject();
        QJsonArray purchases= aux["purchase"].toArray();

        us.setName(aux["name"].toString());
        us.setEmail(aux["email"].toString());
        us.setPassword(aux["password"].toString());

        for (int x=0;x<purchases.size();x++) {
            QJsonObject compra;
            purchase comp;

            compra=purchases.at(x).toObject();
            QStringList lista=compra.keys();
            comp.date=lista.at(0);
            QJsonArray items= compra[comp.date].toArray();

            for (int y=0;y<items.size();y++) {
                QJsonObject item;
                QString id;
                item=items.at(y).toObject();
                id=item["id"].toString();
                comp.items.push_back(id);
            }

            us.addPurchase(comp);
        }

        users.push_back(us);
    }

    dbFile.close();
}

void MainWindow::saveDB()
{
    QJsonObject jsonObj;
    QJsonDocument jsonDoc;
    QJsonArray jsonArray;

    //Abrimos archivo
    dbFile.open(QIODevice::WriteOnly);

    for (size_t i=0;i<users.size();i++) {
        QJsonObject aux;
        QJsonArray purchases;

        aux["name"]= users.at(i).getName();
        aux["email"]= users.at(i).getEmail();
        aux["password"]= users.at(i).getPassword();

        for (size_t x=0;x<users.at(i).sizePurchases();x++) {
            QJsonObject compra;
            QJsonArray items;

            for (size_t y=0;y<users.at(i).purchasesAt(x).items.size();y++) {
                QJsonObject item;
                item["id"]= users.at(i).purchasesAt(x).items.at(y);
                items.append(item);
            }

            compra[users.at(i).purchasesAt(x).date]=items;
            purchases.append(compra);
        }
        aux["purchase"]= purchases;

        jsonArray.append(aux);
    }
    //Guardamos el arreglo de objetos en un onjeto json
    jsonObj["users"]= jsonArray;

    //Creamos u documento json a partir de un objeto
    jsonDoc = QJsonDocument(jsonObj);


    QJsonArray prou;
    for (size_t i=0;i<productos.size();i++) {
        QJsonObject aux;
        aux["id"]= productos.at(i).getId();
        aux["name"]= productos.at(i).getNombre();
        aux["price"]= productos.at(i).getPrecio();
        aux["sold"]= productos.at(i).getComprados();

        prou.append(aux);
    }
    jsonObj["products"]= prou;
    jsonDoc.setObject(jsonObj);

    //Escribimos el archivo el documento  en formato json
    dbFile.write(jsonDoc.toJson());

    dbFile.close();
}

void MainWindow::loadProducts()
{
    QByteArray data;
    QJsonObject jsonObj;
    QJsonDocument jsonDoc;
    QJsonArray jsonArray;

    QFile aux;
    aux.setFileName("products.json");
    aux.open(QIODevice::ReadOnly);

    data = aux.readAll();
    jsonDoc=QJsonDocument(QJsonDocument::fromJson(data));

    jsonObj = jsonDoc.object();
    jsonArray= jsonObj["products"].toArray();

    for (int i=0;i<jsonArray.size();i++) {
        QJsonObject aux;
        Producto us;
        QHash<QString, int> aristas;

        aux=jsonArray.at(i).toObject();

        us.setId(aux["id"].toString());
        us.setNombre(aux["name"].toString());
        us.setPrecio(aux["price"].toDouble());
        us.setComprados(int(aux["sold"].toDouble()));

        for (size_t it_usuario=0;it_usuario<users.size();it_usuario++) {
            for (size_t it_compra=0;it_compra<users.at(it_usuario).sizePurchases();it_compra++) {
                bool existe=false;
                for (size_t it_item=0;it_item<users.at(it_usuario).purchasesAt(it_compra).items.size();it_item++) {
                    if(users.at(it_usuario).purchasesAt(it_compra).items.at(it_item)==aux["id"].toString())
                        existe=true;
                }
                if(existe){
                    for (size_t it_item=0;it_item<users.at(it_usuario).purchasesAt(it_compra).items.size();it_item++) {
                        if(users.at(it_usuario).purchasesAt(it_compra).items.at(it_item)!=aux["id"].toString())
                            aristas[users.at(it_usuario).purchasesAt(it_compra).items.at(it_item)]+=1;
                    }
                }
            }
        }

        grafo.insert(aux["id"].toString(), aristas);

        productos.push_back(us);
    }

    aux.close();
}

vector<Producto*> MainWindow::ordenarProductos(vector<Producto*> aux, int tipo)
{
    vector<Producto*> dev;
    switch (tipo) {
    case 0:{
        while (aux.size()>0) {
            size_t at=0;
            double act_min=aux.at(0)->getPrecio();
            for (size_t i=0;i<aux.size();i++) {
                if(aux.at(i)->getPrecio()<act_min){
                    act_min=aux.at(i)->getPrecio();
                    at=i;
                }
            }
            dev.push_back(aux.at(at));
            aux.erase(aux.begin()+ static_cast <unsigned long> (at) );
        }
        return dev;
    }
    case 1:{
        while (aux.size()>0) {
            size_t at=0;
            double act_min=aux.at(0)->getPrecio();
            for (size_t i=0;i<aux.size();i++) {
                if(aux.at(i)->getPrecio()>act_min){
                    act_min=aux.at(i)->getPrecio();
                    at=i;
                }
            }
            dev.push_back(aux.at(at));
            aux.erase(aux.begin()+ static_cast <unsigned long> (at));
        }
        return dev;
    }
    }
    return dev;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    ui->comboBox_2->currentIndexChanged(ui->comboBox_2->currentIndex());
}

void MainWindow::on_BusquedaLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    ui->comboBox_2->currentIndexChanged(ui->comboBox_2->currentIndex());
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    vector<Producto*> vecaux;
    if(ui->comboBox->currentIndex()!=5){
        for (size_t i=static_cast <size_t> (ui->comboBox->currentIndex())*10 ; i<static_cast <size_t> (ui->comboBox->currentIndex())*10+10;i++) {
            if(productos.at(i).getNombre().contains(ui->BusquedaLE->text(),Qt::CaseInsensitive)){
                vecaux.push_back(&productos.at(i));
            }
        }
    }
    else {
        for (size_t i=0;i<productos.size();i++) {
            if(productos.at(i).getNombre().contains(ui->BusquedaLE->text(),Qt::CaseInsensitive)){
                vecaux.push_back(&productos.at(i));
            }
        }
    }

    if(vecaux.size()==0){
        QLayoutItem* item;
        while( (item=layoutaux->takeAt(0)) )
        {
            delete item->widget();
            delete item;
        }

        return;
    }

    vecaux=ordenarProductos(vecaux,index);

    change_layout(0,vecaux.size(),vecaux);
}

void MainWindow::on_agregar_clicked()
{

}

void MainWindow::comprar(int cantidad)
{
    QSpinBox* button = qobject_cast<QSpinBox*>(sender());


}
