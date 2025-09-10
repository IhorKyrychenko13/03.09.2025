#pragma once
#include "Product.h"
#include <vector>
class Shop {
	vector<Product> Array;
public:
	Shop();
	void addProduct(const Product&obj);
	void showInfo()const;
};