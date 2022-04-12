#pragma once
#include "classes.h"
#include "Add_Worker.h"

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Workers_View
	/// </summary>
	public ref class Workers_View : public System::Windows::Forms::Form
	{
	public:
		Workers_View(void)
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
		~Workers_View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  table_workers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type_worker;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  login;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  salary_now;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent_to_salary;
	private: System::Windows::Forms::GroupBox^  workers_actions;
	private: System::Windows::Forms::Button^  add_worker_button;
	private: System::Windows::Forms::Button^  change_worker_button;
	private: System::Windows::Forms::Button^  delete_worker_button;
	private: System::Windows::Forms::Button^  reload_tabl;
	protected: 




















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
			this->table_workers = (gcnew System::Windows::Forms::DataGridView());
			this->type_worker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->login = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salary_now = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent_to_salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->workers_actions = (gcnew System::Windows::Forms::GroupBox());
			this->add_worker_button = (gcnew System::Windows::Forms::Button());
			this->change_worker_button = (gcnew System::Windows::Forms::Button());
			this->delete_worker_button = (gcnew System::Windows::Forms::Button());
			this->reload_tabl = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_workers))->BeginInit();
			this->workers_actions->SuspendLayout();
			this->SuspendLayout();
			// 
			// table_workers
			// 
			this->table_workers->AllowUserToAddRows = false;
			this->table_workers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->table_workers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_workers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->type_worker, 
				this->surname, this->name, this->patronymic, this->phone, this->status, this->login, this->salary_now, this->percent_to_salary});
			this->table_workers->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->table_workers->Location = System::Drawing::Point(12, 78);
			this->table_workers->Name = L"table_workers";
			this->table_workers->RowHeadersVisible = false;
			this->table_workers->Size = System::Drawing::Size(772, 315);
			this->table_workers->TabIndex = 1;
			// 
			// type_worker
			// 
			this->type_worker->HeaderText = L"Тип работника";
			this->type_worker->Name = L"type_worker";
			this->type_worker->ReadOnly = true;
			// 
			// surname
			// 
			this->surname->HeaderText = L"Фамилия";
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"Имя";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// patronymic
			// 
			this->patronymic->HeaderText = L"Отчество";
			this->patronymic->Name = L"patronymic";
			this->patronymic->ReadOnly = true;
			// 
			// phone
			// 
			this->phone->HeaderText = L"Номер телефона";
			this->phone->Name = L"phone";
			this->phone->ReadOnly = true;
			// 
			// status
			// 
			this->status->HeaderText = L"Статус";
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			// 
			// login
			// 
			this->login->HeaderText = L"Логин";
			this->login->Name = L"login";
			this->login->ReadOnly = true;
			// 
			// salary_now
			// 
			this->salary_now->HeaderText = L"Текущее значение зарплаты (руб.)";
			this->salary_now->Name = L"salary_now";
			this->salary_now->ReadOnly = true;
			// 
			// percent_to_salary
			// 
			this->percent_to_salary->HeaderText = L"Процент в счёт зарплаты с заказов ";
			this->percent_to_salary->Name = L"percent_to_salary";
			this->percent_to_salary->ReadOnly = true;
			// 
			// workers_actions
			// 
			this->workers_actions->Controls->Add(this->add_worker_button);
			this->workers_actions->Controls->Add(this->change_worker_button);
			this->workers_actions->Controls->Add(this->delete_worker_button);
			this->workers_actions->Location = System::Drawing::Point(12, 12);
			this->workers_actions->Name = L"workers_actions";
			this->workers_actions->Size = System::Drawing::Size(473, 51);
			this->workers_actions->TabIndex = 11;
			this->workers_actions->TabStop = false;
			this->workers_actions->Text = L"Действия над работниками";
			// 
			// add_worker_button
			// 
			this->add_worker_button->Location = System::Drawing::Point(6, 19);
			this->add_worker_button->Name = L"add_worker_button";
			this->add_worker_button->Size = System::Drawing::Size(149, 23);
			this->add_worker_button->TabIndex = 1;
			this->add_worker_button->Text = L"Добавить работника";
			this->add_worker_button->UseVisualStyleBackColor = true;
			this->add_worker_button->Click += gcnew System::EventHandler(this, &Workers_View::add_worker_button_Click);
			// 
			// change_worker_button
			// 
			this->change_worker_button->Location = System::Drawing::Point(161, 19);
			this->change_worker_button->Name = L"change_worker_button";
			this->change_worker_button->Size = System::Drawing::Size(173, 23);
			this->change_worker_button->TabIndex = 2;
			this->change_worker_button->Text = L"Изменить данные работника";
			this->change_worker_button->UseVisualStyleBackColor = true;
			// 
			// delete_worker_button
			// 
			this->delete_worker_button->Location = System::Drawing::Point(340, 19);
			this->delete_worker_button->Name = L"delete_worker_button";
			this->delete_worker_button->Size = System::Drawing::Size(120, 23);
			this->delete_worker_button->TabIndex = 3;
			this->delete_worker_button->Text = L"Удалить работника";
			this->delete_worker_button->UseVisualStyleBackColor = true;
			// 
			// reload_tabl
			// 
			this->reload_tabl->Location = System::Drawing::Point(683, 51);
			this->reload_tabl->Name = L"reload_tabl";
			this->reload_tabl->Size = System::Drawing::Size(101, 21);
			this->reload_tabl->TabIndex = 12;
			this->reload_tabl->Text = L"Обновить инфо";
			this->reload_tabl->UseVisualStyleBackColor = true;
			this->reload_tabl->Click += gcnew System::EventHandler(this, &Workers_View::reload_tabl_Click);
			// 
			// Workers_View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 415);
			this->Controls->Add(this->reload_tabl);
			this->Controls->Add(this->workers_actions);
			this->Controls->Add(this->table_workers);
			this->Name = L"Workers_View";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Работники";
			this->Activated += gcnew System::EventHandler(this, &Workers_View::Workers_View_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_workers))->EndInit();
			this->workers_actions->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void reload_tabl_Click(System::Object^  sender, System::EventArgs^  e) {
				 //обновить инфо в таблице работников
				 //очистить все строки перед выводом
				while (0 != table_workers->RowCount)
					table_workers->Rows->RemoveAt(0);

				int* qty_workers;
				Human_abstract* workers;

				for(int k=0, num=0; k<3; k++)
				{
					if(k==COURIER)
					{
						qty_workers = &qty_couriers;
						workers = couriers;
					}
					if(k==OPERATOR)
					{
						qty_workers = &qty_operators;
						workers = operators;
					}
					if(k==ADMIN)
					{
						qty_workers = &qty_admins;
						workers = admins;
					}
					for(int i=0, j=0; i<(*qty_workers); i++, num++)
					{
						table_workers->Rows->Add(); //добавить новую строку в таблицу
						//заполнить строку таблицы
						switch(k)
						{
						case ADMIN:
							table_workers->Rows[num]->Cells[0]->Value = "Администратор";
							break;
						case OPERATOR:
							table_workers->Rows[num]->Cells[0]->Value = "Оператор";
							break;
						case COURIER:
							table_workers->Rows[num]->Cells[0]->Value = "Курьер";
							break;
						}
						string surname = workers[i].get_surname();
						table_workers->Rows[num]->Cells[1]->Value = gcnew System::String(surname.c_str());

						string name = workers[i].get_name();
						table_workers->Rows[num]->Cells[2]->Value = gcnew System::String(name.c_str());

						string patronymic = workers[i].get_patronymic();
						table_workers->Rows[num]->Cells[3]->Value = gcnew System::String(patronymic.c_str());

						string phone = workers[i].get_phone();
						table_workers->Rows[num]->Cells[4]->Value = gcnew System::String(phone.c_str());

						table_workers->Rows[num]->Cells[5]->Value = Convert::ToString(workers[i].get_status());

						string login = workers[i].get_login();
						table_workers->Rows[num]->Cells[6]->Value = gcnew System::String(login.c_str());

						table_workers->Rows[num]->Cells[7]->Value = Convert::ToString(workers[i].get_salary_now());

						table_workers->Rows[num]->Cells[8]->Value = Convert::ToString(workers[i].get_percent_to_salary()*100) + "%";
					}
				}
			 }
private: System::Void Workers_View_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this->reload_tabl_Click(sender, e);
		 }
private: System::Void add_worker_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Add_Worker^ p_Add_Worker = gcnew Add_Worker(); //указатель на форму
			 p_Add_Worker -> ShowDialog(); //открыть форму
			 delete(p_Add_Worker);
		 }
};
}
