#include "stdafx.h"
#include "classes.h"

//���������� ���������� � �������
class Order orders[QTY_MAX];
int qty_orders=0; //����� �������
class Courier couriers[QTY_MAX]; 
int qty_couriers=0; //����� ��������
class Worker operators[QTY_MAX];
int qty_operators=0; //����� ����������
class Worker admins[QTY_MAX];
int qty_admins=0; //����� ���������������
class Client clients[QTY_MAX]; 
int qty_clients=0; //����� ��������
class Financial_transaction transactions[QTY_MAX];
int qty_transactions; //����� ����������
class Rate rates[QTY_MAX];
int qty_rates; //����� �������
class Penalty penaltys[QTY_MAX];
int qty_penaltys; //����� ����