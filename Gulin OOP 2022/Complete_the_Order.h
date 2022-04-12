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
	/// Сводка для Complete_the_Order
	/// </summary>
	public ref class Complete_the_Order : public System::Windows::Forms::Form
	{
	public:
		Complete_the_Order(void)
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
		~Complete_the_Order()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  num_text;
	private: System::Windows::Forms::Button^  ok_button;

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
			this->num_text = (gcnew System::Windows::Forms::TextBox());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите номер заказа для завершения:";
			// 
			// num_text
			// 
			this->num_text->Location = System::Drawing::Point(15, 35);
			this->num_text->Name = L"num_text";
			this->num_text->Size = System::Drawing::Size(209, 20);
			this->num_text->TabIndex = 1;
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(81, 72);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 2;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &Complete_the_Order::ok_button_Click);
			// 
			// Complete_the_Order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(242, 120);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->num_text);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Complete_the_Order";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Завершить заказ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 //завершить заказ с введённым номером
				 Order* order_complete = NULL;
				 int num_order_complete = Convert::ToDouble(this->num_text->Text);
				 for(int i=0 ; i<qty_orders; i++) //найти нужный заказ
				 {
					 if(orders[i].get_num_order() == num_order_complete)
					 {
						 order_complete = & orders[i];
						 break;
					 }
				 }

				 qty_transactions++; //добавить транзакцию для завершения заказа
				 Complete_the_order complete(order_complete, &transactions[qty_transactions-1], order_complete->get_its_operator(), order_complete->get_its_courier());
				 complete.do_complete();

				 this->Close();
			 }
	};
}
