#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "user.h"
#include "producto.h"

#include <QMenu>
#include <QAction>
#include <QFileDialog>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QFile>
#include <QGridLayout>
#include <QSpinBox>

#include <QDateTime>

#include <queue>

#include <QHash>

using namespace std;

class arista{
public:
    QString producto;
    int key;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_emailLE_textChanged(const QString &arg1);

    void on_passwordLE_textChanged(const QString &arg1);

    void on_newUserPB_clicked();

    void on_newNameLE_textChanged(const QString &arg1);

    void on_newMailLE_textChanged(const QString &arg1);

    void on_newPasswordLE_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_createPB_clicked();

    void on_loginPB_clicked();


    void openFile();

    void on_comboBox_currentIndexChanged(int index);

    void on_BusquedaLE_textChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_agregar_clicked();

    void comprar(int cantidad);

signals:
    void agrega(int cantidad);

private:
    Ui::MainWindow *ui;

    vector<User> users;
    vector<Producto> productos;
    size_t actualUser=0;

    purchase canasta;

    QHash<QString, QHash<QString,int> > grafo;

    void enableLoginPB();
    void enableCreatePB();

    QMenu* fileMenu;
    QAction* openFileAction;
    QString fileName;
    QFile dbFile;

    QGridLayout *layoutaux =new QGridLayout,*layoutrec =new QGridLayout;

    void change_layout(size_t inicio, size_t final, vector<Producto *> from);
    void change_best_selled();
    void change_recommended(vector<QString> can);

    struct CompareSelled {
        bool operator()(Producto const& p1, Producto const& p2)
        {
            return p1.getComprados() < p2.getComprados();
        }
    };

    struct CompareIterators {
        bool operator()(arista const& p1, arista const& p2)
        {
            return p1.key < p2.key;
        }
    };

    void loadDB();
    void saveDB();
    void loadProducts();

    vector<Producto *> ordenarProductos(vector<Producto *> aux, int tipo);
};

#endif // MAINWINDOW_H
