#pragma once
#include "classes.h"
#include "Add_Order.h"
#include "Workers_View.h"
#include "Transactions_View.h"
#include "Rates_View.h"
#include "Complete_the_Order.h"
#include "Get_Cost.h"

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Orders_View
	/// </summary>
	public ref class Orders_View : public System::Windows::Forms::Form
	{
	public:
		Orders_View(void)
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
		~Orders_View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  table_orders;
	private: System::Windows::Forms::Button^  add_order_button;
	private: System::Windows::Forms::Button^  change_order_button;
	private: System::Windows::Forms::Button^  delete_order_button;
	private: System::Windows::Forms::Button^  worker_list_button;




	private: System::Windows::Forms::Button^  transaction_list_button;
	private: System::Windows::Forms::Button^  rate_list_button;

	private: System::Windows::Forms::GroupBox^  order_actions;
	protected: 






























	private: System::Windows::Forms::Button^  reload_tabl;
	private: System::Windows::Forms::Label^  author;
	private: System::Windows::Forms::Button^  get_cost_button;

	private: System::Windows::Forms::Button^  complete_order_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  num_order;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  its_operator_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  its_operator_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  its_courier_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  its_courier_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  create_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  finish_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  customer_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  customer_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  recipient_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  recipient_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type_urgent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  payment_status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  execution_status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  storage_time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  notes;






















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
			this->table_orders = (gcnew System::Windows::Forms::DataGridView());
			this->add_order_button = (gcnew System::Windows::Forms::Button());
			this->change_order_button = (gcnew System::Windows::Forms::Button());
			this->delete_order_button = (gcnew System::Windows::Forms::Button());
			this->worker_list_button = (gcnew System::Windows::Forms::Button());
			this->transaction_list_button = (gcnew System::Windows::Forms::Button());
			this->rate_list_button = (gcnew System::Windows::Forms::Button());
			this->order_actions = (gcnew System::Windows::Forms::GroupBox());
			this->get_cost_button = (gcnew System::Windows::Forms::Button());
			this->complete_order_button = (gcnew System::Windows::Forms::Button());
			this->reload_tabl = (gcnew System::Windows::Forms::Button());
			this->author = (gcnew System::Windows::Forms::Label());
			this->num_order = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->its_operator_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->its_operator_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->its_courier_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->its_courier_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->create_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->finish_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customer_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customer_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recipient_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recipient_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type_urgent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->payment_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->execution_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storage_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_orders))->BeginInit();
			this->order_actions->SuspendLayout();
			this->SuspendLayout();
			// 
			// table_orders
			// 
			this->table_orders->AllowUserToAddRows = false;
			this->table_orders->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->table_orders->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_orders->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(19) {this->num_order, 
				this->its_operator_surname, this->its_operator_name, this->its_courier_surname, this->its_courier_name, this->create_date, this->finish_date, 
				this->customer_surname, this->customer_name, this->recipient_surname, this->recipient_name, this->type_urgent, this->price, this->weight, 
				this->size, this->payment_status, this->execution_status, this->storage_time, this->notes});
			this->table_orders->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->table_orders->Location = System::Drawing::Point(12, 98);
			this->table_orders->Name = L"table_orders";
			this->table_orders->RowHeadersVisible = false;
			this->table_orders->Size = System::Drawing::Size(792, 315);
			this->table_orders->TabIndex = 0;
			this->table_orders->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Orders_View::dataGridView1_CellContentClick);
			// 
			// add_order_button
			// 
			this->add_order_button->Location = System::Drawing::Point(6, 19);
			this->add_order_button->Name = L"add_order_button";
			this->add_order_button->Size = System::Drawing::Size(120, 23);
			this->add_order_button->TabIndex = 1;
			this->add_order_button->Text = L"Добавить заказ";
			this->add_order_button->UseVisualStyleBackColor = true;
			this->add_order_button->Click += gcnew System::EventHandler(this, &Orders_View::add_order_button_Click);
			// 
			// change_order_button
			// 
			this->change_order_button->Location = System::Drawing::Point(132, 19);
			this->change_order_button->Name = L"change_order_button";
			this->change_order_button->Size = System::Drawing::Size(120, 23);
			this->change_order_button->TabIndex = 2;
			this->change_order_button->Text = L"Изменить заказ";
			this->change_order_button->UseVisualStyleBackColor = true;
			// 
			// delete_order_button
			// 
			this->delete_order_button->Location = System::Drawing::Point(258, 19);
			this->delete_order_button->Name = L"delete_order_button";
			this->delete_order_button->Size = System::Drawing::Size(120, 23);
			this->delete_order_button->TabIndex = 3;
			this->delete_order_button->Text = L"Удалить заказ";
			this->delete_order_button->UseVisualStyleBackColor = true;
			// 
			// worker_list_button
			// 
			this->worker_list_button->Location = System::Drawing::Point(12, 12);
			this->worker_list_button->Name = L"worker_list_button";
			this->worker_list_button->Size = System::Drawing::Size(120, 23);
			this->worker_list_button->TabIndex = 4;
			this->worker_list_button->Text = L"Список работников";
			this->worker_list_button->UseVisualStyleBackColor = true;
			this->worker_list_button->Click += gcnew System::EventHandler(this, &Orders_View::worker_list_button_Click);
			// 
			// transaction_list_button
			// 
			this->transaction_list_button->Location = System::Drawing::Point(138, 12);
			this->transaction_list_button->Name = L"transaction_list_button";
			this->transaction_list_button->Size = System::Drawing::Size(174, 23);
			this->transaction_list_button->TabIndex = 7;
			this->transaction_list_button->Text = L"Список денежных транзакций";
			this->transaction_list_button->UseVisualStyleBackColor = true;
			this->transaction_list_button->Click += gcnew System::EventHandler(this, &Orders_View::transaction_list_button_Click);
			// 
			// rate_list_button
			// 
			this->rate_list_button->Location = System::Drawing::Point(318, 12);
			this->rate_list_button->Name = L"rate_list_button";
			this->rate_list_button->Size = System::Drawing::Size(140, 23);
			this->rate_list_button->TabIndex = 8;
			this->rate_list_button->Text = L"Список тарифов/пени";
			this->rate_list_button->UseVisualStyleBackColor = true;
			this->rate_list_button->Click += gcnew System::EventHandler(this, &Orders_View::rate_list_button_Click);
			// 
			// order_actions
			// 
			this->order_actions->Controls->Add(this->get_cost_button);
			this->order_actions->Controls->Add(this->complete_order_button);
			this->order_actions->Controls->Add(this->add_order_button);
			this->order_actions->Controls->Add(this->change_order_button);
			this->order_actions->Controls->Add(this->delete_order_button);
			this->order_actions->Location = System::Drawing::Point(12, 41);
			this->order_actions->Name = L"order_actions";
			this->order_actions->Size = System::Drawing::Size(680, 51);
			this->order_actions->TabIndex = 10;
			this->order_actions->TabStop = false;
			this->order_actions->Text = L"Действия над заказами";
			this->order_actions->Enter += gcnew System::EventHandler(this, &Orders_View::groupBox1_Enter);
			// 
			// get_cost_button
			// 
			this->get_cost_button->Location = System::Drawing::Point(510, 19);
			this->get_cost_button->Name = L"get_cost_button";
			this->get_cost_button->Size = System::Drawing::Size(164, 23);
			this->get_cost_button->TabIndex = 13;
			this->get_cost_button->Text = L"Получить стоимость заказа";
			this->get_cost_button->UseVisualStyleBackColor = true;
			this->get_cost_button->Click += gcnew System::EventHandler(this, &Orders_View::get_cost_button_Click);
			// 
			// complete_order_button
			// 
			this->complete_order_button->Location = System::Drawing::Point(384, 19);
			this->complete_order_button->Name = L"complete_order_button";
			this->complete_order_button->Size = System::Drawing::Size(120, 23);
			this->complete_order_button->TabIndex = 4;
			this->complete_order_button->Text = L"Завершить заказ";
			this->complete_order_button->UseVisualStyleBackColor = true;
			this->complete_order_button->Click += gcnew System::EventHandler(this, &Orders_View::complete_order_button_Click);
			// 
			// reload_tabl
			// 
			this->reload_tabl->Location = System::Drawing::Point(706, 71);
			this->reload_tabl->Name = L"reload_tabl";
			this->reload_tabl->Size = System::Drawing::Size(101, 21);
			this->reload_tabl->TabIndex = 11;
			this->reload_tabl->Text = L"Обновить инфо";
			this->reload_tabl->UseVisualStyleBackColor = true;
			this->reload_tabl->Click += gcnew System::EventHandler(this, &Orders_View::reload_table_Click);
			// 
			// author
			// 
			this->author->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->author->AutoSize = true;
			this->author->Location = System::Drawing::Point(721, 416);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(86, 13);
			this->author->TabIndex = 12;
			this->author->Text = L"Гулин А.  ПИ-92";
			this->author->Click += gcnew System::EventHandler(this, &Orders_View::label1_Click);
			// 
			// num_order
			// 
			this->num_order->HeaderText = L" Номер заказа";
			this->num_order->Name = L"num_order";
			this->num_order->ReadOnly = true;
			// 
			// its_operator_surname
			// 
			this->its_operator_surname->HeaderText = L"Фамилия оператора";
			this->its_operator_surname->Name = L"its_operator_surname";
			this->its_operator_surname->ReadOnly = true;
			// 
			// its_operator_name
			// 
			this->its_operator_name->HeaderText = L"Имя оператора";
			this->its_operator_name->Name = L"its_operator_name";
			this->its_operator_name->ReadOnly = true;
			// 
			// its_courier_surname
			// 
			this->its_courier_surname->HeaderText = L"Фамилия курьера";
			this->its_courier_surname->Name = L"its_courier_surname";
			this->its_courier_surname->ReadOnly = true;
			// 
			// its_courier_name
			// 
			this->its_courier_name->HeaderText = L"Имя курьера";
			this->its_courier_name->Name = L"its_courier_name";
			this->its_courier_name->ReadOnly = true;
			// 
			// create_date
			// 
			this->create_date->HeaderText = L"Дата создания заказа";
			this->create_date->Name = L"create_date";
			this->create_date->ReadOnly = true;
			// 
			// finish_date
			// 
			this->finish_date->HeaderText = L"Дата завершения заказа";
			this->finish_date->Name = L"finish_date";
			this->finish_date->ReadOnly = true;
			// 
			// customer_surname
			// 
			this->customer_surname->HeaderText = L"Фамилия заказчика";
			this->customer_surname->Name = L"customer_surname";
			this->customer_surname->ReadOnly = true;
			// 
			// customer_name
			// 
			this->customer_name->HeaderText = L"Имя заказчика";
			this->customer_name->Name = L"customer_name";
			this->customer_name->ReadOnly = true;
			// 
			// recipient_surname
			// 
			this->recipient_surname->HeaderText = L"Фамилия получателя";
			this->recipient_surname->Name = L"recipient_surname";
			this->recipient_surname->ReadOnly = true;
			// 
			// recipient_name
			// 
			this->recipient_name->HeaderText = L"Имя получателя";
			this->recipient_name->Name = L"recipient_name";
			this->recipient_name->ReadOnly = true;
			// 
			// type_urgent
			// 
			this->type_urgent->HeaderText = L"Тип срочности";
			this->type_urgent->Name = L"type_urgent";
			this->type_urgent->ReadOnly = true;
			// 
			// price
			// 
			this->price->HeaderText = L"Стоимость доставки (руб.)";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// weight
			// 
			this->weight->HeaderText = L"Масса посылки (кг.)";
			this->weight->Name = L"weight";
			this->weight->ReadOnly = true;
			// 
			// size
			// 
			this->size->HeaderText = L"Размеры в м. (длина; ширина; высота)";
			this->size->Name = L"size";
			this->size->ReadOnly = true;
			// 
			// payment_status
			// 
			this->payment_status->HeaderText = L"Статус оплаты";
			this->payment_status->Name = L"payment_status";
			this->payment_status->ReadOnly = true;
			// 
			// execution_status
			// 
			this->execution_status->HeaderText = L"Статус выполнения";
			this->execution_status->Name = L"execution_status";
			this->execution_status->ReadOnly = true;
			// 
			// storage_time
			// 
			this->storage_time->HeaderText = L"Прошедшее время хранения (дни)";
			this->storage_time->Name = L"storage_time";
			this->storage_time->ReadOnly = true;
			// 
			// notes
			// 
			this->notes->HeaderText = L"Примечания";
			this->notes->Name = L"notes";
			this->notes->ReadOnly = true;
			// 
			// Orders_View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 438);
			this->Controls->Add(this->author);
			this->Controls->Add(this->reload_tabl);
			this->Controls->Add(this->order_actions);
			this->Controls->Add(this->rate_list_button);
			this->Controls->Add(this->transaction_list_button);
			this->Controls->Add(this->worker_list_button);
			this->Controls->Add(this->table_orders);
			this->Name = L"Orders_View";
			this->ShowIcon = false;
			this->Text = L"Заказы";
			this->Activated += gcnew System::EventHandler(this, &Orders_View::Orders_View_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_orders))->EndInit();
			this->order_actions->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void reload_table_Click(System::Object^  sender, System::EventArgs^  e) {
			//обновить инфо в таблице
			//очистить все строки перед выводом
			while (0 != table_orders->RowCount)
				table_orders->Rows->RemoveAt(0);

			for(int i=0, j=0; i<qty_orders; i++)
			{
				table_orders->Rows->Add(); //добавить новую строку в таблицу
				//заполнить строку таблицы
				table_orders->Rows[i]->Cells[0]->Value = Convert::ToString(orders[i].get_num_order());

				if(orders[i].get_its_operator()!=NULL) //если у заказа есть оператор
				{
					string operator_surname = (orders[i].get_its_operator())->get_surname();
					table_orders->Rows[i]->Cells[1]->Value = gcnew System::String(operator_surname.c_str());

					string operator_name = (orders[i].get_its_operator())->get_name();
					table_orders->Rows[i]->Cells[2]->Value = gcnew System::String(operator_name.c_str());

				}

				if(orders[i].get_its_courier()!=NULL) //если у заказа есть курьер
				{
					string courier_surname = (orders[i].get_its_courier())->get_surname();
					table_orders->Rows[i]->Cells[3]->Value = gcnew System::String(courier_surname.c_str());

					string courier_name = (orders[i].get_its_courier())->get_name();
					table_orders->Rows[i]->Cells[4]->Value = gcnew System::String(courier_name.c_str());

				}
				
				table_orders->Rows[i]->Cells[5]->Value = Convert::ToString(orders[i].get_create_day()) + "." + Convert::ToString(orders[i].get_create_month()) + "." + Convert::ToString(orders[i].get_create_year());

				if(orders[i].get_execution_status() == STATUS_FINISHED)
				{
					table_orders->Rows[i]->Cells[6]->Value = Convert::ToString(orders[i].get_finish_day()) + "." + Convert::ToString(orders[i].get_finish_month()) + "." + Convert::ToString(orders[i].get_finish_year());
				}

				string customer_surname = (orders[i].get_customer())->get_surname();
				table_orders->Rows[i]->Cells[7]->Value = gcnew System::String(customer_surname.c_str());

				string customer_name = (orders[i].get_customer())->get_name();
				table_orders->Rows[i]->Cells[8]->Value = gcnew System::String(customer_name.c_str());

				string recipient_surname = (orders[i].get_recipient())->get_surname();
				table_orders->Rows[i]->Cells[9]->Value = gcnew System::String(recipient_surname.c_str());

				string recipient_name = (orders[i].get_recipient())->get_name();
				table_orders->Rows[i]->Cells[10]->Value = gcnew System::String(recipient_name.c_str());

				if(orders[i].get_type_urgent() == URGENCY_HIGH)
				{
					table_orders->Rows[i]->Cells[11]->Value = "Срочно";
				}
				else
				{
					table_orders->Rows[i]->Cells[11]->Value = "Обычный";
				}

				table_orders->Rows[i]->Cells[12]->Value = Convert::ToString(orders[i].get_price());

				table_orders->Rows[i]->Cells[13]->Value = Convert::ToString(orders[i].get_weight());

				table_orders->Rows[i]->Cells[14]->Value = Convert::ToString(orders[i].get_length()) + "; " + Convert::ToString(orders[i].get_width()) + "; " + Convert::ToString(orders[i].get_height());

				table_orders->Rows[i]->Cells[15]->Value = Convert::ToString(orders[i].get_payment_status());

				switch(orders[i].get_execution_status())
				{
				case STATUS_WAITING: 
					table_orders->Rows[i]->Cells[16]->Value = "Ожидает выполнения";
					break;
				case STATUS_PICKING: 
					table_orders->Rows[i]->Cells[16]->Value = "Курьер едет забирать посылку у отправителя";
					break;
				case STATUS_DELIVERY: 
					table_orders->Rows[i]->Cells[16]->Value = "Процесс доставки посылки";
					break;
				case STATUS_FINISHED: 
					table_orders->Rows[i]->Cells[16]->Value = "Доставлено (завершено)";
					break;
				case STATUS_STORING: 
					table_orders->Rows[i]->Cells[16]->Value = "Хранение посылки в офисе";
					break;
				case STATUS_CANCEL: 
					table_orders->Rows[i]->Cells[16]->Value = "Заказ отменён";
					break;
				}
				

				table_orders->Rows[i]->Cells[17]->Value = Convert::ToString(orders[i].get_storage_time());


				string notes = orders[i].get_notes();
				table_orders->Rows[i]->Cells[18]->Value = gcnew System::String(notes.c_str());
			}
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void add_order_button_Click(System::Object^  sender, System::EventArgs^  e) {

			 Add_Order^ p_Add_Order = gcnew Add_Order(); //указатель на форму
			 p_Add_Order -> ShowDialog(); //открыть форму
			 delete(p_Add_Order);
		 }
private: System::Void Orders_View_Activated(System::Object^  sender, System::EventArgs^  e) {
			 reload_table_Click(sender, e);
		 }
private: System::Void worker_list_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Workers_View^ p_Workers_View = gcnew Workers_View(); //указатель на форму
			 p_Workers_View -> ShowDialog(); //открыть форму
			 delete(p_Workers_View);

		 }
private: System::Void transaction_list_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Transactions_View^ p_Transactions_View = gcnew Transactions_View(); //указатель на форму
			 p_Transactions_View -> ShowDialog(); //открыть форму
			 delete(p_Transactions_View);
			 
		 }
private: System::Void rate_list_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Rates_View^ p_Rates_View = gcnew Rates_View(); //указатель на форму
			 p_Rates_View -> ShowDialog(); //открыть форму
			 delete(p_Rates_View);
			 
		 }
private: System::Void complete_order_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Complete_the_Order^ p_Complete_the_Order = gcnew Complete_the_Order(); //указатель на форму
			 p_Complete_the_Order -> ShowDialog(); //открыть форму
			 delete(p_Complete_the_Order);
		 }
private: System::Void get_cost_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Get_Cost^ p_Get_Cost = gcnew Get_Cost(); //указатель на форму
			 p_Get_Cost -> ShowDialog(); //открыть форму
			 delete(p_Get_Cost);
		 }
};
}
