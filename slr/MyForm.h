#pragma once


namespace slr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:



	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ main_label;
	private: System::Windows::Forms::Button^ button_ac;
	private: System::Windows::Forms::Button^ button_reverse;
	private: System::Windows::Forms::Button^ button_percent;





	private: System::Windows::Forms::Button^ b_divide;
	private: System::Windows::Forms::Button^ b_mult;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ b_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ b_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ b_equal;
	private: System::Windows::Forms::Button^ button_dot;



	private: System::Windows::Forms::Button^ button20;

	private: float f_num;
	private: char action=' ';
	private: bool equal = false;


	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->main_label = (gcnew System::Windows::Forms::Label());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_reverse = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->b_divide = (gcnew System::Windows::Forms::Button());
			this->b_mult = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->b_equal = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(20, 20);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// main_label
			// 
			this->main_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->main_label->Location = System::Drawing::Point(12, 12);
			this->main_label->Name = L"main_label";
			this->main_label->Size = System::Drawing::Size(260, 40);
			this->main_label->TabIndex = 1;
			this->main_label->Text = L"0";
			this->main_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_ac
			// 
			this->button_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ac->Location = System::Drawing::Point(12, 95);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(62, 50);
			this->button_ac->TabIndex = 2;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_reverse
			// 
			this->button_reverse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_reverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_reverse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_reverse->Location = System::Drawing::Point(80, 95);
			this->button_reverse->Name = L"button_reverse";
			this->button_reverse->Size = System::Drawing::Size(62, 50);
			this->button_reverse->TabIndex = 3;
			this->button_reverse->Text = L"+-";
			this->button_reverse->UseVisualStyleBackColor = false;
			this->button_reverse->Click += gcnew System::EventHandler(this, &MyForm::button_reverse_Click);
			// 
			// button_percent
			// 
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_percent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_percent->Location = System::Drawing::Point(148, 95);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(62, 50);
			this->button_percent->TabIndex = 4;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// b_divide
			// 
			this->b_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->b_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_divide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b_divide->Location = System::Drawing::Point(216, 95);
			this->b_divide->Name = L"b_divide";
			this->b_divide->Size = System::Drawing::Size(62, 50);
			this->b_divide->TabIndex = 5;
			this->b_divide->Text = L"/";
			this->b_divide->UseVisualStyleBackColor = false;
			this->b_divide->Click += gcnew System::EventHandler(this, &MyForm::b_divide_Click);
			// 
			// b_mult
			// 
			this->b_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->b_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_mult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b_mult->Location = System::Drawing::Point(216, 161);
			this->b_mult->Name = L"b_mult";
			this->b_mult->Size = System::Drawing::Size(62, 50);
			this->b_mult->TabIndex = 9;
			this->b_mult->Text = L"*";
			this->b_mult->UseVisualStyleBackColor = false;
			this->b_mult->Click += gcnew System::EventHandler(this, &MyForm::b_mult_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(148, 161);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(80, 161);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(12, 161);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 50);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// b_minus
			// 
			this->b_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->b_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b_minus->Location = System::Drawing::Point(216, 226);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(62, 50);
			this->b_minus->TabIndex = 13;
			this->b_minus->Text = L"-";
			this->b_minus->UseVisualStyleBackColor = false;
			this->b_minus->Click += gcnew System::EventHandler(this, &MyForm::b_minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(148, 226);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(62, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(80, 226);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(12, 226);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(62, 50);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// b_plus
			// 
			this->b_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->b_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b_plus->Location = System::Drawing::Point(216, 293);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(62, 50);
			this->b_plus->TabIndex = 17;
			this->b_plus->Text = L"+";
			this->b_plus->UseVisualStyleBackColor = false;
			this->b_plus->Click += gcnew System::EventHandler(this, &MyForm::b_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(148, 293);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(62, 50);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(80, 293);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 50);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(12, 293);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(62, 50);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// b_equal
			// 
			this->b_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->b_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_equal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b_equal->Location = System::Drawing::Point(216, 358);
			this->b_equal->Name = L"b_equal";
			this->b_equal->Size = System::Drawing::Size(62, 50);
			this->b_equal->TabIndex = 21;
			this->b_equal->Text = L"=";
			this->b_equal->UseVisualStyleBackColor = false;
			this->b_equal->Click += gcnew System::EventHandler(this, &MyForm::b_equal_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_dot->Location = System::Drawing::Point(148, 358);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(62, 50);
			this->button_dot->TabIndex = 20;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Location = System::Drawing::Point(12, 358);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(130, 50);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(284, 433);
			this->Controls->Add(this->b_equal);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->b_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->b_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->b_mult);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->b_divide);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_reverse);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->main_label);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   private: System::Void Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		   Button^ b = safe_cast<Button^>(sender);
		   if (this->main_label->Text == "0" || equal) {
			   this->main_label->Text = b->Text;
			   equal = false;
		   }
		   else
			   this->main_label->Text = this->main_label->Text+ b->Text;
	   }	

private: System::Void b_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	action_Click('+');
}
private: System::Void b_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	action_Click('/');
}
private: System::Void b_mult_Click(System::Object^ sender, System::EventArgs^ e) {
	action_Click('*');
}
private: System::Void b_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	action_Click('-');
}
	   private: System::Void action_Click(char act) {
		   this->f_num = Convert::ToDouble(this->main_label->Text);
		   this->action = act;
		   this->main_label->Text = "0";
	   }
private: System::Void b_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (action == ' ')
		return;
	float second = Convert::ToDouble(this->main_label->Text);
	int res;
	switch (this->action) {
	case '+': res = f_num + second; break;
	case '%': res = f_num * second/100; break;
	case '-': res = f_num - second; break;
	case '*': res = f_num * second; break;
	case '/': 
		if (!second) {
			res = 0;
			MessageBox::Show(this, "Can't divide by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = f_num / second; break;
	}
	equal = true;
	this->main_label->Text = Convert::ToString(res);
}
private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->main_label->Text = "0";
	f_num = 0;
	action = ' ';
	equal = false;
}
private: System::Void button_reverse_Click(System::Object^ sender, System::EventArgs^ e) {
	float t = Convert::ToInt32(this->main_label->Text);
	t *= -1;
	this->main_label->Text = Convert::ToString(t);
}
private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	action_Click('%');
}
private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!this->main_label->Text->Contains(","))
		this->main_label->Text += ",";
}
};
}
