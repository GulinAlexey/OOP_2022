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
	/// Сводка для Add_Worker
	/// </summary>
	public ref class Add_Worker : public System::Windows::Forms::Form
	{
	public:
		Add_Worker(void)
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
		~Add_Worker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  surname_text;
	protected: 

	private: System::Windows::Forms::GroupBox^  type_box;
	private: System::Windows::Forms::RadioButton^  admin_button;
	private: System::Windows::Forms::RadioButton^  operator_button;
	private: System::Windows::Forms::RadioButton^  courier_button;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  name_text;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  patronymic_text;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  phone_text;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  status_text;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  login_text;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  password_text;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  salary_now_text;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  percent_to_salary_text;
	private: System::Windows::Forms::Button^  create_worker_button;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->surname_text = (gcnew System::Windows::Forms::TextBox());
			this->type_box = (gcnew System::Windows::Forms::GroupBox());
			this->courier_button = (gcnew System::Windows::Forms::RadioButton());
			this->operator_button = (gcnew System::Windows::Forms::RadioButton());
			this->admin_button = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->patronymic_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->phone_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->status_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->login_text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->password_text = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->salary_now_text = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->percent_to_salary_text = (gcnew System::Windows::Forms::TextBox());
			this->create_worker_button = (gcnew System::Windows::Forms::Button());
			this->type_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Фамилия";
			// 
			// surname_text
			// 
			this->surname_text->Location = System::Drawing::Point(12, 135);
			this->surname_text->Name = L"surname_text";
			this->surname_text->Size = System::Drawing::Size(100, 20);
			this->surname_text->TabIndex = 3;
			// 
			// type_box
			// 
			this->type_box->Controls->Add(this->admin_button);
			this->type_box->Controls->Add(this->operator_button);
			this->type_box->Controls->Add(this->courier_button);
			this->type_box->Location = System::Drawing::Point(15, 12);
			this->type_box->Name = L"type_box";
			this->type_box->Size = System::Drawing::Size(271, 100);
			this->type_box->TabIndex = 5;
			this->type_box->TabStop = false;
			this->type_box->Text = L"Тип работника";
			// 
			// courier_button
			// 
			this->courier_button->AutoSize = true;
			this->courier_button->Checked = true;
			this->courier_button->Location = System::Drawing::Point(14, 20);
			this->courier_button->Name = L"courier_button";
			this->courier_button->Size = System::Drawing::Size(61, 17);
			this->courier_button->TabIndex = 0;
			this->courier_button->TabStop = true;
			this->courier_button->Text = L"Курьер";
			this->courier_button->UseVisualStyleBackColor = true;
			// 
			// operator_button
			// 
			this->operator_button->AutoSize = true;
			this->operator_button->Location = System::Drawing::Point(14, 43);
			this->operator_button->Name = L"operator_button";
			this->operator_button->Size = System::Drawing::Size(74, 17);
			this->operator_button->TabIndex = 1;
			this->operator_button->Text = L"Оператор";
			this->operator_button->UseVisualStyleBackColor = true;
			// 
			// admin_button
			// 
			this->admin_button->AutoSize = true;
			this->admin_button->Location = System::Drawing::Point(14, 66);
			this->admin_button->Name = L"admin_button";
			this->admin_button->Size = System::Drawing::Size(104, 17);
			this->admin_button->TabIndex = 2;
			this->admin_button->Text = L"Администратор";
			this->admin_button->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Имя";
			// 
			// name_text
			// 
			this->name_text->Location = System::Drawing::Point(12, 183);
			this->name_text->Name = L"name_text";
			this->name_text->Size = System::Drawing::Size(100, 20);
			this->name_text->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Отчество";
			// 
			// patronymic_text
			// 
			this->patronymic_text->Location = System::Drawing::Point(12, 232);
			this->patronymic_text->Name = L"patronymic_text";
			this->patronymic_text->Size = System::Drawing::Size(100, 20);
			this->patronymic_text->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Номер телефона";
			// 
			// phone_text
			// 
			this->phone_text->Location = System::Drawing::Point(12, 281);
			this->phone_text->Name = L"phone_text";
			this->phone_text->Size = System::Drawing::Size(100, 20);
			this->phone_text->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Статус";
			// 
			// status_text
			// 
			this->status_text->Location = System::Drawing::Point(12, 326);
			this->status_text->Name = L"status_text";
			this->status_text->Size = System::Drawing::Size(100, 20);
			this->status_text->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(133, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Логин";
			// 
			// login_text
			// 
			this->login_text->Location = System::Drawing::Point(133, 135);
			this->login_text->Name = L"login_text";
			this->login_text->Size = System::Drawing::Size(100, 20);
			this->login_text->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(133, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Пароль";
			// 
			// password_text
			// 
			this->password_text->Location = System::Drawing::Point(133, 184);
			this->password_text->Name = L"password_text";
			this->password_text->PasswordChar = '*';
			this->password_text->Size = System::Drawing::Size(100, 20);
			this->password_text->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(133, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Текущ. знач. зарплаты (руб.)";
			// 
			// salary_now_text
			// 
			this->salary_now_text->Location = System::Drawing::Point(133, 233);
			this->salary_now_text->Name = L"salary_now_text";
			this->salary_now_text->Size = System::Drawing::Size(100, 20);
			this->salary_now_text->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 265);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(190, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Процент в счёт зарплаты с заказов";
			this->label9->Click += gcnew System::EventHandler(this, &Add_Worker::label9_Click);
			// 
			// percent_to_salary_text
			// 
			this->percent_to_salary_text->Location = System::Drawing::Point(133, 281);
			this->percent_to_salary_text->Name = L"percent_to_salary_text";
			this->percent_to_salary_text->Size = System::Drawing::Size(100, 20);
			this->percent_to_salary_text->TabIndex = 21;
			this->percent_to_salary_text->TextChanged += gcnew System::EventHandler(this, &Add_Worker::textBox7_TextChanged);
			// 
			// create_worker_button
			// 
			this->create_worker_button->Location = System::Drawing::Point(133, 326);
			this->create_worker_button->Name = L"create_worker_button";
			this->create_worker_button->Size = System::Drawing::Size(189, 40);
			this->create_worker_button->TabIndex = 23;
			this->create_worker_button->Text = L"Создать работника";
			this->create_worker_button->UseVisualStyleBackColor = true;
			this->create_worker_button->Click += gcnew System::EventHandler(this, &Add_Worker::create_worker_button_click);
			// 
			// Add_Worker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 384);
			this->Controls->Add(this->create_worker_button);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->percent_to_salary_text);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->salary_now_text);
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->login_text);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->status_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->phone_text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->patronymic_text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->name_text);
			this->Controls->Add(this->type_box);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->surname_text);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Add_Worker";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить работника";
			this->type_box->ResumeLayout(false);
			this->type_box->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void create_worker_button_click(System::Object^  sender, System::EventArgs^  e) {
			 //создать работника
			 int* qty_workers;
			 Human_abstract* new_worker;
			 if(this->courier_button->Checked == true)
			 {
				 qty_workers = &qty_couriers;
				 (*qty_workers)++;
				 new_worker = &couriers[(*qty_workers)-1];
			 }
			 if(this->operator_button->Checked == true)
			 {
				 qty_workers = &qty_operators;
				 (*qty_workers)++;
				 new_worker = &operators[(*qty_workers)-1];
			 }
			 if(this->admin_button->Checked == true)
			 {
				 qty_workers = &qty_admins;
				 (*qty_workers)++;
				 new_worker = &admins[(*qty_workers)-1];
			 }

			 string surname = msclr::interop::marshal_as<std::string>(this->surname_text->Text);
			 new_worker->set_surname(surname);

			 string name = msclr::interop::marshal_as<std::string>(this->name_text->Text);
			 new_worker->set_name(name);

			 string patronymic = msclr::interop::marshal_as<std::string>(this->patronymic_text->Text);
			 new_worker->set_patronymic(patronymic);

			 string phone = msclr::interop::marshal_as<std::string>(this->phone_text->Text);
			 new_worker->set_phone(phone);

			 new_worker->set_status(Convert::ToDouble(this->status_text->Text));

			 string login = msclr::interop::marshal_as<std::string>(this->login_text->Text);
			 new_worker->set_login(login);

			 string password = msclr::interop::marshal_as<std::string>(this->password_text->Text);
			 new_worker->set_password(password);

			 new_worker->set_salary_now(Convert::ToDouble(this->salary_now_text->Text));
			 
			 new_worker->set_percent_to_salary(Convert::ToDouble(this->percent_to_salary_text->Text));

			 new_worker->set_own_schedule(NULL);

			 this->Close();
		 }
};
}
