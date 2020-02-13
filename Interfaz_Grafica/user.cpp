#include "user.h"

User::User()
{

}

QString User::getName() const
{
    return name;
}

void User::setName(const QString &value)
{
    name = value;
}

QString User::getEmail() const
{
    return email;
}

void User::setEmail(const QString &value)
{
    email = value;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &value)
{
    password = value;
}

void User::addPurchase(purchase compra)
{
    purchases.push_back(compra);
}

size_t User::sizePurchases()
{
    return purchases.size();
}

purchase User::purchasesAt(size_t i)
{
    return purchases.at(i);
}

int purchase::sizeItems()
{
    return int(items.size());
}
