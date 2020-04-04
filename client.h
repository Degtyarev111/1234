//
// Created by Admin on 29.02.2020.
//

#ifndef UNTITLED1_CLIENT_H
#define UNTITLED1_CLIENT_H

#include <string>
#include <ctime>

using namespace std;

class Client
{
private:
    long id;
    string name;
    string phone;
public:
    Client();
    Client(string name, string phone);
    long GetID();
    string GetName();
    string GetPhone();
	void OrderList(Client clients[], int AmountOfClients)
};


#endif //UNTITLED1_CLIENT_H
