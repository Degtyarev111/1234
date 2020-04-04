//
// Created by Admin on 29.02.2020.
//

#include "product.h"

Product::Product() {}

Product::Product(string name, string manufacture, int quantity, int price, int percent)
{
    id = static_cast<long>(time(0));
    this->name = name;
    this->manufacture = manufacture;
    this->quantity = quantity;
    this->price = price;
    this->percent = percent;
}

long Product::GetID()
{
    return id;
}

string Product::GetName()
{
    return name;
}
string Product::GetManufacture()
{
    return manufacture;
}

int Product::GetPercent() const
{
    return percent;
}
void Product::SetPercent(int percent)
{
    this->percent = percent;
}

int Product::GetPrice() const
{
    return price;
}

int Product::GetQuantity()
{
    return quantity;
}
void Product::SetQuantity(int quantity)
{
    this->quantity = quantity;
}

void Product::ProductList(Product products[], int AmountOfProducts) {
	for (int i = 0; i < AmountOfProducts; i++) {
		cout << products[i] << "\n";
	}
}







