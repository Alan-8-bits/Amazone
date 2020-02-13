#ifndef USER_H
#define USER_H
#include <QString>
#include <vector>

using namespace std;

class purchase
{
public:
    QString date;
    vector<QString> items;
    int sizeItems();
};

class User
{
public:
    User();

    QString getName() const;
    void setName(const QString &value);

    QString getEmail() const;
    void setEmail(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

    void addPurchase(purchase compra);
    size_t sizePurchases();
    purchase purchasesAt(size_t i);

private:
    QString name;
    QString email;
    QString password;

    vector<purchase> purchases;
};

#endif // USER_H
