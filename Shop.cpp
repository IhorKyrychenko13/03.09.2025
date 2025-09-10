#include "Shop.h"

Shop::Shop()
{
}

void Shop::addProduct(const Product& obj)
{
	Array.push_back(obj);
}

void Shop::showInfo() const
{
	cout << "amount of products: " << Array.size() << endl;
	for (int i = 0; i < Array.size(); i++)
	{
		cout << Array[i] << endl;
	}
}