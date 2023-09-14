#pragma once
#include "Kontur.h"
#include <iostream>


namespace PEKK {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		Kontur* k;
		double C, R, L, w, dw, U_c0, I_0,w_0,E_0;
		//int* Y, * T;
		int wt, h, N;
		int Y_max, Y_min, T_max, T_min,W_max,W_min;
		bool isdraw;
		Color^ col;
		Graphics^ gr;
		Brush^ br;
		Pen^ line = gcnew Pen(Color::Red);
		BufferedGraphicsContext^ buffergrcont;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
		   BufferedGraphics^ buffergr;
		  
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(84, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(84, 173);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(84, 211);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(84, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(84, 291);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"C";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"R";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"L";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"w";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"dw";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Uco";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(59, 294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Io";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 43);
			this->button1->TabIndex = 14;
			this->button1->Text = L"E(t)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 43);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Uc(t)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(23, 420);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 43);
			this->button3->TabIndex = 16;
			this->button3->Text = L"I(t)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(143, 420);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 43);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Ucmax(w)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(23, 493);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 43);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Imax(w)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(143, 493);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 43);
			this->button6->TabIndex = 19;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(287, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(681, 482);
			this->panel1->TabIndex = 20;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(84, 327);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(45, 330);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"E_0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(999, 557);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	E_0 = Convert::ToDouble(textBox8->Text);//вводим с клавиатуры
	w = Convert::ToDouble(textBox4->Text);//вводим с клавиатуры
	wt = panel1->Width;//переменная для ширины
	h = panel1->Height;//переменная для высоты
	gr = panel1->CreateGraphics();
	this->buffergrcont = BufferedGraphicsManager::Current;
	this->buffergrcont->MaximumBuffer = System::Drawing::Size(wt + 1, h + 1);
	this->buffergr = buffergrcont->Allocate(gr, Rectangle(0, 0, wt + 1, h + 1));
	this->buffergr->Graphics->Clear(Color::WhiteSmoke);
	double* E=new double[100];//создаем массив для значений Е(t)
	double* t = new double[100];//создаем массив для t
	double E_min, E_max;
	double t_min = 0;
	double t_max = 9.9;
	double Es, ts;
	int Y, T;
	//цикл который считает график
	for (int i = 0;i < 100;i++)
	{
		E[i] = E_0 * sin(w * i * 0.1);
		t[i] = i * 0.1;
	}
	//нахождение максимального и минимального Е для построения графика
	E_min = E_max = 0;
	for (int i = 0;i < 100;i++)
	{
		if (E[i] < E_min) E_min = E[i];
		if (E[i] > E_max) E_max = E[i];
	}
	//переменные для перевода физических координат в пиксели
	ts = wt / (t_max -t_min);
	Es = h / (E_max - E_min);
	//построение графика через пиксели
	int E0, T0;
	T0 = (t[0] - t_min) * ts;
	E0 = h - (E[0] - E_min) * Es;
	for (int i = 0;i < 100;i++)
	{
		T = (t[i] - t_min) * ts;
		Y = h - (E[i] - E_min) * Es;
		buffergr->Graphics->DrawLine(line, T0, E0, T, Y);//рисует линию
		T0 = T;
		E0 = Y;
	}
	buffergr->Render();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	gr->Clear(System::Drawing::SystemColors::Window);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	C = Convert::ToDouble(textBox1->Text);
	R = Convert::ToDouble(textBox2->Text);
	L = Convert::ToDouble(textBox3->Text);
	w = Convert::ToDouble(textBox4->Text);
	U_c0 = Convert::ToDouble(textBox6->Text);
	I_0 = Convert::ToDouble(textBox7->Text);
	E_0 = Convert::ToDouble(textBox8->Text);
	wt = panel1->Width;
	h = panel1->Height;
	gr = panel1->CreateGraphics();
	this->buffergrcont = BufferedGraphicsManager::Current;
	this->buffergrcont->MaximumBuffer = System::Drawing::Size(wt + 1, h + 1);
	this->buffergr = buffergrcont->Allocate(gr, Rectangle(0, 0, wt + 1, h + 1));
	this->buffergr->Graphics->Clear(Color::WhiteSmoke);
	double* U = new double[100];
	double* t = new double[100];
	double* y = new double[2];
	double t_min = 0;
	double t_max = 10;
	double Us, ts,U_min,U_max;
	int Y, T;
	y[0] = U_c0;
	y[1] = I_0 / C;
	k=new Kontur( 0.1, C, R, L, w_0, dw, U_c0, I_0, E_0);//экземпляр класса(значения посчитанные классом методомом рг)
	k->SetInit(y);//вызываем метод класса для инициализаций начальных значений
	//цикл в котором находим все значения с помощью метода руунге кутта
	for (int i = 0;i < 100;i++)
	{
		t[i] = (i * 0.1);
	    k->DoOneStep(0.1*i);
		U[i] = k->y1[0];
		k->SetInit(k->y1);

	}

	U_min = U_max = 0;
	for (int i = 0;i < 100;i++)
	{
		if (U[i] < U_min) U_min = U[i];
		if (U[i] > U_max) U_max = U[i];
	}
	ts = wt / (t_max - t_min);
	Us = h / (U_max - U_min);
	int U0, T0;
	T0 = (t[0] - t_min) * ts;
	U0 = h - (U[0] - U_min) * Us;

	for (int i = 0;i < 100;i++)
	{
		T = (t[i] - t_min) * ts;
		Y = h - (U[i] - U_min) * Us;
		buffergr->Graphics->DrawLine(line, T0, U0, T, Y);
		T0 = T;
		U0 = Y;
	}
	buffergr->Render();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	C = Convert::ToDouble(textBox1->Text);
	R = Convert::ToDouble(textBox2->Text);
	L = Convert::ToDouble(textBox3->Text);
	w = Convert::ToDouble(textBox4->Text);
	U_c0 = Convert::ToDouble(textBox6->Text);
	I_0 = Convert::ToDouble(textBox7->Text);
	E_0 = Convert::ToDouble(textBox8->Text);
	wt = panel1->Width;
	h = panel1->Height;
	gr = panel1->CreateGraphics();
	this->buffergrcont = BufferedGraphicsManager::Current;
	this->buffergrcont->MaximumBuffer = System::Drawing::Size(wt + 1, h + 1);
	this->buffergr = buffergrcont->Allocate(gr, Rectangle(0, 0, wt + 1, h + 1));
	this->buffergr->Graphics->Clear(Color::WhiteSmoke);
	double* I = new double[100];
	double* t = new double[100];
	double* y = new double[2];
	double t_min = 0;
	double t_max = 10;
	double Is, ts, I_min, I_max;
	int Y, T;
	y[0] = U_c0;
	y[1] = I_0 / C;
	k = new Kontur(0.1, C, R, L, w_0, dw, U_c0, I_0, E_0);
	k->SetInit(y);
	for (int i = 0;i < 100;i++)
	{
		t[i] = (i * 0.1);
		k->DoOneStep(0.1 * i);
		I[i] = k->y1[1];
		k->SetInit(k->y1);

	}
	I_min = I_max = 0;
	for (int i = 0;i < 100;i++)
	{
		if (I[i] < I_min) I_min = I[i];
		if (I[i] > I_max) I_max = I[i];
	}
	ts = wt / (t_max - t_min);
	Is = h / (I_max - I_min);
	int I0, T0;
	T0 = (t[0] - t_min) * ts;
	I0 = h - (I[0] - I_min) * Is;

	for (int i = 0;i < 100;i++)
	{
		T = (t[i] - t_min) * ts;
		Y = h - (I[i] - I_min) * Is;
		buffergr->Graphics->DrawLine(line, T0, I0, T, Y);
		T0 = T;
		I0 = Y;
	}
	buffergr->Render();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	C = Convert::ToDouble(textBox1->Text);
	R = Convert::ToDouble(textBox2->Text);
	L = Convert::ToDouble(textBox3->Text);
	w = Convert::ToDouble(textBox4->Text);
	U_c0 = Convert::ToDouble(textBox6->Text);
	I_0 = Convert::ToDouble(textBox7->Text);
	E_0 = Convert::ToDouble(textBox8->Text);
	wt = panel1->Width;
	h = panel1->Height;
	gr = panel1->CreateGraphics();
	this->buffergrcont = BufferedGraphicsManager::Current;
	this->buffergrcont->MaximumBuffer = System::Drawing::Size(wt + 1, h + 1);
	this->buffergr = buffergrcont->Allocate(gr, Rectangle(0, 0, wt + 1, h + 1));
	this->buffergr->Graphics->Clear(Color::WhiteSmoke);
	double* U_cmax = new double[100];
	double* w0= new double[100];
	double w_min = w/20;
	double w_max = w*5;
	double Us, ws, U_min, U_max;
	int Y, T;

	for (int i = 0;i < 100;i++)
	{
		w0[i] = w * 0.1 * i / 2;;
		U_cmax[i] = E_0 / (L * C * sqrt((w * w - w0[i] * w0[i]) * (w * w - w0[i] * w0[i]) + 4 * (R / (2 * L)) * (R / (2 * L)) * w0[i] * w0[i]));
	}

	U_min = U_max = 0;
	for (int i = 0;i < 100;i++)
	{
		if (U_cmax[i] < U_min) U_min = U_cmax[i];
		if (U_cmax[i] > U_max) U_max = U_cmax[i];
	}
	ws = wt / (w_max - w_min);
	Us= h / (U_max - U_min);
	int U0, T0;
	T0 = (w0[0] - w_min) * ws;
	U0 = h - (U_cmax[0] - U_min) * Us;

	for (int i = 0;i < 100;i++)
	{
		T = (w0[i] - w_min) * ws;
		Y = h - (U_cmax[i] - U_min) * Us;
		buffergr->Graphics->DrawLine(line, T0, U0, T, Y);
		T0 = T;
		U0 = Y;
	}
	buffergr->Render();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	C = Convert::ToDouble(textBox1->Text);
	R = Convert::ToDouble(textBox2->Text);
	L = Convert::ToDouble(textBox3->Text);
	w = Convert::ToDouble(textBox4->Text);
	U_c0 = Convert::ToDouble(textBox6->Text);
	I_0 = Convert::ToDouble(textBox7->Text);
	E_0 = Convert::ToDouble(textBox8->Text);
	wt = panel1->Width;
	h = panel1->Height;
	gr = panel1->CreateGraphics();
	this->buffergrcont = BufferedGraphicsManager::Current;
	this->buffergrcont->MaximumBuffer = System::Drawing::Size(wt + 1, h + 1);
	this->buffergr = buffergrcont->Allocate(gr, Rectangle(0, 0, wt + 1, h + 1));
	this->buffergr->Graphics->Clear(Color::WhiteSmoke);
	double* I_cmax = new double[100];
	double* w0 = new double[100];
	double w_min = w/20;
	double w_max = 2*w;
	double Is, ws, I_min, I_max;
	int Y, T;

	for (int i = 0;i < 100;i++)
	{
		w0[i] = w * 0.1 * i / 2;;
		I_cmax[i] = w0[i]*E_0 / (L  * sqrt((w * w - w0[i] * w0[i]) * (w * w - w0[i] * w0[i]) + 4 * (R / (2 * L)) * (R / (2 * L)) * w0[i] * w0[i]));
	}
	double wr = sqrt(1 / (L * C) );
	I_min = I_max = 0;
	for (int i = 0;i < 100;i++)
	{
		if (I_cmax[i] < I_min) I_min = I_cmax[i];
		if (I_cmax[i] > I_max) I_max = I_cmax[i];
	}
	ws = wt / (w_max - w_min);
	Is = h / (I_max - I_min);
	int U0, T0;
	T0 = (w0[0] - w_min) * ws;
	U0 = h - (I_cmax[0] - I_min) * Is;

	for (int i = 0;i < 100;i++)
	{
		T = (w0[i] - w_min) * ws;
		Y = h - (I_cmax[i] - I_min) * Is;
		buffergr->Graphics->DrawLine(line, T0, U0, T, Y);
		T0 = T;
		U0 = Y;
	}
	buffergr->Render();
}
};
}
