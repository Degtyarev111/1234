#include <iostream>
#include <string>
#include <ctime>
#include <map>
#include "product.h"
#include "client.h"
#include "order.h"
#include "functions.h"

using namespace std;

int main()
{
    Client client;
    InputClient(client);
    OutputClient(client);

    //TO-DO
    //Попробовать реализовать выборку клиентов и продуктов по id
}