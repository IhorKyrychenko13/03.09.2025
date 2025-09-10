#include "Product.h"

Product::Product()
{
    title = "underfined";
    price = 0;
    madeDate = Date(2000, 1, 1);
    termSave = 0;
}

Product::Product(string title, float price, Date madeDate, int termSave)
{
    this->title = title;
    this->price = price;
    this->madeDate = madeDate;
    this->termSave = termSave;
}

void Product::setTitle(string title)
{
    this->title = title;
}

string Product::getTitle() const
{
    return title;
}

void Product::setPrice(float price)
{
    this->price = price;
}

float Product::getPrice() const
{
    return price;
}

Date Product::getMadeDate() const
{
    return madeDate;
}

int Product::getTerm() const
{
    return termSave;
}

bool Product::isExpired() const
{
    return madeDate + termSave < Date();
}

ostream& operator<<(ostream& out, const Product& obj)
{
    out << "title: " << obj.title << endl;
    out << "price: " << obj.price << endl;
    out << "date: " << obj.madeDate << endl;
    out << "term: " << obj.termSave << endl;
    out << "finish: " << obj.termSave + obj.madeDate << endl;
        if (obj.isExpired())
            out << "PRODUCT IS EXPIRED!!!" << endl;
        return out;
}

istream& operator>>(istream& in, Product& obj)
{
    cout << "Input title: ";
    getline(in, obj.title);
    cout << "Input price";
    in >> obj.price;
    cout << "Input date";
    in >> obj.madeDate;
    cout << "Input term";
    in >> obj.termSave;
    return in;
}
