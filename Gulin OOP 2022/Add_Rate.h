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
	/// Сводка для Add_Rate
	/// </summary>
	public ref class Add_Rate : public System::Windows::Forms::Form
	{
	public:
		Add_Rate(void)
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
		~Add_Rate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  type_box;
	protected: 
	private: System::Windows::Forms::RadioButton^  penalty_button;
	private: System::Windows::Forms::RadioButton^  rate_button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  num_text;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  min_weight_text;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  max_weight_text;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  cost_text;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  percent_increase_text;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  percent_penalty_text;
	private: System::Windows::Forms::Button^  create_rate_button;





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
			this->type_box = (gcnew System::Windows::Forms::GroupBox());
			this->penalty_button = (gcnew System::Windows::Forms::RadioButton());
			this->rate_button = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->num_text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->min_weight_text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->max_weight_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cost_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->percent_increase_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->percent_penalty_text = (gcnew System::Windows::Forms::TextBox());
			this->create_rate_button = (gcnew System::Windows::Forms::Button());
			this->type_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// type_box
			// 
			this->type_box->Controls->Add(this->penalty_button);
			this->type_box->Controls->Add(this->rate_button);
			this->type_box->Location = System::Drawing::Point(12, 12);
			this->type_box->Name = L"type_box";
			this->type_box->Size = System::Drawing::Size(312, 79);
			this->type_box->TabIndex = 6;
			this->type_box->TabStop = false;
			this->type_box->Text = L"Тип";
			// 
			// penalty_button
			// 
			this->penalty_button->AutoSize = true;
			this->penalty_button->Location = System::Drawing::Point(14, 43);
			this->penalty_button->Name = L"penalty_button";
			this->penalty_button->Size = System::Drawing::Size(51, 17);
			this->penalty_button->TabIndex = 1;
			this->penalty_button->Text = L"Пени";
			this->penalty_button->UseVisualStyleBackColor = true;
			// 
			// rate_button
			// 
			this->rate_button->AutoSize = true;
			this->rate_button->Checked = true;
			this->rate_button->Location = System::Drawing::Point(14, 20);
			this->rate_button->Name = L"rate_button";
			this->rate_button->Size = System::Drawing::Size(58, 17);
			this->rate_button->TabIndex = 0;
			this->rate_button->TabStop = true;
			this->rate_button->Text = L"Тариф";
			this->rate_button->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Номер";
			// 
			// num_text
			// 
			this->num_text->Location = System::Drawing::Point(23, 123);
			this->num_text->Name = L"num_text";
			this->num_text->Size = System::Drawing::Size(100, 20);
			this->num_text->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Мин. масса посылки (кг.)";
			// 
			// min_weight_text
			// 
			this->min_weight_text->Location = System::Drawing::Point(23, 173);
			this->min_weight_text->Name = L"min_weight_text";
			this->min_weight_text->Size = System::Drawing::Size(100, 20);
			this->min_weight_text->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Макс. масса посылки (кг.)";
			// 
			// max_weight_text
			// 
			this->max_weight_text->Location = System::Drawing::Point(23, 221);
			this->max_weight_text->Name = L"max_weight_text";
			this->max_weight_text->Size = System::Drawing::Size(100, 20);
			this->max_weight_text->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Цена (руб.) (для тарифа)";
			// 
			// cost_text
			// 
			this->cost_text->Location = System::Drawing::Point(160, 123);
			this->cost_text->Name = L"cost_text";
			this->cost_text->Size = System::Drawing::Size(100, 20);
			this->cost_text->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(151, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Повыш. % при срочн. (для тарифа)";
			// 
			// percent_increase_text
			// 
			this->percent_increase_text->Location = System::Drawing::Point(160, 173);
			this->percent_increase_text->Name = L"percent_increase_text";
			this->percent_increase_text->Size = System::Drawing::Size(100, 20);
			this->percent_increase_text->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(151, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Процент от цены заказа (для пени)";
			// 
			// percent_penalty_text
			// 
			this->percent_penalty_text->Location = System::Drawing::Point(160, 221);
			this->percent_penalty_text->Name = L"percent_penalty_text";
			this->percent_penalty_text->Size = System::Drawing::Size(100, 20);
			this->percent_penalty_text->TabIndex = 17;
			// 
			// create_rate_button
			// 
			this->create_rate_button->Location = System::Drawing::Point(23, 266);
			this->create_rate_button->Name = L"create_rate_button";
			this->create_rate_button->Size = System::Drawing::Size(237, 32);
			this->create_rate_button->TabIndex = 24;
			this->create_rate_button->Text = L"Создать тариф/пени";
			this->create_rate_button->UseVisualStyleBackColor = true;
			this->create_rate_button->Click += gcnew System::EventHandler(this, &Add_Rate::create_rate_button_Click);
			// 
			// Add_Rate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 334);
			this->Controls->Add(this->create_rate_button);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->percent_penalty_text);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->percent_increase_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cost_text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->max_weight_text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->min_weight_text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_text);
			this->Controls->Add(this->type_box);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Add_Rate";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить тариф/пени";
			this->type_box->ResumeLayout(false);
			this->type_box->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void create_rate_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 //создать тариф/пени

				 if(this->rate_button->Checked == true)
				 {
					 qty_rates++;
					 rates[qty_rates-1].set_num_rate(Convert::ToDouble(this->num_text->Text));
					 rates[qty_rates-1].set_min_weight(Convert::ToDouble(this->min_weight_text->Text));
					 rates[qty_rates-1].set_max_weight(Convert::ToDouble(this->max_weight_text->Text));
					 rates[qty_rates-1].set_cost(Convert::ToDouble(this->cost_text->Text));
					 rates[qty_rates-1].set_percent_increase(Convert::ToDouble(this->percent_increase_text->Text));
				 }
				 if(this->penalty_button->Checked == true)
				 {
					 qty_penaltys++;
					 penaltys[qty_penaltys-1].set_num_penalty(Convert::ToDouble(this->num_text->Text));
					 penaltys[qty_penaltys-1].set_min_weight(Convert::ToDouble(this->min_weight_text->Text));
					 penaltys[qty_penaltys-1].set_max_weight(Convert::ToDouble(this->max_weight_text->Text));
					 penaltys[qty_penaltys-1].set_percent_penalty(Convert::ToDouble(this->percent_penalty_text->Text));
				 }

				 this->Close();
			 }
};
}
