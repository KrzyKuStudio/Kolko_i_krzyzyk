#pragma once
#include <stdlib.h>

namespace kolko_i_krzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Pola w grze np p1 = 'n' lub 'x' lub 'o'
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
	char kto = 'o'; // lub 'o'
	int sprawdzanie_ok = 1;
	void sprawdz()
	{
		;
	}
	//wczytuje puste pola
	void puste_obrazki();
	
	// sprawdza gracza i rysuje miniature kto teraz
	void obrazek_tura();
	

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
			this->Text = "Kó³ko i krzy¿yk";
		
			puste_obrazki();
			obrazek_tura();
		
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;

	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;



	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(39, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(142, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(249, 66);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(39, 170);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(142, 170);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 100);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(249, 170);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 100);
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(39, 274);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 100);
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(142, 274);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 100);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(249, 274);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 100);
			this->pictureBox9->TabIndex = 6;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox10->Location = System::Drawing::Point(445, 156);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 30);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Location = System::Drawing::Point(376, 231);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(105, 53);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(490, 437);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Location = System::Drawing::Point(100, 100);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox11->Image = Image::FromFile("img/newgame.png");
		
		this->BackgroundImage = Image::FromFile("img/back.png");

	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (p1 == 'n')
	{
		if (kto == 'o')
		{
			p1 = 'o';
			pictureBox1->Image = Image::FromFile("img/kolko.png");
			pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p1 = 'x';
			pictureBox1->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
	
		
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p2 == 'n')
	{
		if (kto == 'o')
		{
			p2 = 'o';
			pictureBox2->Image = Image::FromFile("img/kolko.png");
			pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p2 = 'x';
			pictureBox2->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p3 == 'n')
	{
		if (kto == 'o')
		{
			p3 = 'o';
			pictureBox3->Image = Image::FromFile("img/kolko.png");
			pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p3 = 'x';
			pictureBox3->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p4 == 'n')
	{
		if (kto == 'o')
		{
			p4 = 'o';
			pictureBox4->Image = Image::FromFile("img/kolko.png");
			pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p4 = 'x';
			pictureBox4->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p5 == 'n')
	{
		if (kto == 'o')
		{
			p5 = 'o';
			pictureBox5->Image = Image::FromFile("img/kolko.png");
			pictureBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p5 = 'x';
			pictureBox5->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}

private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p6 == 'n')
	{
		if (kto == 'o')
		{
			p6 = 'o';
			pictureBox6->Image = Image::FromFile("img/kolko.png");
			pictureBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p6 = 'x';
			pictureBox6->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}

}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p7 == 'n')
	{
		if (kto == 'o')
		{
			p7 = 'o';
			pictureBox7->Image = Image::FromFile("img/kolko.png");
			pictureBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p7 = 'x';
			pictureBox7->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}

private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p8 == 'n')
	{
		if (kto == 'o')
		{
			p8 = 'o';
			pictureBox8->Image = Image::FromFile("img/kolko.png");
			pictureBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p8 = 'x';
			pictureBox8->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p9 == 'n')
	{
		if (kto == 'o')
		{
			p9 = 'o';
			pictureBox9->Image = Image::FromFile("img/kolko.png");
			pictureBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'x';
		}
		else if (kto == 'x')
		{
			p9 = 'x';
			pictureBox9->Image = Image::FromFile("img/krzyzyk.png");
			pictureBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			kto = 'o';
		}
		obrazek_tura();
		sprawdz();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	puste_obrazki();
	obrazek_tura();

}
		 void puste_obrazki()
		 {
			 p1 = p2 = p3 = p4 = p5 = p6 = p7 = p8 = p9 = 'n';
			 int a = rand() % 2;
			 if (a == 0) kto = 'x';
			 if (a == 1) kto = 'o';
			 sprawdzanie_ok = 1;

			 pictureBox1->Image = Image::FromFile("img/nic.png");
			 pictureBox2->Image = Image::FromFile("img/nic.png");
			 pictureBox3->Image = Image::FromFile("img/nic.png");
			 pictureBox4->Image = Image::FromFile("img/nic.png");
			 pictureBox5->Image = Image::FromFile("img/nic.png");
			 pictureBox6->Image = Image::FromFile("img/nic.png");
			 pictureBox7->Image = Image::FromFile("img/nic.png");
			 pictureBox8->Image = Image::FromFile("img/nic.png");
			 pictureBox9->Image = Image::FromFile("img/nic.png");
			 
			 pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			 pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
		 }

		 void obrazek_tura()
		 {
			 if (kto == 'x')
			 {
				 pictureBox10->Image = Image::FromFile("img/krzyzyk_m.png");
			 }
			 else if (kto == 'o')
			 {
				 pictureBox10->Image = Image::FromFile("img/kolko_m.png");
			 }
			 
			
		 }

		 void sprawdz()
		 {
			 			 
			 if (sprawdzanie_ok == 1)
			 {
				 	 if ((p1 == p2 && p2 == p3 && p3 == 'x') ||
					 (p4 == p5 && p5 == p6 && p6 == 'x') ||
					 (p7 == p8 && p8 == p9 && p9 == 'x') ||
					 (p1 == p4 && p4 == p7 && p7 == 'x') ||
					 (p2 == p5 && p5 == p8 && p8 == 'x') ||
					 (p3 == p6 && p6 == p9 && p9 == 'x') ||
					 (p1 == p5 && p5 == p9 && p9 == 'x') ||
					 (p3 == p5 && p5 == p7 && p7 == 'x'))
				 {
					 MessageBox::Show("Wygra³ Gracz X");
					 sprawdzanie_ok = 0;
				 }
				 else if ((p1 == p2 && p2 == p3 && p3 == 'o') ||
					 (p4 == p5 && p5 == p6 && p6 == 'o') ||
					 (p7 == p8 && p8 == p9 && p9 == 'o') ||
					 (p1 == p4 && p4 == p7 && p7 == 'o') ||
					 (p2 == p5 && p5 == p8 && 8 == 'o') ||
					 (p3 == p6 && p6 == p9 && p9 == 'o') ||
					 (p1 == p5 && p5 == p9 && p9 == 'o') ||
					 (p3 == p5 && p5 == p7 && p7 == 'o'))
				 {
					 MessageBox::Show("Wygra³ Gracz O");
					 sprawdzanie_ok = 0;
				 }
			 }
		  }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
	puste_obrazki();
		obrazek_tura();
}
};

}
