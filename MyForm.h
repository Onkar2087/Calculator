#pragma once

namespace CalculatorNew {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;


	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->Location = System::Drawing::Point(36, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(36, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(442, 44);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(156, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 0;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(275, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 0;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(398, 90);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 0;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(36, 205);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 0;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(156, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 0;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(275, 205);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 0;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(398, 205);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 0;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(36, 321);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 0;
			this->button9->Text = L"button1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(156, 321);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 0;
			this->button10->Text = L"button1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(275, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 0;
			this->button11->Text = L"button1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(398, 321);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 0;
			this->button12->Text = L"button1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(36, 321);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 0;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(156, 321);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 80);
			this->button14->TabIndex = 0;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(275, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 0;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(398, 321);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 0;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(36, 437);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 0;
			this->button17->Text = L"button1";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(36, 437);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 0;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(156, 437);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 80);
			this->button19->TabIndex = 0;
			this->button19->Text = L"button1";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(156, 437);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 80);
			this->button20->TabIndex = 0;
			this->button20->Text = L"2";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(275, 437);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 80);
			this->button21->TabIndex = 0;
			this->button21->Text = L"button1";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(275, 437);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 80);
			this->button22->TabIndex = 0;
			this->button22->Text = L"3";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(398, 437);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 80);
			this->button23->TabIndex = 0;
			this->button23->Text = L"button1";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(398, 437);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 80);
			this->button24->TabIndex = 0;
			this->button24->Text = L"*";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(36, 551);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 80);
			this->button25->TabIndex = 0;
			this->button25->Text = L"button1";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(36, 551);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 80);
			this->button26->TabIndex = 0;
			this->button26->Text = L"0";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(156, 551);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 80);
			this->button27->TabIndex = 0;
			this->button27->Text = L"button1";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(156, 551);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 80);
			this->button28->TabIndex = 0;
			this->button28->Text = L".";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(275, 551);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 80);
			this->button29->TabIndex = 0;
			this->button29->Text = L"button1";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(275, 551);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(80, 80);
			this->button30->TabIndex = 0;
			this->button30->Text = L"=";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(398, 551);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 80);
			this->button31->TabIndex = 0;
			this->button31->Text = L"button1";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(398, 551);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 80);
			this->button32->TabIndex = 0;
			this->button32->Text = L"/";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 711);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ Operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) //when a number is clicked
	//defines the function parameters for an event handler
	//sender is the object that raised the event (often a UI element like a button)
	//e is an object that contains information about the event itself.
{
	Button^ Numbers = safe_cast<Button^>(sender);
	//type casts the sender object into a Button^ type, as sender is of type System::Object^

	if (textBox1->Text == "0") //checking that the initialising value of the textBox1 or not
	{
		textBox1->Text =  Numbers->Text; //pressesn button on the calculator should be aassigned to Numbers->Text
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text; //if initial value is not 0, then add it to the current value
	}
}

private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) //when a operator is clicked
	//same as of EnterNumber
{

	Button^ NumbersOp = safe_cast<Button^>(sender); //same as of EnterNumber, as of operator type
	firstDigit = Double::Parse(textBox1->Text);
	//Parse method is used to convert a string representation of a number (contained in textBox1->Text) into a floating-point (double) numerical value

	textBox1->Text = "";
	//clears the text box in preparation for entering a new number after the operator has been selected
	Operators = NumbersOp->Text; //assigning the text of the operator button to variable "Operators"

}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) //when a decimal is clicked
{

	if (!textBox1->Text->Contains(".")) // checks whether the current content of textBox1 contains a decimal point (".")
		//! operator negates the result, so the condition is true if the text does not already contain a decimal point
	{
		textBox1->Text = textBox1->Text + ".";
		//If the if condition is true, and there is no decimal previously. then this will help in adding the decimal to the content
	}
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) //when a equal[=] sign is clicked
	//In this case, the handler is responding to a button click, which appears to be the equals button
{

	secondDigit = Double::Parse(textBox1->Text); //represents the second operand for a binary arithmetic operation
	//Parse -  method to convert the text content into a numerical double-precision floating-point value

	if (Operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result); 
		//updating value of textBox1 with the result value and changing it into string
	}

	else if (Operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}

	else if (Operators == "*")
	{
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}

	else if (Operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) //when a C[Clear] is clicked
{
	textBox1->Text = "0"; //setting the value of textBox1 to 0
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //when a CE[Clear Entry] is clicked
{
	textBox1->Text = "0"; //setting the value of textBox1 to 0
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //when [Plus-Minus] is clicked
	//to enter negative numbers
{

	if (textBox1->Text->Contains("-")) //checking if the present input/outout is already negative or not
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
		//As the calculator is built in such a way to perform on positive numbers so if there is a negative sign present already - it will remove it
	//'0', specifies the starting index (position) in the string from which characters should be removed. The second argument, '1', specifies the number of characters to remove
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
		//used to toggle the positive/negative sign of the currently entered number
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //when icon with cross is clicked 
{
	if (textBox1->Text->Length > 0) //checks if there's any text present in the text box
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1); //removes the last character from the text in textBox1
	}

	if (textBox1->Text ==  "") //scenario where length becomes 0, nothing to clear
	{
		textBox1->Text = "0"; //setting the value of textBox1 to 0
	}
}
};
}

