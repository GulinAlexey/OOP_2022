#pragma once

#include <iostream>
#include <locale>
#include <Windows.h>
#include <list>
#include <time.h>

using namespace std;

#define QTY_MAX 100 //макс. число объектов в массиве

#define WEEK_DAYS 7 //кол-во дней в неделе

#define SURNAME 0 //для класса Агент (для фамилии в массиве полного имени)
#define NAME 1 //для класса Агент (для имени в массиве полного имени)
#define PATRONYMIC 2 //для класса Агент (для отчества в массиве полного имени)

#define ADMIN 0 //числовое обозначение для типа работника - администратор
#define OPERATOR 1 //числовое обозначение для типа работника - оператор
#define COURIER 2 //числовое обозначение для типа работника - курьер

#define STATUS_WAITING 0 //статус выполнения заказа - ожидает выполнения
#define STATUS_PICKING 1 //статус выполнения заказа - курьер едет забирать посылку у отправителя
#define STATUS_DELIVERY 2  //статус выполнения заказа - доставка посылки
#define STATUS_FINISHED 3 //статус выполнения заказа - доставлено (завершено)
#define STATUS_STORING 4 //статус выполнения заказа - хранение посылки в офисе
#define STATUS_CANCEL 5 //статус выполнения заказа - отмена заказа

#define PAYMENT_NOT 0 //статус оплаты заказа - «не оплачено»
#define PAYMENT_CASH 1 //статус оплаты заказа - «оплачено наличными»
#define PAYMENT_TERMINAL 2 //статус оплаты заказа - «оплачено через терминал»

#define URGENCY_NORMAL 0 //тип срочности заказа - "обычный"
#define URGENCY_HIGH 1 //тип срочности заказа - "срочный"

#define TRANS_TYPE_COMPLETED_ORDER 1 //тип транзакции - выполненный заказ
#define TRANS_TYPE_SALARY 2 //тип транзакции - зарплата
#define TRANS_TYPE_REVENUE 3 //тип транзакции -  некоторая выручка
#define TRANS_TYPE_EXPENSES 4 //тип транзакции - некоторые расходы

//объявление классов
class Human; //Человек
class Worker; //Работник
class Schedule_real; //График работы реальный
class Schedule; //График работы (заместитель)
class Courier; //Курьер
class Financial_transaction; //Денежная (финансовая) транзакция
class Client; //Клиент
class Order; //Заказ
class Rate; //Тариф по доставке посылки
class Penalty; //Пени за хранение посылки в день

class Pricing; //Расценки (абстрактный класс для делегирования) - родитель для Тариф, Пени

//для паттерна Адаптер
class Human_abstract; //интерфейс (абстрактный класс) для людей
class Agent; //класс Агент (адаптируемый)
class Adapter_agent_to_client; //адаптер класса Агент для использования подобно классу Клиент

//для паттерна Композит
class Unit; //отдельный доставляемый предмет в заказе (для компоновки)
class Composite_unit; //композит предметов
class Leaf_unit; //лист предметов

//для паттерна Декоратор
class Additional_feature_to_worker; // декоратор
class Administrator; //конкретный объект - Администратор
class Operator; //конкретный объект - Оператор
class Courier_type; //конкретный объект - Курьер (тип)

//для паттерна Фасад
class Complete_the_order; //Завершение заказа (фасад)

class Human_abstract //интерфейс (абстрактный класс) для людей
{
public:
	//для Human
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

	//для Client
	virtual void set_address(string input) = 0;
	virtual string get_address() = 0;

	//для Worker
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

class Additional_feature_to_worker : public Human_abstract // декоратор
{
protected:
	Human_abstract* human; // декорируемый объект
public:
	virtual string get_description() = 0;
	virtual int get_type_of_worker() = 0;

	//Реализация методов абстрактного класса для Human, иначе нельзя будет создать объект данного декоратора
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

	//Реализация методов абстрактного класса для Worker, иначе нельзя будет создать объект данного декоратора
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
	//Реализация методов абстрактного класса для Client, иначе нельзя будет создать объект данного декоратора
	void set_address(string input)
	{}
	string get_address()
	{
		return "Ошибка";
	}
};

class Administrator : public Additional_feature_to_worker //конкретный объект - Администратор
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
		return human->get_description() + string(" с должностью администратор"); //данный работник является администратором
	}

	virtual int get_type_of_worker()
	{
		return ADMIN; //числовое обозначение данного типа работника
	}
};

class Operator : public Additional_feature_to_worker //конкретный объект - Оператор
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
		return human->get_description() + string(" с должностью оператор"); //данный работник является оператором
	}

	virtual int get_type_of_worker()
	{
		return OPERATOR; //числовое обозначение данного типа работника
	}
};

class Courier_type : public Additional_feature_to_worker //конкретный объект - Курьер (тип)
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
		return human->get_description() + string(" с должностью курьер"); //данный работник является курьером
	}

	virtual int get_type_of_worker()
	{
		return COURIER; //числовое обозначение данного типа работника
	}
};

class Agent //класс Агент (адаптируемый)
{
private:
	int id; //ID в системе
	string full_name[3]; //0 - фамилия, 1 - имя, 2 - отчество
	string work_number_phone; //номер рабочего телефона
	string company_name; //название компании агента
	string company_address; //адрес офиса компании

public:
	Agent() //конструктор класса
	{}
	~Agent() //деструктор класса
	{}

	/*методы set*/
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
	/*методы get*/
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

class Adapter_agent_to_client: public Human_abstract //адаптер класса Агент для использования подобно классу Клиент
{
private:
	Agent* adapt; //указатель на адаптируемый объект
public:
	Adapter_agent_to_client() //конструктор
	{
		adapt = new Agent();
	}
	Adapter_agent_to_client(Agent* input)
	{
		adapt = input;
	}
	~Adapter_agent_to_client() //деструктор
	{
		delete adapt;
	}
	//методы set, get
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

	//Реализация методов абстрактного класса для Wokrer, иначе нельзя будет создать объект данного адаптера
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
		return "Ошибка";
	}
	string get_password()
	{
		return "Ошибка";
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
		return "Ошибка";
	}
	int get_type_of_worker()
	{
		return -1;
	}
};

class Human : public Human_abstract //Человек
{
protected:
	int num; //уникальный номер в системе 
	string surname; //фамилия 
	string name; //имя
	string patronymic; //отчество 
	string phone; //номер телефона 
public:
	Human() //конструктор
	{}

	~Human() //деструктор
	{}

	//методы set и get для полей класса
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

class Schedule_real //График работы реальный (используется заместитель для экономии памяти)
{
private:
	int num_schedule; //уникальный номер графика
	int working_days[WEEK_DAYS]; //рабочие дни недели 
	int start_hours; //время начала рабочего дня (часы)
	int start_minutes; //время начала рабочего дня (минуты)
	int end_hours; //время окончания рабочего дня (часы)
	int end_minutes; //время окончания рабочего дня (минуты)
public:
	Schedule_real() //конструктор
	{}

	~Schedule_real() //деструктор
	{}

	void print_working_days() //вывести на экран рабочие дни графика
	{
		cout << "Рабочие дни недели: ";
		if(working_days[0]==1)
		{
			cout << "ПН ";
		}
		if(working_days[1]==1)
		{
			cout << "ВТ ";
		}
		if(working_days[2]==1)
		{
			cout << "СР ";
		}
		if(working_days[3]==1)
		{
			cout << "ЧТ ";
		}
		if(working_days[4]==1)
		{
			cout << "ПТ ";
		}
		if(working_days[5]==1)
		{
			cout << "СБ ";
		}
		if(working_days[6]==1)
		{
			cout << "ВС ";
		}
		cout << endl;
	}

	//методы set и get для полей класса
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

class Schedule //заместитель Графика работы
{
private:
	Schedule_real* schedule; //указатель на реальный график работы
public:
	Schedule() //конструктор
	{
		schedule = NULL;
	}
	~Schedule() //деструктор
	{
		if(schedule != NULL)
		{
			delete schedule; //очистить память от реального объекта
		}
	}

	void print_working_days() //вывести на экран рабочие дни графика
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
		}
		else
		{
			schedule->print_working_days(); //обращение к реальному объекту
		}
	}

	//Методы set и get для реального графика
	void set_num_schedule(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_num_schedule(input); //обращение к реальному объекту
	}
	void set_working_days(int *input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_working_days(input); //обращение к реальному объекту
	}
	void set_start_hours(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_start_hours(input); //обращение к реальному объекту
	}
	void set_start_minutes(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_start_minutes(input); //обращение к реальному объекту
	}
	void set_end_hours(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_end_hours(input); //обращение к реальному объекту
	}
	void set_end_minutes(int input)
	{
		if(schedule==NULL)
		{
			schedule = new Schedule_real; //создать объект График работы реальный, если он понадобился
		}
		schedule->set_end_minutes(input); //обращение к реальному объекту
	}
	////
	int get_num_schedule()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return 0;
		}
		else
		{
			return schedule->get_num_schedule(); //обращение к реальному объекту
		}
	}
	int* get_working_days()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return NULL;
		}
		else
		{
			return schedule->get_working_days(); //обращение к реальному объекту
		}
	}
	int get_start_hours()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return 0;
		}
		else
		{
			return schedule->get_start_hours(); //обращение к реальному объекту
		}
	}
	int get_start_minutes()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return 0;
		}
		else
		{
			return schedule->get_start_minutes(); //обращение к реальному объекту
		}
	}
	int get_end_hours()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return 0;
		}
		else
		{
			return schedule->get_end_hours(); //обращение к реальному объекту
		}
	}
	int get_end_minutes()
	{
		if(schedule==NULL)
		{
			cout << "Ошибка. Попытка получить данные графика работы, который ещё не был создан." << endl;
			return 0;
		}
		else
		{
			return schedule->get_end_minutes(); //обращение к реальному объекту
		}
	}

};

class Worker : public Human //Работник
{
protected: 
	int status; //статус («работает», «отпуск», «больничный», «уволен» и т.п.)
	string login; //логин
	string password; //пароль
	float salary_now; //текущее значение зарплаты в руб.
	Schedule* own_schedule; //указатель на график работы
	float percent_to_salary; //процент в счёт зарплаты с заказов 

public:
	Worker() //конструктор
	{
		own_schedule = new Schedule;
	}

	~Worker() //деструктор
	{
		delete own_schedule;
	}

	virtual string get_description()
	{
		return string("Работник"); //данный работник является просто работником
	}

	virtual int get_type_of_worker()
	{
		return (-1); //числовое обозначение работника с неопределённым типом
	}

	//методы set и get для полей класса
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
	//Реализация методов абстрактного класса для Client, иначе нельзя будет создать объект данного адаптера
	void set_address(string input)
	{}
	string get_address()
	{
		return "Ошибка";
	}
};

class Courier : public Worker //Курьер
{
private:
	int qty_active_orders; //кол-во активных заказов 
	Order** active_orders; //массив указателей на активные заказы
public:
	Courier(string input_surname, string input_name) //конструктор
	{
		surname = input_surname;
		name = input_name;

		own_schedule = new Schedule;
	}

	Courier()
	{}

	~Courier() //деструктор
	{
		delete own_schedule;
	}

	//методы set и get для полей класса
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

class Financial_transaction //Денежная (финансовая) транзакция
{
private:
	int num_transaction; //уникальный номер транзакции
	int type_transaction; //тип («выполненный заказ», «зарплата», «некоторая выручка», «некоторые расходы»)
	float value; //значение в рублях 
	int date_day; //дата транзакции (день)
	int date_month; //дата транзакции (месяц)
	int date_year; //дата транзакции (год)
	Order* complete_order; //указатель на выполненный заказ (используется, если тип = «выполненный заказ»)
	int type_recipient; //тип получателя зарплаты («администратор», «оператор», «курьер»; используется, если тип = «зарплата»)
	Worker* recipient_w; //указатель на получателя зарплаты - работника (используется, если тип = «зарплата» и тип получателя = «администратор» или «оператор»)
	Courier* recipient_c; //указатель на получателя зарплаты - курьера (используется, если тип = «зарплата» и тип получателя = «курьер»)
	string notes; //примечания транзакции

public:
	Financial_transaction() //конструктор
	{}

	~Financial_transaction() //деструктор
	{}

	//методы set и get для полей класса
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

class Client : public Human //Клиент
{
private:
	string address; //адрес

public:
	Client(string input_surname, string input_name) //конструктор
	{
		surname = input_surname;
		name = input_name;
	}
	Client()
	{}

	~Client() //деструктор
	{}

	//методы set и get для полей класса
	void set_address(string input)
	{
		address = input;
	}
	////
	string get_address()
	{
		return address;
	}

	//Реализация методов абстрактного класса для Client, иначе нельзя будет создать объект
	//для Worker
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
	{ return "Ошибка";}
	virtual string get_password() 
	{ return "Ошибка";}
	virtual float get_salary_now() 
	{ return (-1);}
	virtual Schedule* get_own_schedule() 
	{ return NULL;}
	virtual float get_percent_to_salary() 
	{ return (-1);}

	virtual string get_description() 
	{ return "Ошибка";}
	virtual int get_type_of_worker() 
	{ return (-1);}
};

class Pricing //Расценки (абстрактный класс для делегирования) - родитель для Тариф, Пени
{
public:
	virtual void type_price()= 0; //делегируемый метод вывода типа расчёта стоимости
};

class Rate : public Pricing //Тариф по доставке посылки
{
private:
	int num_rate; //уникальный номер тарифа 
	float min_weight; //минимальная масса посылки в кг 
	float max_weight; //максимальная масса посылки в кг 
	float cost; //стоимость в рублях 
	float percent_increase; //процент повышения стоимости от обычной для срочного заказа

public:
	Rate()
	{}
	Rate(float input_cost) //конструктор
	{
		cost = input_cost;
	}

	~Rate() //деструктор
	{}

	void type_price() //вывод типа расчёта стоимости через делегирование
	{
		cout << "Стоимость доставки считается согласно тарифу: " << cost << " руб." << endl;
	}

	//методы set и get для полей класса
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

class Penalty : public Pricing //Пени за хранение посылки в день
{
private:
	int num_penalty; //уникальный номер пени 
	float min_weight; //минимальная масса посылки в кг 
	float max_weight; //максимальная масса посылки в кг 
	float percent_penalty; //процент пени от стоимости заказа 
public:
	Penalty()
	{}
	Penalty(float input_percent_penalty) //конструктор
	{
		percent_penalty = input_percent_penalty;
	}

	~Penalty() //деструктор
	{}

	void type_price() //вывод типа расчёта стоимости через делегирование
	{
		cout << "Стоимость доставки считается согласно пени: наценка " << percent_penalty*100 << "% в день." << endl;
	}

	//методы set и get для полей класса
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

class Unit //отдельный доставляемый предмет в заказе (для компоновки)
{
protected:
	string name; //имя предмета
	string type; //наименование типа предмета (например, мебель, еда и т.д.)
public:
	//Конструкторы
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

class Composite_unit : public Unit //композит предметов
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

class Leaf_unit : public Unit //лист
{
public:
	Leaf_unit(const string &name, const string &type) : Unit(name, type) {}
	virtual void display()
	{
		cout << name << ", " << type << endl;
	}
	virtual void composition()
	{
		cout << " Один предмет: " << name;
	}
	virtual void type_of_unit()
	{
		cout << type << endl;
	}
};

class Order //Заказ
{
private:
	int num_order; //уникальный номер заказа 
	Worker* its_operator; //указатель на оператора заказа 
	Courier* its_courier; //указатель на курьера заказа 
	int create_day; //дата создания заказа (день)
	int create_month; //дата создания заказа (месяц)
	int create_year; //дата создания заказа (год)
	int finish_day; //дата завершения заказа (день)
	int finish_month; //дата завершения заказа (месяц)
	int finish_year; //дата завершения заказа (год)
	Human_abstract* customer; //указатель на заказчика
	Human_abstract* recipient; //указатель на получателя
	Rate* its_rate; //указатель на тариф
	Penalty* its_penalty; //указатель на пени
	int type_urgent; //тип срочности («обычный» или «срочно»)
	float price; //стоимость доставки в рублях 
	float weight; //масса посылки в кг 
	float length; //длина посылки в м.
	float width; //ширина посылки в м.
	float height; //высота посылки в м.
	int payment_status; //статус оплаты («не оплачено», «оплачено наличными», «оплачено через терминал»)
	int execution_status; //статус выполнения («ожидает выполнения», «курьер забирает посылку», «доставляется», «доставлено», «хранится», «отменено»)
	int storage_time; //прошедшее время хранения в днях
	string notes; //примечания заказа
	Composite_unit* units; //композиция доставляемых предметов в заказе (с их наименованиями и типами)

	Pricing* pricing_of_order; // Объявляем объект, которому будем делегировать методы (тип расчёта стоимости заказа)

public:
	Order()
	{
	}
	Order(Courier* input_courier, Human_abstract* input_recipient, Rate* input_rate, Penalty* input_penalty) //конструктор
	{
		its_courier = input_courier; //инициализация указателя на курьера заказа
		recipient = input_recipient; //инициализация указателя на получателя заказа

		its_rate = input_rate; //инициализация указателя на тариф заказа
		its_penalty = input_penalty; //инициализация указателя на пени заказа

		pricing_of_order = input_rate; //изначально тип расчёта определяет именно тариф
	}
	Order(Composite_unit* input_units) //конструктор
	{
		units = input_units;
	}

	~Order() //деструктор
	{
	}


	void type_price() //метод вывода типа расчёта стоимости через делегирование
	{
		pricing_of_order->type_price();
	}

	void pricing_is_rate() //теперь делегатом является тариф
	{
		pricing_of_order = its_rate; //теперь заказ подтверждает курьер
	}

	void pricing_is_penalty() //теперь делегатом является пени
	{
		pricing_of_order = its_penalty; //теперь заказ подтверждает получатель
	}

	//методы set и get для полей класса
	void set_units(Composite_unit* input)
	{
		units = input;
	}

	Composite_unit* get_units()
	{
		return units;
	}

	float receive_price() //получить (высчитать) цену доставки заказа (паттерн Информационный эксперт)
	{
		float count_price=0; //временное значение цены
		if(its_rate!=NULL)
			count_price = its_rate->get_cost(); //получить цену по тарифу

		if(execution_status == STATUS_STORING) //если посылка хранится
		{
			if(its_penalty!=NULL)
				for(int i=storage_time+1; i>0; i--) //цикл начисления пени по количеству прошедших дней хранения
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

class Complete_the_order //Завершение заказа (фасад)
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

	void do_complete() //метод завершения заказа
	{
		order_complete->set_execution_status(STATUS_FINISHED); //отметить статус заказа - "завершено"

		//получение текущего времени
		struct tm *time_now;
		time_t time_now_t = time(NULL);
		time_now = localtime(&time_now_t);

		//запись текущей даты в соотв. временные переменные (день, месяц, год)
		int day_now = time_now->tm_mday;
		int month_now = time_now->tm_mon;
		int year_now = time_now->tm_year+1900;

		//запись даты завершения заказа
		order_complete->set_finish_day(day_now);
		order_complete->set_finish_month(month_now);
		order_complete->set_finish_year(year_now);

		//запись информации о транзакции оплаты заказа
		trans_complete->set_type_transaction(TRANS_TYPE_COMPLETED_ORDER);
		trans_complete->set_value(order_complete->get_price());
		trans_complete->set_date_day(day_now);
		trans_complete->set_date_month(month_now);
		trans_complete->set_date_year(year_now);
		trans_complete->set_complete_order(order_complete);

		//запись о начислении процента с оплаты заказа в счёт зарплаты работников (оператора и курьера)
		if(operator_complete!=NULL)
			operator_complete->set_salary_now(operator_complete->get_salary_now() + order_complete->get_price() * operator_complete->get_percent_to_salary());
		if(courier_complete!=NULL)
		courier_complete->set_salary_now(courier_complete->get_salary_now() + order_complete->get_price() * courier_complete->get_percent_to_salary());
		
	}
};

//глобальные переменные и объекты
extern class Order orders[QTY_MAX];
extern int qty_orders; //всего заказов
extern class Courier couriers[QTY_MAX]; 
extern int qty_couriers; //всего курьеров
extern class Worker operators[QTY_MAX]; 
extern int qty_operators; //всего операторов
extern class Worker admins[QTY_MAX];
extern int qty_admins; //всего администраторов
extern class Client clients[QTY_MAX]; 
extern int qty_clients; //всего клиентов

extern class Financial_transaction transactions[QTY_MAX];
extern int qty_transactions; //всего транзакций

extern class Rate rates[QTY_MAX];
extern int qty_rates; //всего тарифов
extern class Penalty penaltys[QTY_MAX];
extern int qty_penaltys; //всего пени