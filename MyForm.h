#pragma once
#include <iostream>
#include <string>
#include <array>



int sizee;
int** matrix;
int** matrix2;
double** m;
double delta = 0;

namespace CryptoGraphy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
















	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(235, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choose the Matrix size";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(274, 340);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(481, 22);
			this->textBox1->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(237, 313);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 24);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Enter the Message";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(430, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 33);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Encode";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkBlue;
			this->label5->Location = System::Drawing::Point(306, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 21);
			this->label5->TabIndex = 21;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(241, 106);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 20);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"2x2";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(241, 133);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 20);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"3x3";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(241, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(28, 22);
			this->textBox2->TabIndex = 24;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(277, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(28, 22);
			this->textBox3->TabIndex = 24;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(241, 193);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(28, 22);
			this->textBox4->TabIndex = 24;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(277, 193);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(28, 22);
			this->textBox5->TabIndex = 24;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(241, 163);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(28, 22);
			this->textBox6->TabIndex = 24;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(277, 163);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(28, 22);
			this->textBox7->TabIndex = 24;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(312, 163);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(28, 22);
			this->textBox8->TabIndex = 24;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(241, 193);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(28, 22);
			this->textBox9->TabIndex = 24;
			this->textBox9->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(277, 193);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(28, 22);
			this->textBox10->TabIndex = 24;
			this->textBox10->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(312, 193);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(28, 22);
			this->textBox11->TabIndex = 24;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(241, 223);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(28, 22);
			this->textBox12->TabIndex = 24;
			this->textBox12->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(277, 223);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(28, 22);
			this->textBox13->TabIndex = 24;
			this->textBox13->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(312, 223);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(28, 22);
			this->textBox14->TabIndex = 24;
			this->textBox14->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(241, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(272, 432);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 21);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Encoded Message:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(274, 534);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(481, 22);
			this->textBox15->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(430, 564);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 33);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Decode";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(235, 507);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(256, 24);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Enter the Encoded Message";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkBlue;
			this->label7->Location = System::Drawing::Point(302, 643);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 22);
			this->label7->TabIndex = 31;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(272, 622);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 21);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Decoded Message:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(936, 765);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(173, 63);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1122, 981);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1140, 1200);
			this->MinimumSize = System::Drawing::Size(1140, 1000);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CryptoGraphy";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		if (this->radioButton1->Checked) {
			sizee = 2;
			matrix = new int* [sizee];
			m = new double* [sizee];

			for (int j = 0; j < sizee; j++) {

				matrix[j] = new int[sizee];
			}
			for (int j = 0; j < sizee; j++) {

				m[j] = new double[sizee];
			}

			matrix[0][0] = System::Convert::ToInt16(textBox2->Text);
			matrix[0][1] = System::Convert::ToInt16(textBox3->Text);
			matrix[1][0] = System::Convert::ToInt16(textBox4->Text);
			matrix[1][1] = System::Convert::ToInt16(textBox5->Text);



		}
		if (this->radioButton2->Checked) {

			sizee = 3;
			m = new double* [sizee];
			for (int j = 0; j < sizee; j++) {

				m[j] = new double[sizee];
			}
			matrix = new int* [sizee];
			for (int j = 0; j < sizee; j++) {

				matrix[j] = new int[sizee];
			}

			matrix[0][0] = System::Convert::ToInt16(textBox6->Text);
			matrix[0][1] = System::Convert::ToInt16(textBox7->Text);
			matrix[0][2] = System::Convert::ToInt16(textBox8->Text);
			matrix[1][0] = System::Convert::ToInt16(textBox9->Text);
			matrix[1][1] = System::Convert::ToInt16(textBox10->Text);
			matrix[1][2] = System::Convert::ToInt16(textBox11->Text);
			matrix[2][0] = System::Convert::ToInt16(textBox12->Text);
			matrix[2][1] = System::Convert::ToInt16(textBox13->Text);
			matrix[2][2] = System::Convert::ToInt16(textBox14->Text);




		}
	}

	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ message = textBox1->Text;
		message = message->ToLower();
		int len = message->Length;
		while (len % sizee != 0) {
			len++;
		}
		matrix2 = new int* [len];
		for (int j = 0; j < len; j++) {

			matrix2[j] = new int[sizee];
		}
		int coun = 0;
		for (int i = 0; i < len / 2; i++) {
			for (int j = 0; j < sizee; j++) {
				if (coun < message->Length) {
					matrix2[i][j] = int(message[coun]) - 96;
					if (matrix2[i][j] == -64) { matrix2[i][j] = 0; }
					coun++;
				}
				else {
					matrix2[i][j] = 0;
					coun++;
				}

			}
		}
		String^ encoded;
		for (int i = 0; i < len / sizee; i++) {
			for (int j = 0; j < sizee; j++) {
				int sum = 0;
				for (int k = 0; k < sizee; k++) {
					sum += (matrix2[i][k] * matrix[k][j]);
				}
				encoded += sum;
				encoded += " ";
			}

		}
		label5->Text = encoded;

		for (int i = 0; i < sizee; i++) {
			delete[]matrix[i];
			delete[]matrix2[i];
			matrix[i] = 0;
			matrix2[i] = 0;
		}





	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked)
		{
			this->textBox2->Visible = true;
			this->textBox3->Visible = true;
			this->textBox4->Visible = true;
			this->textBox5->Visible = true;
			this->textBox6->Visible = false;
			this->textBox7->Visible = false;
			this->textBox8->Visible = false;
			this->textBox9->Visible = false;
			this->textBox10->Visible = false;
			this->textBox11->Visible = false;
			this->textBox12->Visible = false;
			this->textBox13->Visible = false;
			this->textBox14->Visible = false;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked)
		{
			this->textBox2->Visible = false;
			this->textBox3->Visible = false;
			this->textBox4->Visible = false;
			this->textBox5->Visible = false;
			this->textBox6->Visible = true;
			this->textBox7->Visible = true;
			this->textBox8->Visible = true;
			this->textBox9->Visible = true;
			this->textBox10->Visible = true;
			this->textBox11->Visible = true;
			this->textBox12->Visible = true;
			this->textBox13->Visible = true;
			this->textBox14->Visible = true;
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ enco = textBox15->Text;
		int k = enco->Length;
		if (enco[k - 1] != ' ') {
			enco += " ";
			k++;
		}
		int* outp = new int[k];
		int counter = 0;
		String^ sub;
		for (int i = 0; i < k; i++) {
			if (enco[i] != ' ') {
				sub += enco[i];

			}
			else {
				outp[counter] = System::Convert::ToInt16(sub);
				sub = "";
				counter++;
			}

		}//
		int** outp1 = new int* [counter / sizee];
		for (int i = 0; i < counter / sizee; i++) {
			outp1[i] = new int[sizee];
		}
		int z = 0;
		for (int i = 0; i < counter / sizee; i++) {
			for (int j = 0; j < sizee; j++) {
				outp1[i][j] = outp[z];
				z++;

			}
		}

		//Decoding: inverse:

		if (sizee == 2) {
			delta = ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));//lw el matrix 2
			m[1][1] = matrix[0][0] / delta;
			m[0][0] = matrix[1][1] / delta;
			m[0][1] = -matrix[0][1] / delta;
			m[1][0] = -matrix[1][0] / delta;
		}
		else if (sizee == 3)//lw el matrix 3
		{
			delta = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]))) -
				(matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2]))) +
				(matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1])));

			m[0][0] = ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2])) / delta;
			m[1][0] = -((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])) / delta;
			m[2][0] = ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1])) / delta;
			m[0][1] = -((matrix[0][1] * matrix[2][2]) - (matrix[2][1] * matrix[0][2])) / delta;
			m[1][1] = ((matrix[0][0] * matrix[2][2]) - (matrix[2][0] * matrix[0][2])) / delta;
			m[2][1] = -((matrix[0][0] * matrix[2][1]) - (matrix[2][0] * matrix[0][1])) / delta;
			m[0][2] = ((matrix[0][1] * matrix[1][2]) - (matrix[1][1] * matrix[0][2])) / delta;
			m[1][2] = -((matrix[0][0] * matrix[1][2]) - (matrix[1][0] * matrix[0][2])) / delta;
			m[2][2] = ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1])) / delta;

		}
		String^ deco = "";
		for (int i = 0; i < (counter / sizee); i++) {
			for (int j = 0; j < sizee; j++) {
				int sum = 0;
				for (int q = 0; q < sizee; q++) {
					sum += (outp1[i][q] * m[q][j]);
				}
				Char x = 96 + sum;
				if (x == '`')deco += " ";
				else deco += x;

			}
		}



		deco = deco->ToUpper();
		label7->Text = deco;
		delete outp;

		for (int i = 0; i < sizee; i++) {

			delete[]m[i];
			m[i] = 0;


		}

		for (int i = 0; i < counter / sizee; i++) {

			delete[]outp1[i];
			outp1[i] = 0;


		}
		for (int i = 0; i < sizee; i++) {
			delete[]matrix[i];
			matrix[i] = 0;

		}








	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}