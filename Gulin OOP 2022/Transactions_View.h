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
	/// ������ ��� Transactions_View
	/// </summary>
	public ref class Transactions_View : public System::Windows::Forms::Form
	{
	public:
		Transactions_View(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Transactions_View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  reload_tabl;
	protected: 
	private: System::Windows::Forms::GroupBox^  transaction_actions;
	private: System::Windows::Forms::Button^  add_transaction_button;
	private: System::Windows::Forms::Button^  change_transaction_button;
	private: System::Windows::Forms::Button^  delete_transaction_button;
	private: System::Windows::Forms::DataGridView^  table_transactions;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type_worker;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  type_recipient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  recipient_surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  recipient_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  notes;










	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->reload_tabl = (gcnew System::Windows::Forms::Button());
			this->transaction_actions = (gcnew System::Windows::Forms::GroupBox());
			this->add_transaction_button = (gcnew System::Windows::Forms::Button());
			this->change_transaction_button = (gcnew System::Windows::Forms::Button());
			this->delete_transaction_button = (gcnew System::Windows::Forms::Button());
			this->table_transactions = (gcnew System::Windows::Forms::DataGridView());
			this->type_worker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type_recipient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recipient_surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recipient_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->transaction_actions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_transactions))->BeginInit();
			this->SuspendLayout();
			// 
			// reload_tabl
			// 
			this->reload_tabl->Location = System::Drawing::Point(718, 51);
			this->reload_tabl->Name = L"reload_tabl";
			this->reload_tabl->Size = System::Drawing::Size(101, 21);
			this->reload_tabl->TabIndex = 15;
			this->reload_tabl->Text = L"�������� ����";
			this->reload_tabl->UseVisualStyleBackColor = true;
			this->reload_tabl->Click += gcnew System::EventHandler(this, &Transactions_View::reload_tabl_Click);
			// 
			// transaction_actions
			// 
			this->transaction_actions->Controls->Add(this->add_transaction_button);
			this->transaction_actions->Controls->Add(this->change_transaction_button);
			this->transaction_actions->Controls->Add(this->delete_transaction_button);
			this->transaction_actions->Location = System::Drawing::Point(12, 12);
			this->transaction_actions->Name = L"transaction_actions";
			this->transaction_actions->Size = System::Drawing::Size(473, 51);
			this->transaction_actions->TabIndex = 14;
			this->transaction_actions->TabStop = false;
			this->transaction_actions->Text = L"�������� ��� ������������";
			// 
			// add_transaction_button
			// 
			this->add_transaction_button->Location = System::Drawing::Point(6, 19);
			this->add_transaction_button->Name = L"add_transaction_button";
			this->add_transaction_button->Size = System::Drawing::Size(149, 23);
			this->add_transaction_button->TabIndex = 1;
			this->add_transaction_button->Text = L"�������� ����������";
			this->add_transaction_button->UseVisualStyleBackColor = true;
			// 
			// change_transaction_button
			// 
			this->change_transaction_button->Location = System::Drawing::Point(161, 19);
			this->change_transaction_button->Name = L"change_transaction_button";
			this->change_transaction_button->Size = System::Drawing::Size(153, 23);
			this->change_transaction_button->TabIndex = 2;
			this->change_transaction_button->Text = L"�������� ����������";
			this->change_transaction_button->UseVisualStyleBackColor = true;
			// 
			// delete_transaction_button
			// 
			this->delete_transaction_button->Location = System::Drawing::Point(320, 19);
			this->delete_transaction_button->Name = L"delete_transaction_button";
			this->delete_transaction_button->Size = System::Drawing::Size(147, 23);
			this->delete_transaction_button->TabIndex = 3;
			this->delete_transaction_button->Text = L"������� ����������";
			this->delete_transaction_button->UseVisualStyleBackColor = true;
			// 
			// table_transactions
			// 
			this->table_transactions->AllowUserToAddRows = false;
			this->table_transactions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->table_transactions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_transactions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->type_worker, 
				this->surname, this->name, this->patronymic, this->phone, this->type_recipient, this->recipient_surname, this->recipient_name, 
				this->notes});
			this->table_transactions->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->table_transactions->Location = System::Drawing::Point(12, 78);
			this->table_transactions->Name = L"table_transactions";
			this->table_transactions->RowHeadersVisible = false;
			this->table_transactions->Size = System::Drawing::Size(807, 326);
			this->table_transactions->TabIndex = 13;
			// 
			// type_worker
			// 
			this->type_worker->HeaderText = L"����� ����������";
			this->type_worker->Name = L"type_worker";
			this->type_worker->ReadOnly = true;
			// 
			// surname
			// 
			this->surname->HeaderText = L"��� ����������";
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"�������� (���.)";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// patronymic
			// 
			this->patronymic->HeaderText = L"���� ����������";
			this->patronymic->Name = L"patronymic";
			this->patronymic->ReadOnly = true;
			// 
			// phone
			// 
			this->phone->HeaderText = L"����� ������������ ������";
			this->phone->Name = L"phone";
			this->phone->ReadOnly = true;
			// 
			// type_recipient
			// 
			this->type_recipient->HeaderText = L"��� ���������� ��������";
			this->type_recipient->Name = L"type_recipient";
			this->type_recipient->ReadOnly = true;
			// 
			// recipient_surname
			// 
			this->recipient_surname->HeaderText = L"������� ���������� ��������";
			this->recipient_surname->Name = L"recipient_surname";
			this->recipient_surname->ReadOnly = true;
			// 
			// recipient_name
			// 
			this->recipient_name->HeaderText = L"��� ���������� ��������";
			this->recipient_name->Name = L"recipient_name";
			this->recipient_name->ReadOnly = true;
			// 
			// notes
			// 
			this->notes->HeaderText = L"����������";
			this->notes->Name = L"notes";
			this->notes->ReadOnly = true;
			// 
			// Transactions_View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 416);
			this->Controls->Add(this->reload_tabl);
			this->Controls->Add(this->transaction_actions);
			this->Controls->Add(this->table_transactions);
			this->Name = L"Transactions_View";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� ����������";
			this->Activated += gcnew System::EventHandler(this, &Transactions_View::Transactions_View_Activated);
			this->transaction_actions->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->table_transactions))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void reload_tabl_Click(System::Object^  sender, System::EventArgs^  e) {
				 //�������� ���� � ������� � ������������
				 //�������� ��� ������ ����� �������
				 while (0 != table_transactions->RowCount)
					table_transactions->Rows->RemoveAt(0);

				 for(int i=0; i<qty_transactions; i++)
				 {
					 table_transactions->Rows->Add(); //�������� ����� ������ � �������

					 table_transactions->Rows[i]->Cells[0]->Value = Convert::ToString(transactions[i].get_num_transaction());

					 switch(transactions[i].get_type_transaction())
					 {
					 case TRANS_TYPE_COMPLETED_ORDER:
						 table_transactions->Rows[i]->Cells[1]->Value = "����������� �����";
						 break;
					 case TRANS_TYPE_SALARY:
						 table_transactions->Rows[i]->Cells[1]->Value = "��������";
						 break;
					 case TRANS_TYPE_REVENUE:
						 table_transactions->Rows[i]->Cells[1]->Value = "��������� �������";
						 break;
					 case TRANS_TYPE_EXPENSES:
						 table_transactions->Rows[i]->Cells[1]->Value = "��������� �������";
						 break;
					 }

					 table_transactions->Rows[i]->Cells[2]->Value = Convert::ToString(transactions[i].get_value());

					 table_transactions->Rows[i]->Cells[3]->Value = Convert::ToString(transactions[i].get_date_day()) + "." + Convert::ToString(transactions[i].get_date_month()) + "." + Convert::ToString(transactions[i].get_date_year());

					 if(transactions[i].get_type_transaction() == TRANS_TYPE_COMPLETED_ORDER)
					 {
						 table_transactions->Rows[i]->Cells[4]->Value = Convert::ToString((transactions[i].get_complete_order())->get_num_order());
					 }
					 if(transactions[i].get_type_transaction() == TRANS_TYPE_SALARY)
					 {
						 switch(transactions[i].get_type_recipient())
						 {
						 case ADMIN:
							 table_transactions->Rows[i]->Cells[5]->Value = "�������������";
							 table_transactions->Rows[i]->Cells[6]->Value = gcnew System::String(((transactions[i].get_recipient_w())->get_surname()).c_str());
							 table_transactions->Rows[i]->Cells[7]->Value = gcnew System::String(((transactions[i].get_recipient_w())->get_name()).c_str());
							 break;
						 case OPERATOR:
							 table_transactions->Rows[i]->Cells[5]->Value = "��������";
							 table_transactions->Rows[i]->Cells[6]->Value = gcnew System::String(((transactions[i].get_recipient_w())->get_surname()).c_str());
							 table_transactions->Rows[i]->Cells[7]->Value = gcnew System::String(((transactions[i].get_recipient_w())->get_name()).c_str());
							 break;
						 case COURIER:
							 table_transactions->Rows[i]->Cells[5]->Value = "������";
							 table_transactions->Rows[i]->Cells[6]->Value = gcnew System::String(((transactions[i].get_recipient_c())->get_surname()).c_str());
							 table_transactions->Rows[i]->Cells[7]->Value = gcnew System::String(((transactions[i].get_recipient_c())->get_name()).c_str());
							 break;
						 }
					 }

					 table_transactions->Rows[i]->Cells[8]->Value = gcnew System::String((transactions[i].get_notes()).c_str());
				 }

			 }
private: System::Void Transactions_View_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this -> reload_tabl_Click(sender, e);
		 }
};
}
