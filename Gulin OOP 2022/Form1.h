#pragma once

namespace GulinOOP2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  begin_label;
	protected: 
	private: System::Windows::Forms::Button^  button_begin;

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
			this->begin_label = (gcnew System::Windows::Forms::Label());
			this->button_begin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// begin_label
			// 
			this->begin_label->AutoSize = true;
			this->begin_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->begin_label->Location = System::Drawing::Point(46, 47);
			this->begin_label->Name = L"begin_label";
			this->begin_label->Size = System::Drawing::Size(208, 33);
			this->begin_label->TabIndex = 0;
			this->begin_label->Text = L"Начать работу";
			// 
			// button_begin
			// 
			this->button_begin->Location = System::Drawing::Point(115, 107);
			this->button_begin->Name = L"button_begin";
			this->button_begin->Size = System::Drawing::Size(75, 23);
			this->button_begin->TabIndex = 1;
			this->button_begin->Text = L"ОК";
			this->button_begin->UseVisualStyleBackColor = true;
			this->button_begin->Click += gcnew System::EventHandler(this, &Form1::button_begin_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 187);
			this->Controls->Add(this->button_begin);
			this->Controls->Add(this->begin_label);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Начало работы";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_begin_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

