#include "stdafx.h"
#include "classes.h"

//глобальные переменные и объекты
class Order orders[QTY_MAX];
int qty_orders=0; //всего заказов
class Courier couriers[QTY_MAX]; 
int qty_couriers=0; //всего курьеров
class Worker operators[QTY_MAX];
int qty_operators=0; //всего операторов
class Worker admins[QTY_MAX];
int qty_admins=0; //всего администраторов
class Client clients[QTY_MAX]; 
int qty_clients=0; //всего клиентов
class Financial_transaction transactions[QTY_MAX];
int qty_transactions; //всего транзакций
class Rate rates[QTY_MAX];
int qty_rates; //всего тарифов
class Penalty penaltys[QTY_MAX];
int qty_penaltys; //всего пени