//
// Created by Admin on 29.02.2020.
//

#include "functions.h"

void InputClient(Client &client)
{
    string name, phone;
    cout << "Enter client's name: ";
    cin >> name;
    cout << "Enter client's phone: ";
    cin >> phone;

    Client c(name, phone);

    client = c;
}

void OutputClient(Client client)
{
    cout << "Client " << client.GetName() << "\t" << client.GetPhone() << endl;
}

void InputProduct(Product &product)
{
	string name, manufacture;
	int quantity, price, percent;
	cout << "Enter product name: "; cin >> name;
	cout << "Enter product manufacture: "; cin >> manufacture;
	cout << "Enter product quantity: "; cin >> quantity;
	cout << "Enter product price: "; cin >> price;
	cout << "Enter product percent: "; cin >> percent;
	Product p(name, manufacture, quantity, price, percent);
	product = p;
}

void OutputProduct(Product product)
{
	cout << "Product: " << Product.name << "\t" << Product.manufacture << "\t" << Product.quantity << "\t" << Product.price << "\t" << Product.percent;
}

void InputOrder(Order &order)
{
    Client client;
    Product product;
    int count = 0;
    map<Product, int> products;

    char yes_no;

    InputClient(client);

    do {
       InputProduct(product);
       cout << "Enter count of product: ";
       cin >> count; cout << endl;

       products.insert(make_pair(product, count));

       cout << "Enter Y - yes"; cin >> yes_no; cout << endl;
    } while (yes_no == 'Y' || yes_no == 'y');

    Order o(client, products);

    order = o;
}

void OutputOrder(Order order)
{

}