#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>
#include <QObject>

class Producto: public QObject
{
    Q_OBJECT

public:
    Producto();
    Producto(const Producto&x);
    Producto(QString id,QString nombre,double precio);

    Producto& operator=(const Producto&x)
    {
        this->id=x.id;
        this->nombre=x.nombre;
        this->precio=x.precio;
        this->comprados=x.comprados;
        return *this;
    }


public slots:
    QString getId() const;
    void setId(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    double getPrecio() const;
    void setPrecio(double value);
    int getComprados() const;
    void setComprados(int value);

private:
    QString id;
    QString nombre;
    double precio;
    int comprados;

signals:

};

inline QString Producto::getId() const
{
    return id;
}

inline void Producto::setId(const QString &value)
{
    id = value;
}

inline QString Producto::getNombre() const
{
    return nombre;
}

inline void Producto::setNombre(const QString &value)
{
    nombre = value;
}

inline double Producto::getPrecio() const
{
    return precio;
}

inline void Producto::setPrecio(double value)
{
    precio = value;
}

inline Producto::Producto()
{
    comprados=0;
}

inline Producto::Producto(const Producto &x)
{
    this->id=x.id;
    this->nombre=x.nombre;
    this->precio=x.precio;
    this->comprados=x.comprados;
}

inline int Producto::getComprados() const
{
    return comprados;
}

inline void Producto::setComprados(int value)
{
    comprados = value;
}

inline Producto::Producto(QString id, QString nombre, double precio)
{
    this->id=id;
    this->nombre=nombre;
    this->precio=precio;
}

#endif // PRODUCTO_H
