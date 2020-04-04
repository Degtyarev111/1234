//
// Created by Admin on 29.02.2020.
//

#ifndef UNTITLED1_PRODUCT_H
#define UNTITLED1_PRODUCT_H

#include <string>
#include <ctime>

using namespace std;

class Product
{
private:
    long id;
    string name;
    string manufacture;
    int quantity;
    int price;
    int percent;
public:
    Product();
    Product(string name, string manufacture, int quantity, int price, int percent);

    long GetID();

    string GetName();
    string GetManufacture();

    int GetQuantity();
    void SetQuantity(int quantity);
    int GetPrice() const;
    int GetPercent() const;
    void SetPercent(int percent);
	void ProductList(Product products[], int AmountOfProducts);
};

#endif //UNTITLED1_PRODUCT_H
