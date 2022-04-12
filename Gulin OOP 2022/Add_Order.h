#pragma once
#include "classes.h"
#include <msclr/marshal_cppstd.h>
#include <iomanip>
#include <sstream>

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Add_Order
	/// </summary>
	public ref class Add_Order : public System::Windows::Forms::Form
	{
	public:
		Add_Order(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Add_Order()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  num_order_text;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  operator_surname_text;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  operator_name_text;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  courier_surname_text;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  courier_name_text;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  customer_surname_text;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  customer_name_text;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  customer_phone_text;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  customer_address_text;



	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  recipient_surname_text;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  recipient_name_text;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  recipient_phone_text;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  recipient_address_text;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  type_urgent_text;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  price_text;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  weight_text;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  size_text;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  notes_text;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num_order_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->operator_surname_text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->operator_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->courier_surname_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->courier_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->customer_surname_text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->customer_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->customer_phone_text = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->customer_address_text = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->recipient_surname_text = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->recipient_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->recipient_phone_text = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->recipient_address_text = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->type_urgent_text = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->price_text = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->weight_text = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->size_text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->notes_text = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(387, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать заказ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Add_Order::button1_Click);
			// 
			// num_order_text
			// 
			this->num_order_text->Location = System::Drawing::Point(12, 40);
			this->num_order_text->Name = L"num_order_text";
			this->num_order_text->Size = System::Drawing::Size(100, 20);
			this->num_order_text->TabIndex = 1;
			this->num_order_text->TextChanged += gcnew System::EventHandler(this, &Add_Order::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер заказа";
			this->label1->Click += gcnew System::EventHandler(this, &Add_Order::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Фамилия оператора";
			this->label2->Click += gcnew System::EventHandler(this, &Add_Order::label2_Click);
			// 
			// operator_surname_text
			// 
			this->operator_surname_text->Location = System::Drawing::Point(12, 89);
			this->operator_surname_text->Name = L"operator_surname_text";
			this->operator_surname_text->Size = System::Drawing::Size(100, 20);
			this->operator_surname_text->TabIndex = 3;
			this->operator_surname_text->TextChanged += gcnew System::EventHandler(this, &Add_Order::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Имя оператора";
			this->label3->Click += gcnew System::EventHandler(this, &Add_Order::label3_Click);
			// 
			// operator_name_text
			// 
			this->operator_name_text->Location = System::Drawing::Point(12, 140);
			this->operator_name_text->Name = L"operator_name_text";
			this->operator_name_text->Size = System::Drawing::Size(100, 20);
			this->operator_name_text->TabIndex = 5;
			this->operator_name_text->TextChanged += gcnew System::EventHandler(this, &Add_Order::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Фамилия курьера";
			// 
			// courier_surname_text
			// 
			this->courier_surname_text->Location = System::Drawing::Point(12, 192);
			this->courier_surname_text->Name = L"courier_surname_text";
			this->courier_surname_text->Size = System::Drawing::Size(100, 20);
			this->courier_surname_text->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Имя курьера";
			// 
			// courier_name_text
			// 
			this->courier_name_text->Location = System::Drawing::Point(12, 243);
			this->courier_name_text->Name = L"courier_name_text";
			this->courier_name_text->Size = System::Drawing::Size(100, 20);
			this->courier_name_text->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(141, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Фамилия заказчика";
			// 
			// customer_surname_text
			// 
			this->customer_surname_text->Location = System::Drawing::Point(141, 40);
			this->customer_surname_text->Name = L"customer_surname_text";
			this->customer_surname_text->Size = System::Drawing::Size(100, 20);
			this->customer_surname_text->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(141, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Имя заказчика";
			// 
			// customer_name_text
			// 
			this->customer_name_text->Location = System::Drawing::Point(141, 89);
			this->customer_name_text->Name = L"customer_name_text";
			this->customer_name_text->Size = System::Drawing::Size(100, 20);
			this->customer_name_text->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(141, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Телефон заказчика";
			// 
			// customer_phone_text
			// 
			this->customer_phone_text->Location = System::Drawing::Point(141, 140);
			this->customer_phone_text->Name = L"customer_phone_text";
			this->customer_phone_text->Size = System::Drawing::Size(100, 20);
			this->customer_phone_text->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(141, 176);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Адрес заказчика";
			// 
			// customer_address_text
			// 
			this->customer_address_text->Location = System::Drawing::Point(141, 192);
			this->customer_address_text->Name = L"customer_address_text";
			this->customer_address_text->Size = System::Drawing::Size(100, 20);
			this->customer_address_text->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(265, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Фамилия получателя";
			// 
			// recipient_surname_text
			// 
			this->recipient_surname_text->Location = System::Drawing::Point(265, 40);
			this->recipient_surname_text->Name = L"recipient_surname_text";
			this->recipient_surname_text->Size = System::Drawing::Size(100, 20);
			this->recipient_surname_text->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(265, 73);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Имя получателя";
			// 
			// recipient_name_text
			// 
			this->recipient_name_text->Location = System::Drawing::Point(265, 89);
			this->recipient_name_text->Name = L"recipient_name_text";
			this->recipient_name_text->Size = System::Drawing::Size(100, 20);
			this->recipient_name_text->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(265, 124);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Телефон получателя";
			// 
			// recipient_phone_text
			// 
			this->recipient_phone_text->Location = System::Drawing::Point(265, 140);
			this->recipient_phone_text->Name = L"recipient_phone_text";
			this->recipient_phone_text->Size = System::Drawing::Size(100, 20);
			this->recipient_phone_text->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(265, 176);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Адрес получателя";
			// 
			// recipient_address_text
			// 
			this->recipient_address_text->Location = System::Drawing::Point(265, 192);
			this->recipient_address_text->Name = L"recipient_address_text";
			this->recipient_address_text->Size = System::Drawing::Size(100, 20);
			this->recipient_address_text->TabIndex = 27;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(387, 24);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Тип срочности";
			// 
			// type_urgent_text
			// 
			this->type_urgent_text->Location = System::Drawing::Point(387, 40);
			this->type_urgent_text->Name = L"type_urgent_text";
			this->type_urgent_text->Size = System::Drawing::Size(100, 20);
			this->type_urgent_text->TabIndex = 31;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(387, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Стоимость доставки (руб.)";
			// 
			// price_text
			// 
			this->price_text->Location = System::Drawing::Point(387, 89);
			this->price_text->Name = L"price_text";
			this->price_text->Size = System::Drawing::Size(100, 20);
			this->price_text->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(387, 124);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 13);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Масса посылки (кг.)";
			// 
			// weight_text
			// 
			this->weight_text->Location = System::Drawing::Point(387, 140);
			this->weight_text->Name = L"weight_text";
			this->weight_text->Size = System::Drawing::Size(100, 20);
			this->weight_text->TabIndex = 35;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(381, 176);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(147, 13);
			this->label19->TabIndex = 38;
			this->label19->Text = L"Длина  ширина  высота (м.)";
			// 
			// size_text
			// 
			this->size_text->Location = System::Drawing::Point(387, 192);
			this->size_text->Name = L"size_text";
			this->size_text->Size = System::Drawing::Size(100, 20);
			this->size_text->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(141, 227);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Примечания";
			// 
			// notes_text
			// 
			this->notes_text->Location = System::Drawing::Point(141, 243);
			this->notes_text->Name = L"notes_text";
			this->notes_text->Size = System::Drawing::Size(222, 20);
			this->notes_text->TabIndex = 39;
			// 
			// Add_Order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 295);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->notes_text);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->size_text);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->weight_text);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->price_text);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->type_urgent_text);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->recipient_address_text);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->recipient_phone_text);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->recipient_name_text);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->recipient_surname_text);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->customer_address_text);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->customer_phone_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->customer_name_text);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->customer_surname_text);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->courier_name_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->courier_surname_text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->operator_name_text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->operator_surname_text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_order_text);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Add_Order";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить заказ";
			this->Load += gcnew System::EventHandler(this, &Add_Order::Add_Order_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Add_Order_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //создать заказ
			 qty_orders++;
			 orders[qty_orders-1].set_num_order(Convert::ToDouble(this->num_order_text->Text));

			orders[qty_orders-1].set_its_operator(NULL);
			 for(int i=0; i<qty_operators; i++) //найти искомого оператора и сохранить указатель на него
			 {
				 string operator_surname = msclr::interop::marshal_as<std::string>(this->operator_surname_text->Text);
				 string operator_name = msclr::interop::marshal_as<std::string>(this->operator_name_text->Text);
				 if(operators[i].get_surname() == operator_surname && operators[i].get_name() == operator_name)
				 {
					 orders[qty_orders-1].set_its_operator(&operators[i]);
					 break;
				 }
			 }
			 orders[qty_orders-1].set_its_courier(NULL);
			 for(int i=0; i<qty_couriers; i++) //найти искомого курьера и сохранить указатель на него
			 {
				string courier_surname = msclr::interop::marshal_as<std::string>(this->courier_surname_text->Text);
				string courier_name = msclr::interop::marshal_as<std::string>(this->courier_name_text->Text);
				if(couriers[i].get_surname() == courier_surname && couriers[i].get_name() == courier_name)
				{
					orders[qty_orders-1].set_its_courier(&couriers[i]);
					break;
				}
			 }

			struct tm *time_now;
			time_t time_now_t = time(NULL);
			time_now = localtime(&time_now_t);

			//запись текущей даты в соотв. временные переменные (день, месяц, год)
			int day_now = time_now->tm_mday;
			int month_now = time_now->tm_mon;
			int year_now = time_now->tm_year+1900;

			orders[qty_orders-1].set_create_day(day_now);
			orders[qty_orders-1].set_create_month(month_now);
			orders[qty_orders-1].set_create_year(year_now);

			qty_clients++; //заполнение информации о заказчике
			orders[qty_orders-1].set_customer(&clients[qty_clients-1]);

			string customer_surname = msclr::interop::marshal_as<std::string>(this->customer_surname_text->Text);
			clients[qty_clients-1].set_surname(customer_surname);

			string customer_name = msclr::interop::marshal_as<std::string>(this->customer_name_text->Text);
			clients[qty_clients-1].set_name(customer_name);

			string customer_phone = msclr::interop::marshal_as<std::string>(this->customer_phone_text->Text);
			clients[qty_clients-1].set_phone(customer_phone);

			string customer_address = msclr::interop::marshal_as<std::string>(this->customer_address_text->Text);
			clients[qty_clients-1].set_address(customer_address);


			qty_clients++; //заполнение информации о получателе
			orders[qty_orders-1].set_recipient(&clients[qty_clients-1]);

			string recipient_surname = msclr::interop::marshal_as<std::string>(this->recipient_surname_text->Text);
			clients[qty_clients-1].set_surname(recipient_surname);

			string recipient_name = msclr::interop::marshal_as<std::string>(this->recipient_name_text->Text);
			clients[qty_clients-1].set_name(recipient_name);

			string recipient_phone = msclr::interop::marshal_as<std::string>(this->recipient_phone_text->Text);
			clients[qty_clients-1].set_phone(recipient_phone);

			string recipient_address = msclr::interop::marshal_as<std::string>(this->recipient_address_text->Text);
			clients[qty_clients-1].set_address(recipient_address);

			string notes = msclr::interop::marshal_as<std::string>(this->notes_text->Text);
			orders[qty_orders-1].set_notes(notes);

			string type_urgent = msclr::interop::marshal_as<std::string>(this->type_urgent_text->Text);
			if(type_urgent == "срочно" || type_urgent == "Срочно")
			{
				orders[qty_orders-1].set_type_urgent(URGENCY_HIGH);
			}

			orders[qty_orders-1].set_price(Convert::ToDouble(this->price_text->Text));
			orders[qty_orders-1].set_weight(Convert::ToDouble(this->weight_text->Text));

			string size = msclr::interop::marshal_as<std::string>(this->size_text->Text);
			istringstream sizes(size);
			string number;

			sizes >> number;
			orders[qty_orders-1].set_length(atof(number.c_str()));

			sizes >> number;
			orders[qty_orders-1].set_width(atof(number.c_str()));

			sizes >> number;
			orders[qty_orders-1].set_height(atof(number.c_str()));

			orders[qty_orders-1].set_payment_status(PAYMENT_NOT);
			orders[qty_orders-1].set_execution_status(STATUS_WAITING);

			orders[qty_orders-1].set_storage_time(0);


			this->Close();
		 }
};
}
