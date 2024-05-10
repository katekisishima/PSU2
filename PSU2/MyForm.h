#pragma once
#include <cmath>
#include <string.h>
#include <math.h>,

namespace PSU2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(271, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(308, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(282, 74);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->Enter += gcnew System::EventHandler(this, &MyForm::button2_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(148, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вычисление значения функции";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 263);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(375, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(215, 304);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(375, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(215, 342);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(375, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите значение A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите значение X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Введите значение Y=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 220);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(626, 484);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Выполнил Ботенков.Д.А., группы 23-КФ задание 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double y, x, a;
	
	if ((textBox1->Text != "") && (textBox2->Text != ""))
	{
		
		a = Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		if (x <= 0)
			y = abs(pow(sqrt(2*x+5/(pow(x,3)+2)), 3));
		else if (x > 0 && x <= a) {

			y = 5*x+pow(x,2)/(pow((pow(x,2)+3), 3));

		}
		else {

			y = pow(cos(pow(x, 3) + sqrt(x)), 2);

		};
		
		textBox3->Text = Convert::ToString(y);
	}
	else 
	{
		MessageBox::Show("Введите пожалуйста данные A и X", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void button2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l) {
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("Параматр A не являеться числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-')
		t++;
	if (str[t] == ',')
		a = false;
	while (t < l) {
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;
		}

		else if (str[t] < '0' || str[t]>'9')
			a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("Параматр X не являеться числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox2->Focus();
	}
}
};
}
