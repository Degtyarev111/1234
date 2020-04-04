//
// Created by Admin on 29.02.2020.
//

#ifndef UNTITLED1_ORDER_H
#define UNTITLED1_ORDER_H

#include <string>
#include <ctime>
#include <map>
#include "product.h"
#include "client.h"

class Order
{
private:
    long id;
    Client client;
    map<Product, int> products;
    int discount;
    int cost;
public:
    Order();
    Order(Client client, map<Product, int> products);

    Client GetClient();
    map<Product, int> GetProducts();
	void OrderList(Product orders[], int AmountOfOrders);
};

#endif //UNTITLED1_ORDER_H
