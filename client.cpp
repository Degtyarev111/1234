//
// Created by Admin on 29.02.2020.
//

#include "client.h"

Client::Client()
{
    id = static_cast<long>(time(0));
}
Client::Client(string name, string phone)
{
    id = static_cast<long>(time(0));
    this->name = name;
    this->phone = phone;
}

long Client::GetID()
{
    return id;
}

string Client::GetName()
{
    return name;
}

string Client::GetPhone()
{
    return phone;
}


void Client::OrderList(Client clients[], int AmountOfClients) {
	for (int i = 0; i < AmountOfClients; i++) {
		cout << clients[i] << "\n";
	}
}