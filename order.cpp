//
// Created by Admin on 29.02.2020.
//

#include "order.h"

Order::Order() {}
Order::Order(Client client, map<Product, int> products)
{
    id = static_cast<long>(time(0));
    this->client = client;
    this->products = products;

    int summa = 0;
    for (auto item : products) {
    summa += (item.first.GetPrice() + (item.first.GetPrice() * item.first.GetPercent())) * item.second;
    }
    if (summa > 10000) {
    discount = 10;
    } else {
    discount = 0;
    }
    cost = summa - (summa * discount);
}

Client Order::GetClient()
{
    return client;
}

map<Product, int> Order::GetProducts()
{
    return products;
}
void Order::OrderList(Order orders[], int AmountOfOrders) {
	for (int i = 0; i < AmountOfOrders; i++) {
		cout << orders[i] << "\n";
	}
}
