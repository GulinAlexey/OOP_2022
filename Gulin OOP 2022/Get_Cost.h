#pragma once
#include "classes.h"

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Get_Cost
	/// </summary>
	public ref class Get_Cost : public System::Windows::Forms::Form
	{
	public:
		Get_Cost(void)
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
		~Get_Cost()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ok_button;
	protected: 
	private: System::Windows::Forms::TextBox^  num_text;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  final_cost_text;


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
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->num_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->final_cost_text = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(108, 64);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 5;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &Get_Cost::ok_button_Click);
			// 
			// num_text
			// 
			this->num_text->Location = System::Drawing::Point(12, 38);
			this->num_text->Name = L"num_text";
			this->num_text->Size = System::Drawing::Size(256, 20);
			this->num_text->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите номер заказа для получения стоимости:";
			// 
			// final_cost_text
			// 
			this->final_cost_text->AutoSize = true;
			this->final_cost_text->Location = System::Drawing::Point(12, 107);
			this->final_cost_text->Name = L"final_cost_text";
			this->final_cost_text->Size = System::Drawing::Size(98, 13);
			this->final_cost_text->TabIndex = 6;
			this->final_cost_text->Text = L"Стоимость: Х руб.";
			// 
			// Get_Cost
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 152);
			this->Controls->Add(this->final_cost_text);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->num_text);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Get_Cost";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Получить стоимость заказа";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 //получить стоимость заказа с введённым номером
				 Order* order_for_get_cost = NULL;
				 int num_order_cost = Convert::ToDouble(this->num_text->Text);
				 for(int i=0 ; i<qty_orders; i++) //найти нужный заказ с искомым номером
				 {
					 if(orders[i].get_num_order() == num_order_cost)
					 {
						 order_for_get_cost = & orders[i];
						 break;
					 }
				 }

				 for(int i=0; i<qty_rates; i++) //подобрать тариф по массе посылки
				 {
					 if(order_for_get_cost->get_weight() >= rates[i].get_min_weight() && order_for_get_cost->get_weight() <= rates[i].get_max_weight())
					 {
						 order_for_get_cost->set_its_rate(&rates[i]);
						 break;
					 }
				 }

				 for(int i=0; i<qty_penaltys; i++) //подобрать пени по массе посылки
				 {
					 if(order_for_get_cost->get_weight() >= penaltys[i].get_min_weight() && order_for_get_cost->get_weight() <= penaltys[i].get_max_weight())
					 {
						 order_for_get_cost->set_its_penalty(&penaltys[i]);
						 break;
					 }
				 }
				 
				 this->final_cost_text->Text = "Стоимость: " + Convert::ToString(order_for_get_cost->receive_price()) + " руб.";
			 }
	};
}
