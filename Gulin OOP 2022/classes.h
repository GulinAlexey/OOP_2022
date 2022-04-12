#pragma once

#include <iostream>
#include <locale>
#include <Windows.h>
#include <list>
#include <time.h>

using namespace std;

#define QTY_MAX 100 //����. ����� �������� � �������

#define WEEK_DAYS 7 //���-�� ���� � ������

#define SURNAME 0 //��� ������ ����� (��� ������� � ������� ������� �����)
#define NAME 1 //��� ������ ����� (��� ����� � ������� ������� �����)
#define PATRONYMIC 2 //��� ������ ����� (��� �������� � ������� ������� �����)

#define ADMIN 0 //�������� ����������� ��� ���� ��������� - �������������
#define OPERATOR 1 //�������� ����������� ��� ���� ��������� - ��������
#define COURIER 2 //�������� ����������� ��� ���� ��������� - ������

#define STATUS_WAITING 0 //������ ���������� ������ - ������� ����������
#define STATUS_PICKING 1 //������ ���������� ������ - ������ ���� �������� ������� � �����������
#define STATUS_DELIVERY 2  //������ ���������� ������ - �������� �������
#define STATUS_FINISHED 3 //������ ���������� ������ - ���������� (���������)
#define STATUS_STORING 4 //������ ���������� ������ - �������� ������� � �����
#define STATUS_CANCEL 5 //������ ���������� ������ - ������ ������

#define PAYMENT_NOT 0 //������ ������ ������ - ��� ��������
#define PAYMENT_CASH 1 //������ ������ ������ - ��������� ���������
#define PAYMENT_TERMINAL 2 //������ ������ ������ - ��������� ����� ��������

#define URGENCY_NORMAL 0 //��� ��������� ������ - "�������"
#define URGENCY_HIGH 1 //��� ��������� ������ - "�������"

#define TRANS_TYPE_COMPLETED_ORDER 1 //��� ���������� - ����������� �����
#define TRANS_TYPE_SALARY 2 //��� ���������� - ��������
#define TRANS_TYPE_REVENUE 3 //��� ���������� -  ��������� �������
#define TRANS_TYPE_EXPENSES 4 //��� ���������� - ��������� �������

//���������� �������
class Human; //�������
class Worker; //��������
class Schedule_real; //������ ������ ��������
class Schedule; //������ ������ (�����������)
class Courier; //������
class Financial_transaction; //�������� (����������) ����������
class Client; //������
class Order; //�����
class Rate; //����� �� �������� �������
class Penalty; //���� �� �������� ������� � ����

class Pricing; //�������� (����������� ����� ��� �������������) - �������� ��� �����, ����

//��� �������� �������
class Human_abstract; //��������� (����������� �����) ��� �����
class Agent; //����� ����� (������������)
class Adapter_agent_to_client; //������� ������ ����� ��� ������������� ������� ������ ������

//��� �������� ��������
class Unit; //��������� ������������ ������� � ������ (��� ����������)
class Composite_unit; //�������� ���������
class Leaf_unit; //���� ���������

//��� �������� ���������
class Additional_feature_to_worker; // ���������
class Administrator; //���������� ������ - �������������
class Operator; //���������� ������ - ��������
class Courier_type; //���������� ������ - ������ (���)

//��� �������� �����
class Complete_the_order; //���������� ������ (�����)

class Human_abstract //��������� (����������� �����) ��� �����
{
public:
	//��� Human
	virtual void set_num(int input) = 0;
	virtual void set_surname(string input) = 0;
	virtual void set_name(string input) = 0;
	virtual void set_patronymic(string input) = 0;
	virtual void set_phone(string input) = 0;
	virtual int get_num() = 0;
	virtual string get_surname() = 0;
	virtual string get_name() = 0;
	virtual string get_patronymic() = 0;
	virtual string get_phone() = 0;

	//��� Client
	virtual void set_address(string input) = 0;
	virtual string get_address() = 0;

	//��� Worker
	virtual void set_status(int input) = 0;
	virtual void set_login(string input) = 0;
	virtual void set_password(string input) = 0;
	virtual void set_salary_now(float input) = 0;
	virtual void set_own_schedule(Schedule* input) = 0;
	virtual void set_percent_to_salary(float input) = 0;
	virtual int get_status() = 0;
	virtual string get_login() = 0;
	virtual string get_password() = 0;
	virtual float get_salary_now() = 0;
	virtual Schedule* get_own_schedule() = 0;
	virtual float get_percent_to_salary() = 0;

	virtual string get_description() = 0;
	virtual int get_type_of_worker() = 0;
};

class Additional_feature_to_worker : public Human_abstract // ���������
{
protected:
	Human_abstract* human; // ������������ ������
public:
	virtual string get_description() = 0;
	virtual int get_type_of_worker() = 0;

	//���������� ������� ������������ ������ ��� Human, ����� ������ ����� ������� ������ ������� ����������
	void set_num(int input)
	{
		human->set_num(input);
	}
	void set_surname(string input)
	{
		human->set_surname(input);
	}
	void set_name(string input)
	{
		human->set_name(input);
	}
	void set_patronymic(string input)
	{
		human->set_patronymic(input);
	}
	void set_phone(string input)
	{
		human->set_phone(input);
	}
	int get_num()
	{
		return human->get_num();
	}
	string get_surname()
	{
		return human->get_surname();
	}
	string get_name()
	{
		return human->get_name();
	}
	string get_patronymic()
	{
		return human->get_patronymic();
	}
	string get_phone()
	{
		return human->get_phone();
	}

	//���������� ������� ������������ ������ ��� Worker, ����� ������ ����� ������� ������ ������� ����������
	void set_status(int input)
	{
		human->set_status(input);
	}
	void set_login(string input)
	{
		human->set_login(input);
	}
	void set_password(string input)
	{
		human->set_password(input);
	}
	void set_salary_now(float input)
	{
		human->set_salary_now(input);
	}
	void set_own_schedule(Schedule* input)
	{
		human->set_own_schedule(input);
	}
	void set_percent_to_salary(float input)
	{
		human->set_percent_to_salary(input);
	}
	////
	int get_status()
	{
		return human->get_status();
	}
	string get_login()
	{
		return human->get_login();
	}
	string get_password()
	{
		return human->get_password();
	}
	float get_salary_now()
	{
		return human->get_salary_now();
	}
	Schedule* get_own_schedule()
	{
		return human->get_own_schedule();
	}
	float get_percent_to_salary()
	{
		return human->get_percent_to_salary();
	}
	//���������� ������� ������������ ������ ��� Client, ����� ������ ����� ������� ������ ������� ����������
	void set_address(string input)
	{}
	string get_address()
	{
		return "������";
	}
};

class Administrator : public Additional_feature_to_worker //���������� ������ - �������������
{
public:
	Administrator(Human_abstract* in_human)
	{
		human = in_human;
	}
	~Administrator()
	{
		if(human)
			delete human;
	}

	virtual string get_description()
	{
		return human->get_description() + string(" � ���������� �������������"); //������ �������� �������� ���������������
	}

	virtual int get_type_of_worker()
	{
		return ADMIN; //�������� ����������� ������� ���� ���������
	}
};

class Operator : public Additional_feature_to_worker //���������� ������ - ��������
{
public:
	Operator(Human_abstract* in_human)
	{
		human = in_human;
	}
	~Operator()
	{
		if(human)
			delete human;
	}

	virtual string get_description()
	{
		return human->get_description() + string(" � ���������� ��������"); //������ �������� �������� ����������
	}

	virtual int get_type_of_worker()
	{
		return OPERATOR; //�������� ����������� ������� ���� ���������
	}
};

class Courier_type : public Additional_feature_to_worker //���������� ������ - ������ (���)
{
public:
	Courier_type(Human_abstract* in_human)
	{
		human = in_human;
	}
	~Courier_type()
	{
		if(human)
			delete human;
	}

	virtual string get_description()
	{
		return human->get_description() + string(" � ���������� ������"); //������ �������� �������� ��������
	}

	virtual int get_type_of_worker()
	{
		return COURIER; //�������� ����������� ������� ���� ���������
	}
};

class Agent //����� ����� (������������)
{
private:
	int id; //ID � �������
	string full_name[3]; //0 - �������, 1 - ���, 2 - ��������
	string work_number_phone; //����� �������� ��������
	string company_name; //�������� �������� ������
	string company_address; //����� ����� ��������

public:
	Agent() //����������� ������
	{}
	~Agent() //���������� ������
	{}

	/*������ set*/
	void set_id(int setter)
	{
		id = setter;
	}
	void set_full_name(string setter, int num)
	{
		full_name[num] = setter;
	}
	void set_work_number_phone(string setter)
	{
		work_number_phone = setter;
	}
	void set_company_name(string setter)
	{
		company_name = setter;
	}
	void set_company_address(string setter)
	{
		company_address = setter;
	}
	/*������ get*/
	int get_id( )
	{
		return id;
	}
	string get_full_name(int num)
	{
		return full_name[num];
	}
	string get_work_number_phone()
	{
		return work_number_phone;
	}
	string get_company_name()
	{
		return company_name;
	}
	string get_company_address()
	{
		return company_address;
	}
};

class Adapter_agent_to_client: public Human_abstract //������� ������ ����� ��� ������������� ������� ������ ������
{
private:
	Agent* adapt; //��������� �� ������������ ������
public:
	Adapter_agent_to_client() //�����������
	{
		adapt = new Agent();
	}
	Adapter_agent_to_client(Agent* input)
	{
		adapt = input;
	}
	~Adapter_agent_to_client() //����������
	{
		delete adapt;
	}
	//������ set, get
	void set_num(int input) 
	{
		adapt->set_id(input);
	}
	void set_surname(string input) 
	{
		adapt->set_full_name(input, SURNAME);
	}
	void set_name(string input) 
	{
		adapt->set_full_name(input, NAME);
	}
	void set_patronymic(string input) 
	{
		adapt->set_full_name(input, PATRONYMIC);
	}
	void set_phone(string input) 
	{
		adapt->set_work_number_phone(input);
	}
	///
	int get_num() 
	{
		return adapt->get_id();
	}
	string get_surname() 
	{
		return adapt->get_full_name(SURNAME);
	}
	string get_name() 
	{
		return adapt->get_full_name(NAME);
	}
	string get_patronymic() 
	{
		return adapt->get_full_name(PATRONYMIC);
	}
	string get_phone() 
	{
		return adapt->get_work_number_phone();
	}
	///
	void set_address(string input) 
	{
		adapt->set_company_address(input);
	}
	string get_address() 
	{
		return adapt->get_company_address();
	}

	//���������� ������� ������������ ������ ��� Wokrer, ����� ������ ����� ������� ������ ������� ��������
	void set_status(int input)
	{}
	void set_login(string input)
	{}
	void set_password(string input)
	{}
	void set_salary_now(float input)
	{}
	void set_own_schedule(Schedule* input)
	{}
	void set_percent_to_salary(float input)
	{}
	int get_status()
	{
		return -1;
	}
	string get_login()
	{
		return "������";
	}
	string get_password()
	{
		return "������";
	}
	float get_salary_now()
	{
		return -1;
	}
	Schedule* get_own_schedule()
	{
		return NULL;
	}
	float get_percent_to_salary()
	{
		return -1;
	}

	string get_description()
	{
		return "������";
	}
	int get_type_of_worker()
	{
		return -1;
	}
};

class Human : public Human_abstract //�������
{
protected:
	int num; //���������� ����� � ������� 
	string surname; //������� 
	string name; //���
	string patronymic; //�������� 
	string phone; //����� �������� 
public:
	Human() //�����������
	{}

	~Human() //����������
	{}

	//������ set � get ��� ����� ������
	void set_num(int input)
	{
		num = input;
	}
	void set_surname(string input)
	{
		surname = input;
	}
	void set_name(string input)
	{
		name = input;
	}
	void set_patronymic(string input)
	{
		patronymic = input;
	}
	void set_phone(string input)
	{
		phone = input;
	}
	////
	int get_num()
	{
		return num;
	}
	string get_surname()
	{
		return surname;
	}
	string get_name()
	{
		return name;
	}
	string get_patronymic()
	{
		return patronymic;
	}
	string get_phone()
	{
		return phone;
	}
};

class Schedule_real //������ ������ �������� (������������ ����������� ��� �������� ������)
{
private:
	int num_schedule; //���������� ����� �������
	int working_days[WEEK_DAYS]; //������� ��� ������ 
	int start_hours; //����� ������ �������� ��� (����)
	int start_minutes; //����� ������ �������� ��� (������)
	int end_hours; //����� ��������� �������� ��� (����)
	int end_minutes; //����� ��������� �������� ��� (������)
public:
	Schedule_real() //�����������
	{}

	~Schedule_real() //����������
	{}

	void print_working_days() //������� �� ����� ������� ��� �������
	{
		cout << "������� ��� ������: ";
		if(working_days[0]==1)
		{
			cout << "�� ";
		}
		if(working_days[1]==1)
		{
			cout << "�� ";
		}
		if(working_days[2]==1)
		{
			cout << "�� ";
		}
		if(working_days[3]==1)
		{
			cout << "�� ";
		}
		if(working_days[4]==1)
		{
			cout << "�� ";
		}
		if(working_days[5]==1)
		{
			cout << "�� ";
		}
		if(working_days[6]==1)
		{
			cout << "�� ";
		}
		cout << endl;
	}

	//������ set � get ��� ����� ������
	void set_num_schedule(int input)
	{
		num_schedule = input;
	}
	void set_working_days(int *input)
	{
		for(int i=0; i<WEEK_DAYS; i++)
		{
			working_days[i] = input[i];
		}
	}
	void set_start_hours(int input)
	{
		start_hours = input;
	}
	void set_start_minutes(int input)
	{
		start_minutes = input;
	}
	void set_end_hours(int input)
	{
		end_hours = input;
	}
	void set_end_minutes(int input)
	{
		end_minutes = input;
	}
	////
	int get_num_schedule()
	{
		return num_schedule;
	}
	int* get_working_days()
	{
		return working_days;
	}
	int get_start_hours()
	{
		return start_hours;
	}
	int get_start_minutes()
	{
		return start_minutes;
	}
	int get_end_hours()
	{
		return end_hours;
	}
	int get_end_minutes()
	{
		return end_minutes;
	}

};

class Schedule //����������� ������� ������
{
private:
	Schedule_real* schedule; //��������� �� �������� ������ ������
public:
	Schedule() //�����������
	{
		schedule = NULL;
	}
	~Schedule() //����������
	{
		if(schedule != NULL)
		{
			delete schedule; //�������� ������ �� ��������� �������
		}
	}

	void print_working_days() //������� �� ����� ������� ��� �������
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
		}
		else
		{
			schedule->print_working_days(); //��������� � ��������� �������
		}
	}

	//������ set � get ��� ��������� �������
	void set_num_schedule(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_num_schedule(input); //��������� � ��������� �������
	}
	void set_working_days(int *input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_working_days(input); //��������� � ��������� �������
	}
	void set_start_hours(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_start_hours(input); //��������� � ��������� �������
	}
	void set_start_minutes(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_start_minutes(input); //��������� � ��������� �������
	}
	void set_end_hours(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_end_hours(input); //��������� � ��������� �������
	}
	void set_end_minutes(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //������� ������ ������ ������ ��������, ���� �� �����������
		}
		schedule->set_end_minutes(input); //��������� � ��������� �������
	}
	////
	int get_num_schedule()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return 0;
		}
		else
		{
			return schedule->get_num_schedule(); //��������� � ��������� �������
		}
	}
	int* get_working_days()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return NULL;
		}
		else
		{
			return schedule->get_working_days(); //��������� � ��������� �������
		}
	}
	int get_start_hours()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return 0;
		}
		else
		{
			return schedule->get_start_hours(); //��������� � ��������� �������
		}
	}
	int get_start_minutes()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return 0;
		}
		else
		{
			return schedule->get_start_minutes(); //��������� � ��������� �������
		}
	}
	int get_end_hours()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return 0;
		}
		else
		{
			return schedule->get_end_hours(); //��������� � ��������� �������
		}
	}
	int get_end_minutes()
	{
		if(schedule==NULL)
		{
			cout << "������. ������� �������� ������ ������� ������, ������� ��� �� ��� ������." << endl;
			return 0;
		}
		else
		{
			return schedule->get_end_minutes(); //��������� � ��������� �������
		}
	}

};

class Worker : public Human //��������
{
protected: 
	int status; //������ (���������, �������, �����������, ������� � �.�.)
	string login; //�����
	string password; //������
	float salary_now; //������� �������� �������� � ���.
	Schedule* own_schedule; //��������� �� ������ ������
	float percent_to_salary; //������� � ���� �������� � ������� 

public:
	Worker() //�����������
	{
		own_schedule = new Schedule;
	}

	~Worker() //����������
	{
		delete own_schedule;
	}

	virtual string get_description()
	{
		return string("��������"); //������ �������� �������� ������ ����������
	}

	virtual int get_type_of_worker()
	{
		return (-1); //�������� ����������� ��������� � ������������� �����
	}

	//������ set � get ��� ����� ������
	void set_status(int input)
	{
		status = input;
	}
	void set_login(string input)
	{
		login = input;
	}
	void set_password(string input)
	{
		password = input;
	}
	void set_salary_now(float input)
	{
		salary_now = input;
	}
	void set_own_schedule(Schedule* input)
	{
		own_schedule = input;
	}
	void set_percent_to_salary(float input)
	{
		percent_to_salary = input;
	}
	////
	int get_status()
	{
		return status;
	}
	string get_login()
	{
		return login;
	}
	string get_password()
	{
		return password;
	}
	float get_salary_now()
	{
		return salary_now;
	}
	Schedule* get_own_schedule()
	{
		return own_schedule;
	}
	float get_percent_to_salary()
	{
		return percent_to_salary;
	}
	//���������� ������� ������������ ������ ��� Client, ����� ������ ����� ������� ������ ������� ��������
	void set_address(string input)
	{}
	string get_address()
	{
		return "������";
	}
};

class Courier : public Worker //������
{
private:
	int qty_active_orders; //���-�� �������� ������� 
	Order** active_orders; //������ ���������� �� �������� ������
public:
	Courier(string input_surname, string input_name) //�����������
	{
		surname = input_surname;
		name = input_name;

		own_schedule = new Schedule;
	}

	Courier()
	{}

	~Courier() //����������
	{
		delete own_schedule;
	}

	//������ set � get ��� ����� ������
	void set_qty_active_orders(int input)
	{
		qty_active_orders = input;
	}
	void set_active_orders(Order **input)
	{
		active_orders = input;
	}
	////
	int get_qty_active_orders()
	{
		return qty_active_orders;
	}
	Order** get_active_orders()
	{
		return active_orders;
	}
};

class Financial_transaction //�������� (����������) ����������
{
private:
	int num_transaction; //���������� ����� ����������
	int type_transaction; //��� (������������ �����, ���������, ���������� �������, ���������� ��������)
	float value; //�������� � ������ 
	int date_day; //���� ���������� (����)
	int date_month; //���� ���������� (�����)
	int date_year; //���� ���������� (���)
	Order* complete_order; //��������� �� ����������� ����� (������������, ���� ��� = ������������ �����)
	int type_recipient; //��� ���������� �������� (��������������, ���������, �������; ������������, ���� ��� = ���������)
	Worker* recipient_w; //��������� �� ���������� �������� - ��������� (������������, ���� ��� = ��������� � ��� ���������� = �������������� ��� ���������)
	Courier* recipient_c; //��������� �� ���������� �������� - ������� (������������, ���� ��� = ��������� � ��� ���������� = �������)
	string notes; //���������� ����������

public:
	Financial_transaction() //�����������
	{}

	~Financial_transaction() //����������
	{}

	//������ set � get ��� ����� ������
	void set_num_transaction(int input)
	{
		num_transaction = input;
	}
	void set_type_transaction(int input)
	{
		type_transaction = input;
	}
	void set_value(float input)
	{
		value = input;
	}
	void set_date_day(int input)
	{
		date_day = input;
	}
	void set_date_month(int input)
	{
		date_month = input;
	}
	void set_date_year(int input)
	{
		date_year = input;
	}
	void set_complete_order(Order* input)
	{
		complete_order = input;
	}
	void set_type_recipient(int input)
	{
		type_recipient = input;
	}
	void set_recipient_w(Worker* input)
	{
		recipient_w = input;
	}
	void set_recipient_c(Courier* input)
	{
		recipient_c = input;
	}
	void set_notes(string input)
	{
		notes = input;
	}
	////
	int get_num_transaction()
	{
		return num_transaction;
	}
	int get_type_transaction()
	{
		return type_transaction;
	}
	float get_value()
	{
		return value;
	}
	int get_date_day()
	{
		return date_day;
	}
	int get_date_month()
	{
		return date_month;
	}
	int get_date_year()
	{
		return date_year;
	}
	Order* get_complete_order()
	{
		return complete_order;
	}
	int get_type_recipient()
	{
		return type_recipient;
	}
	Worker* get_recipient_w()
	{
		return recipient_w;
	}
	Courier* get_recipient_c()
	{
		return recipient_c;
	}
	string get_notes()
	{
		return notes;
	}
};

class Client : public Human //������
{
private:
	string address; //�����

public:
	Client(string input_surname, string input_name) //�����������
	{
		surname = input_surname;
		name = input_name;
	}
	Client()
	{}

	~Client() //����������
	{}

	//������ set � get ��� ����� ������
	void set_address(string input)
	{
		address = input;
	}
	////
	string get_address()
	{
		return address;
	}

	//���������� ������� ������������ ������ ��� Client, ����� ������ ����� ������� ������
	//��� Worker
	virtual void set_status(int input) 
	{}
	virtual void set_login(string input)
	{}
	virtual void set_password(string input) 
	{}
	virtual void set_salary_now(float input) 
	{}
	virtual void set_own_schedule(Schedule* input) 
	{}
	virtual void set_percent_to_salary(float input) 
	{}
	virtual int get_status() 
	{ return (-1);}
	virtual string get_login() 
	{ return "������";}
	virtual string get_password() 
	{ return "������";}
	virtual float get_salary_now() 
	{ return (-1);}
	virtual Schedule* get_own_schedule() 
	{ return NULL;}
	virtual float get_percent_to_salary() 
	{ return (-1);}

	virtual string get_description() 
	{ return "������";}
	virtual int get_type_of_worker() 
	{ return (-1);}
};

class Pricing //�������� (����������� ����� ��� �������������) - �������� ��� �����, ����
{
public:
	virtual void type_price()= 0; //������������ ����� ������ ���� ������� ���������
};

class Rate : public Pricing //����� �� �������� �������
{
private:
	int num_rate; //���������� ����� ������ 
	float min_weight; //����������� ����� ������� � �� 
	float max_weight; //������������ ����� ������� � �� 
	float cost; //��������� � ������ 
	float percent_increase; //������� ��������� ��������� �� ������� ��� �������� ������

public:
	Rate()
	{}
	Rate(float input_cost) //�����������
	{
		cost = input_cost;
	}

	~Rate() //����������
	{}

	void type_price() //����� ���� ������� ��������� ����� �������������
	{
		cout << "��������� �������� ��������� �������� ������: " << cost << " ���." << endl;
	}

	//������ set � get ��� ����� ������
	void set_num_rate(int input)
	{
		num_rate = input;
	}
	void set_min_weight(float input)
	{
		min_weight = input;
	}
	void set_max_weight(float input)
	{
		max_weight = input;
	}
	void set_cost(float input)
	{
		cost = input;
	}
	void set_percent_increase(float input)
	{
		percent_increase = input;
	}
	////
	int get_num_rate()
	{
		return num_rate;
	}
	float get_min_weight()
	{
		return min_weight;
	}
	float get_max_weight()
	{
		return max_weight;
	}
	float get_cost()
	{
		return cost;
	}
	float get_percent_increase()
	{
		return percent_increase;
	}
};

class Penalty : public Pricing //���� �� �������� ������� � ����
{
private:
	int num_penalty; //���������� ����� ���� 
	float min_weight; //����������� ����� ������� � �� 
	float max_weight; //������������ ����� ������� � �� 
	float percent_penalty; //������� ���� �� ��������� ������ 
public:
	Penalty()
	{}
	Penalty(float input_percent_penalty) //�����������
	{
		percent_penalty = input_percent_penalty;
	}

	~Penalty() //����������
	{}

	void type_price() //����� ���� ������� ��������� ����� �������������
	{
		cout << "��������� �������� ��������� �������� ����: ������� " << percent_penalty*100 << "% � ����." << endl;
	}

	//������ set � get ��� ����� ������
	void set_num_penalty(int input)
	{
		num_penalty = input;
	}
	void set_min_weight(float input)
	{
		min_weight = input;
	}
	void set_max_weight(float input)
	{
		max_weight = input;
	}
	void set_percent_penalty(float input)
	{
		percent_penalty = input;
	}
	////
	int get_num_penalty()
	{
		return num_penalty;
	}
	float get_min_weight()
	{
		return min_weight;
	}
	float get_max_weight()
	{
		return max_weight;
	}
	float get_percent_penalty()
	{
		return percent_penalty;
	}
};

class Unit //��������� ������������ ������� � ������ (��� ����������)
{
protected:
	string name; //��� ��������
	string type; //������������ ���� �������� (��������, ������, ��� � �.�.)
public:
	//������������
	Unit() 
	{};
	Unit(const string &name, const string &type)
	{
		this->name = name;
		this->type = type;
	}

	virtual void display() = 0;
	virtual void composition() = 0;
	virtual void type_of_unit() = 0;

	virtual Composite_unit* get_composite()
	{
		return 0;
	}
};

class Composite_unit : public Unit //�������� ���������
{
	list<Unit*> children;

public:
	void add(Unit* leaf)
	{
		children.push_back(leaf);
	}

	void remove(Unit* leaf)
	{
		children.remove(leaf);
	}

	virtual Composite_unit* get_composite()
	{
		return this;
	}

	virtual void display()
	{
		for (list<Unit*>::iterator iter = children.begin(); iter != children.end(); iter++)
		{
			(*iter)->display();
		}
		cout << endl;
	}

	virtual void composition()
	{
		for (list<Unit*>::iterator iter = children.begin(); iter != children.end(); iter++) 
		{
			(*iter)->composition();
		}
		cout << endl;
	}

	virtual void type_of_unit()
	{
		for (list<Unit*>::iterator iter = children.begin(); iter != children.end(); iter++)
		{
			(*iter)->type_of_unit();
		}
		cout << endl;
	}
};

class Leaf_unit : public Unit //����
{
public:
	Leaf_unit(const string &name, const string &type) : Unit(name, type) {}
	virtual void display()
	{
		cout << name << ", " << type << endl;
	}
	virtual void composition()
	{
		cout << " ���� �������: " << name;
	}
	virtual void type_of_unit()
	{
		cout << type << endl;
	}
};

class Order //�����
{
private:
	int num_order; //���������� ����� ������ 
	Worker* its_operator; //��������� �� ��������� ������ 
	Courier* its_courier; //��������� �� ������� ������ 
	int create_day; //���� �������� ������ (����)
	int create_month; //���� �������� ������ (�����)
	int create_year; //���� �������� ������ (���)
	int finish_day; //���� ���������� ������ (����)
	int finish_month; //���� ���������� ������ (�����)
	int finish_year; //���� ���������� ������ (���)
	Human_abstract* customer; //��������� �� ���������
	Human_abstract* recipient; //��������� �� ����������
	Rate* its_rate; //��������� �� �����
	Penalty* its_penalty; //��������� �� ����
	int type_urgent; //��� ��������� (�������� ��� �������)
	float price; //��������� �������� � ������ 
	float weight; //����� ������� � �� 
	float length; //����� ������� � �.
	float width; //������ ������� � �.
	float height; //������ ������� � �.
	int payment_status; //������ ������ (��� ��������, ��������� ���������, ��������� ����� ��������)
	int execution_status; //������ ���������� (�������� �����������, ������� �������� �������, ��������������, �����������, ����������, ���������)
	int storage_time; //��������� ����� �������� � ����
	string notes; //���������� ������
	Composite_unit* units; //���������� ������������ ��������� � ������ (� �� �������������� � ������)

	Pricing* pricing_of_order; // ��������� ������, �������� ����� ������������ ������ (��� ������� ��������� ������)

public:
	Order()
	{
	}
	Order(Courier* input_courier, Human_abstract* input_recipient, Rate* input_rate, Penalty* input_penalty) //�����������
	{
		its_courier = input_courier; //������������� ��������� �� ������� ������
		recipient = input_recipient; //������������� ��������� �� ���������� ������

		its_rate = input_rate; //������������� ��������� �� ����� ������
		its_penalty = input_penalty; //������������� ��������� �� ���� ������

		pricing_of_order = input_rate; //���������� ��� ������� ���������� ������ �����
	}
	Order(Composite_unit* input_units) //�����������
	{
		units = input_units;
	}

	~Order() //����������
	{
	}


	void type_price() //����� ������ ���� ������� ��������� ����� �������������
	{
		pricing_of_order->type_price();
	}

	void pricing_is_rate() //������ ��������� �������� �����
	{
		pricing_of_order = its_rate; //������ ����� ������������ ������
	}

	void pricing_is_penalty() //������ ��������� �������� ����
	{
		pricing_of_order = its_penalty; //������ ����� ������������ ����������
	}

	//������ set � get ��� ����� ������
	void set_units(Composite_unit* input)
	{
		units = input;
	}

	Composite_unit* get_units()
	{
		return units;
	}

	float receive_price() //�������� (���������) ���� �������� ������ (������� �������������� �������)
	{
		float count_price=0; //��������� �������� ����
		if(its_rate!=NULL)
			count_price = its_rate->get_cost(); //�������� ���� �� ������

		if(execution_status == STATUS_STORING) //���� ������� ��������
		{
			if(its_penalty!=NULL)
				for(int i=storage_time+1; i>0; i--) //���� ���������� ���� �� ���������� ��������� ���� ��������
				{
					count_price = count_price * its_penalty->get_percent_penalty();
				}
		}

		price = count_price;

		return price;
	}

	//////
	void set_num_order(int input)
	{
		num_order = input;
	}
	void set_its_operator(Worker* input)
	{
		its_operator = input;
	}
	void set_its_courier(Courier* input)
	{
		its_courier = input;
	}
	void set_create_day(int input)
	{
		create_day = input;
	}
	void set_create_month(int input)
	{
		create_month = input;
	}
	void set_create_year(int input)
	{
		create_year = input;
	}
	void set_finish_day(int input)
	{
		finish_day = input;
	}
	void set_finish_month(int input)
	{
		finish_month = input;
	}
	void set_finish_year(int input)
	{
		finish_year = input;
	}
	void set_customer(Human_abstract* input)
	{
		customer = input;
	}
	void set_recipient(Human_abstract* input)
	{
		recipient = input;
	}
	void set_its_rate(Rate* input)
	{
		its_rate = input;
	}
	void set_its_penalty(Penalty* input)
	{
		its_penalty = input;
	}
	void set_type_urgent(int input)
	{
		type_urgent = input;
	}
	void set_price(float input)
	{
		price = input;
	}
	void set_weight(float input)
	{
		weight = input;
	}
	void set_length(float input)
	{
		length = input;
	}
	void set_width(float input)
	{
		width = input;
	}
	void set_height(float input)
	{
		height = input;
	}
	void set_payment_status(int input)
	{
		payment_status = input;
	}
	void set_execution_status(int input)
	{
		execution_status = input;
	}
	void set_notes(string input)
	{
		notes = input;
	}
	void set_storage_time(int input)
	{
		storage_time = input;
	}
	////
	int get_num_order()
	{
		return num_order;
	}
	Worker* get_its_operator()
	{
		return its_operator;
	}
	Courier* get_its_courier()
	{
		return its_courier;
	}
	int get_create_day()
	{
		return create_day;
	}
	int get_create_month()
	{
		return create_month;
	}
	int get_create_year()
	{
		return create_year;
	}
	int get_finish_day()
	{
		return finish_day;
	}
	int get_finish_month()
	{
		return finish_month;
	}
	int get_finish_year()
	{
		return finish_year;
	}
	Human_abstract* get_customer()
	{
		return customer;
	}
	Human_abstract* get_recipient()
	{
		return recipient;
	}
	Rate* get_its_rate()
	{
		return its_rate;
	}
	Penalty* get_its_penalty()
	{
		return its_penalty;
	}
	int get_type_urgent()
	{
		return type_urgent;
	}
	float get_price()
	{
		return price;
	}
	float get_weight()
	{
		return weight;
	}
	float get_length()
	{
		return length;
	}
	float get_width()
	{
		return width;
	}
	float get_height()
	{
		return height;
	}
	int get_payment_status()
	{
		return payment_status;
	}
	int get_execution_status()
	{
		return execution_status;
	}
	string get_notes()
	{
		return notes;
	}
	int get_storage_time()
	{
		return storage_time;
	}
};

class Complete_the_order //���������� ������ (�����)
{
private:
	Order* order_complete;
	Financial_transaction* trans_complete;
	Worker* operator_complete;
	Courier* courier_complete;
public:
	Complete_the_order(Order* ord, Financial_transaction* trans, Worker* op, Courier* cour)
	{
		order_complete = ord;
		trans_complete = trans;
		operator_complete = op;
		courier_complete = cour;
	}
	~Complete_the_order() {}

	void do_complete() //����� ���������� ������
	{
		order_complete->set_execution_status(STATUS_FINISHED); //�������� ������ ������ - "���������"

		//��������� �������� �������
		struct tm *time_now;
		time_t time_now_t = time(NULL);
		time_now = localtime(&time_now_t);

		//������ ������� ���� � �����. ��������� ���������� (����, �����, ���)
		int day_now = time_now->tm_mday;
		int month_now = time_now->tm_mon;
		int year_now = time_now->tm_year+1900;

		//������ ���� ���������� ������
		order_complete->set_finish_day(day_now);
		order_complete->set_finish_month(month_now);
		order_complete->set_finish_year(year_now);

		//������ ���������� � ���������� ������ ������
		trans_complete->set_type_transaction(TRANS_TYPE_COMPLETED_ORDER);
		trans_complete->set_value(order_complete->get_price());
		trans_complete->set_date_day(day_now);
		trans_complete->set_date_month(month_now);
		trans_complete->set_date_year(year_now);
		trans_complete->set_complete_order(order_complete);

		//������ � ���������� �������� � ������ ������ � ���� �������� ���������� (��������� � �������)
		if(operator_complete!=NULL)
			operator_complete->set_salary_now(operator_complete->get_salary_now() + order_complete->get_price() * operator_complete->get_percent_to_salary());
		if(courier_complete!=NULL)
		courier_complete->set_salary_now(courier_complete->get_salary_now() + order_complete->get_price() * courier_complete->get_percent_to_salary());
		
	}
};

//���������� ���������� � �������
extern class Order orders[QTY_MAX];
extern int qty_orders; //����� �������
extern class Courier couriers[QTY_MAX]; 
extern int qty_couriers; //����� ��������
extern class Worker operators[QTY_MAX]; 
extern int qty_operators; //����� ����������
extern class Worker admins[QTY_MAX];
extern int qty_admins; //����� ���������������
extern class Client clients[QTY_MAX]; 
extern int qty_clients; //����� ��������

extern class Financial_transaction transactions[QTY_MAX];
extern int qty_transactions; //����� ����������

extern class Rate rates[QTY_MAX];
extern int qty_rates; //����� �������
extern class Penalty penaltys[QTY_MAX];
extern int qty_penaltys; //����� ����