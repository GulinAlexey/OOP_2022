#pragma once
#include "classes.h"
#include "Add_Rate.h"

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Rates_View
	/// </summary>
	public ref class Rates_View : public System::Windows::Forms::Form
	{
	public:
		Rates_View(void)
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
		~Rates_View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  reload_tabl;
	protected: 
	private: System::Windows::Forms::GroupBox^  rate_actions;
	private: System::Windows::Forms::Button^  add_rate_button;
	private: System::Windows::Forms::Button^  change_rate_button;
	private: System::Windows::Forms::Button^  delete_rate_button;
	private: System::Windows::Forms::DataGridView^  table_rate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  min_weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  max_weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent_increase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent_penalty;








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
			this->reload_tabl = (gcnew System::Windows::Forms::Button());
			this->rate_actions = (gcnew System::Windows::Forms::GroupBox());
			this->add_rate_button = (gcnew System::Windows::Forms::Button());
			this->change_rate_button = (gcnew System::Windows::Forms::Button());
			this->delete_rate_button = (gcnew System::Windows::Forms::Button());
			this->table_rate = (gcnew System::Windows::Forms::DataGridView());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->min_weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->max_weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent_increase = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent_penalty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rate_actions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_rate))->BeginInit();
			this->SuspendLayout();
			// 
			// reload_tabl
			// 
			this->reload_tabl->Location = System::Drawing::Point(612, 51);
			this->reload_tabl->Name = L"reload_tabl";
			this->reload_tabl->Size = System::Drawing::Size(101, 21);
			this->reload_tabl->TabIndex = 18;
			this->reload_tabl->Text = L"Обновить инфо";
			this->reload_tabl->UseVisualStyleBackColor = true;
			this->reload_tabl->Click += gcnew System::EventHandler(this, &Rates_View::reload_tabl_Click);
			// 
			// rate_actions
			// 
			this->rate_actions->Controls->Add(this->add_rate_button);
			this->rate_actions->Controls->Add(this->change_rate_button);
			this->rate_actions->Controls->Add(this->delete_rate_button);
			this->rate_actions->Location = System::Drawing::Point(9, 12);
			this->rate_actions->Name = L"rate_actions";
			this->rate_actions->Size = System::Drawing::Size(473, 51);
			this->rate_actions->TabIndex = 17;
			this->rate_actions->TabStop = false;
			this->rate_actions->Text = L"Действия над тарифами/пени";
			// 
			// add_rate_button
			// 
			this->add_rate_button->Location = System::Drawing::Point(6, 19);
			this->add_rate_button->Name = L"add_rate_button";
			this->add_rate_button->Size = System::Drawing::Size(149, 23);
			this->add_rate_button->TabIndex = 1;
			this->add_rate_button->Text = L"Добавить тариф/пени";
			this->add_rate_button->UseVisualStyleBackColor = true;
			this->add_rate_button->Click += gcnew System::EventHandler(this, &Rates_View::add_rate_button_Click);
			// 
			// change_rate_button
			// 
			this->change_rate_button->Location = System::Drawing::Point(161, 19);
			this->change_rate_button->Name = L"change_rate_button";
			this->change_rate_button->Size = System::Drawing::Size(153, 23);
			this->change_rate_button->TabIndex = 2;
			this->change_rate_button->Text = L"Изменить тариф/пени";
			this->change_rate_button->UseVisualStyleBackColor = true;
			// 
			// delete_rate_button
			// 
			this->delete_rate_button->Location = System::Drawing::Point(320, 19);
			this->delete_rate_button->Name = L"delete_rate_button";
			this->delete_rate_button->Size = System::Drawing::Size(147, 23);
			this->delete_rate_button->TabIndex = 3;
			this->delete_rate_button->Text = L"Удалить тариф/пени";
			this->delete_rate_button->UseVisualStyleBackColor = true;
			// 
			// table_rate
			// 
			this->table_rate->AllowUserToAddRows = false;
			this->table_rate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->table_rate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_rate->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->type, this->num, 
				this->min_weight, this->max_weight, this->cost, this->percent_increase, this->percent_penalty});
			this->table_rate->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->table_rate->Location = System::Drawing::Point(9, 78);
			this->table_rate->Name = L"table_rate";
			this->table_rate->RowHeadersVisible = false;
			this->table_rate->Size = System::Drawing::Size(704, 326);
			this->table_rate->TabIndex = 16;
			// 
			// type
			// 
			this->type->HeaderText = L"Тариф или пени";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			// 
			// num
			// 
			this->num->HeaderText = L"Номер тарифа/пени";
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			// 
			// min_weight
			// 
			this->min_weight->HeaderText = L"Минимальная масса посылки (кг.)";
			this->min_weight->Name = L"min_weight";
			this->min_weight->ReadOnly = true;
			// 
			// max_weight
			// 
			this->max_weight->HeaderText = L"Максимальная масса посылки (кг.)";
			this->max_weight->Name = L"max_weight";
			this->max_weight->ReadOnly = true;
			// 
			// cost
			// 
			this->cost->HeaderText = L"Цена (руб.) (для тарифа)";
			this->cost->Name = L"cost";
			this->cost->ReadOnly = true;
			// 
			// percent_increase
			// 
			this->percent_increase->HeaderText = L"Процент повышения стоимости от обычной для срочного заказа (для тарифа)";
			this->percent_increase->Name = L"percent_increase";
			this->percent_increase->ReadOnly = true;
			// 
			// percent_penalty
			// 
			this->percent_penalty->HeaderText = L"Процент пени от стоимости заказа (для пени)";
			this->percent_penalty->Name = L"percent_penalty";
			this->percent_penalty->ReadOnly = true;
			// 
			// Rates_View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 416);
			this->Controls->Add(this->reload_tabl);
			this->Controls->Add(this->rate_actions);
			this->Controls->Add(this->table_rate);
			this->Name = L"Rates_View";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тарифы/пени";
			this->Activated += gcnew System::EventHandler(this, &Rates_View::Rates_View_Activated);
			this->rate_actions->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_rate))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void reload_tabl_Click(System::Object^  sender, System::EventArgs^  e) {
			 //обновить инфо в таблице

			 //очистить все строки перед выводом
			 while (0 != table_rate->RowCount)
				table_rate->Rows->RemoveAt(0);

			 int k=0;
			 for(int i=0; i<qty_rates; i++, k++)
			 {
				 table_rate->Rows->Add(); //добавить новую строку в таблицу

				 table_rate->Rows[k]->Cells[0]->Value = "Тариф";

				 table_rate->Rows[k]->Cells[1]->Value = Convert::ToString(rates[i].get_num_rate());
				 table_rate->Rows[k]->Cells[2]->Value = Convert::ToString(rates[i].get_min_weight());
				 table_rate->Rows[k]->Cells[3]->Value = Convert::ToString(rates[i].get_max_weight());
				 table_rate->Rows[k]->Cells[4]->Value = Convert::ToString(rates[i].get_cost());
				 table_rate->Rows[k]->Cells[5]->Value = Convert::ToString(rates[i].get_percent_increase()*100) + "%";
			 }

			 for(int i=0; i<qty_penaltys; i++, k++)
			 {
				 table_rate->Rows->Add(); //добавить новую строку в таблицу

				 table_rate->Rows[k]->Cells[0]->Value = "Пени";

				 table_rate->Rows[k]->Cells[1]->Value = Convert::ToString(penaltys[i].get_num_penalty());
				 table_rate->Rows[k]->Cells[2]->Value = Convert::ToString(penaltys[i].get_min_weight());
				 table_rate->Rows[k]->Cells[3]->Value = Convert::ToString(penaltys[i].get_max_weight());
				 table_rate->Rows[k]->Cells[6]->Value = Convert::ToString(penaltys[i].get_percent_penalty()*100) + "%";
			 }

			 }
private: System::Void Rates_View_Activated(System::Object^  sender, System::EventArgs^  e) {
			this->reload_tabl_Click(sender, e);
		 }
private: System::Void add_rate_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Add_Rate^ p_Add_Rate = gcnew Add_Rate(); //указатель на форму
			 p_Add_Rate -> ShowDialog(); //открыть форму
			 delete(p_Add_Rate);
		 }
};
}
