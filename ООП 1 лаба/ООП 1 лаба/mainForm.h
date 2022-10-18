#pragma once
#include <stdio.h>
#include <cmath>
#include <math.h>
namespace Rl1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_x;
	protected:

	private: System::Windows::Forms::Label^ label_x;
	private: System::Windows::Forms::Label^ label_у;
	private: System::Windows::Forms::Label^ label_z;
	private: System::Windows::Forms::TextBox^ textBox_y;
	private: System::Windows::Forms::TextBox^ textBox_z;

	protected:





	private: System::Windows::Forms::Label^ label_В;
	private: System::Windows::Forms::Label^ label_А;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;

	protected:

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
			this->textBox_x = (gcnew System::Windows::Forms::TextBox());
			this->label_x = (gcnew System::Windows::Forms::Label());
			this->label_у = (gcnew System::Windows::Forms::Label());
			this->label_z = (gcnew System::Windows::Forms::Label());
			this->textBox_y = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z = (gcnew System::Windows::Forms::TextBox());
			this->label_В = (gcnew System::Windows::Forms::Label());
			this->label_А = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_x
			// 
			this->textBox_x->Location = System::Drawing::Point(160, 34);
			this->textBox_x->Name = L"textBox_x";
			this->textBox_x->Size = System::Drawing::Size(100, 20);
			this->textBox_x->TabIndex = 0;
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(12, 41);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(95, 13);
			this->label_x->TabIndex = 1;
			this->label_x->Text = L"Вести значення х";
			// 
			// label_у
			// 
			this->label_у->AutoSize = true;
			this->label_у->Location = System::Drawing::Point(12, 71);
			this->label_у->Name = L"label_у";
			this->label_у->Size = System::Drawing::Size(95, 13);
			this->label_у->TabIndex = 2;
			this->label_у->Text = L"Вести значення у";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(12, 106);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(95, 13);
			this->label_z->TabIndex = 3;
			this->label_z->Text = L"Вести значення z";
			this->label_z->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			// 
			// textBox_y
			// 
			this->textBox_y->Location = System::Drawing::Point(160, 71);
			this->textBox_y->Name = L"textBox_y";
			this->textBox_y->Size = System::Drawing::Size(100, 20);
			this->textBox_y->TabIndex = 0;
			// 
			// textBox_z
			// 
			this->textBox_z->Location = System::Drawing::Point(160, 103);
			this->textBox_z->Name = L"textBox_z";
			this->textBox_z->Size = System::Drawing::Size(100, 20);
			this->textBox_z->TabIndex = 0;
			// 
			// label_В
			// 
			this->label_В->AutoSize = true;
			this->label_В->Location = System::Drawing::Point(12, 143);
			this->label_В->Name = L"label_В";
			this->label_В->Size = System::Drawing::Size(58, 13);
			this->label_В->TabIndex = 4;
			this->label_В->Text = L"Число В =";
			// 
			// label_А
			// 
			this->label_А->AutoSize = true;
			this->label_А->Location = System::Drawing::Point(12, 169);
			this->label_А->Name = L"label_А";
			this->label_А->Size = System::Drawing::Size(58, 13);
			this->label_А->TabIndex = 5;
			this->label_А->Text = L"Число А =";
			this->label_А->Click += gcnew System::EventHandler(this, &mainForm::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(465, 53);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 162);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(465, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(738, 385);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_А);
			this->Controls->Add(this->label_В);
			this->Controls->Add(this->label_z);
			this->Controls->Add(this->label_у);
			this->Controls->Add(this->label_x);
			this->Controls->Add(this->textBox_z);
			this->Controls->Add(this->textBox_y);
			this->Controls->Add(this->textBox_x);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, z, y;
		double a, b;

		x = System::Double::Parse(this->textBox_x->Text);
		y = y.Parse(this->textBox_y->Text);
		z = z.Parse(this->textBox_z->Text);

		x = double(x) * 0.48;

		y = double(y) * 0.47;

		z = double(z) * -1.32;

		b = 2 * z + cos(pow(abs(y - 3 * x), 1 / 3)) / (2.1 + pow(sin(pow(abs(pow(z, 3) - y), 0.2)), 2) + pow(log10(abs(z - x / z + y)), 2));


		a = pow(abs(x), 0.43) + exp(y - x) + sqrt(pow(abs(pow(y, 2) + b), 0.22)) / 1 + pow(x, 2) * abs(y - pow(tan(z), 2));




		label_В->Text = "Число B = " + b.ToString();
		label_А->Text = "Число A = " + a.ToString();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, z, y;
		double a, b;


		y = y.Parse(this->textBox_y->Text);
		z = z.Parse(this->textBox_z->Text);



		y = double(y) * 0.47;

		z = double(z) * -1.32;

		x = -1;
		for (x = -1; x <= 1; x += 0.2) {



			b = 2 * z + cos(pow(abs(y - 3 * x), 1 / 3)) / (2.1 + pow(sin(pow(abs(pow(z, 3) - y), 0.2)), 2) + pow(log10(abs(z - x / z + y)), 2));


			a = pow(abs(x), 0.43) + exp(y - x) + sqrt(pow(abs(pow(y, 2) + b), 0.22)) / 1 + pow(x, 2) * abs(y - pow(tan(z), 2));




			textBox1->Text += a.ToString() + "\t" + b.ToString() + "\r" + "\n";
		}
		}
	};
	}
