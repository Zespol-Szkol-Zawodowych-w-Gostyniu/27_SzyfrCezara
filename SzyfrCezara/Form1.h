#pragma once
#include "MyForm1.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace msclr::interop;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ otwórzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ akcjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ustawieniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ szyfrujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deszyfrujToolStripMenuItem;


	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->akcjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ustawieniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->szyfrujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deszyfrujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->akcjaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(825, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->otwórzToolStripMenuItem,
					this->zapiszToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// otwórzToolStripMenuItem
			// 
			this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
			this->otwórzToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->otwórzToolStripMenuItem->Text = L"Otwórz";
			this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::otwórzToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zapiszToolStripMenuItem_Click);
			// 
			// akcjaToolStripMenuItem
			// 
			this->akcjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ustawieniaToolStripMenuItem,
					this->szyfrujToolStripMenuItem, this->deszyfrujToolStripMenuItem
			});
			this->akcjaToolStripMenuItem->Name = L"akcjaToolStripMenuItem";
			this->akcjaToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->akcjaToolStripMenuItem->Text = L"Akcja";
			// 
			// ustawieniaToolStripMenuItem
			// 
			this->ustawieniaToolStripMenuItem->Name = L"ustawieniaToolStripMenuItem";
			this->ustawieniaToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->ustawieniaToolStripMenuItem->Text = L"Ustawienia";
			this->ustawieniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ustawieniaToolStripMenuItem_Click);
			// 
			// szyfrujToolStripMenuItem
			// 
			this->szyfrujToolStripMenuItem->Name = L"szyfrujToolStripMenuItem";
			this->szyfrujToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->szyfrujToolStripMenuItem->Text = L"Szyfruj";
			this->szyfrujToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::szyfrujToolStripMenuItem_Click);
			// 
			// deszyfrujToolStripMenuItem
			// 
			this->deszyfrujToolStripMenuItem->Name = L"deszyfrujToolStripMenuItem";
			this->deszyfrujToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->deszyfrujToolStripMenuItem->Text = L"Deszyfruj";
			this->deszyfrujToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::deszyfrujToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Location = System::Drawing::Point(0, 410);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(825, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 52);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(800, 355);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(3, 180);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(794, 172);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(794, 171);
			this->textBox1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 432);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Szyfr Cezara";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: inline int sprawdz(char znak)
		{
			if ((znak <= '~') && (znak >=' ')) return 0; else return 1;
		}

		private: void szyfruj(int klucz, std::string& tab)//klucz dodatni - szyfrowanie, klucz ujemny - deszyfrowanie
		{
			int pierwszyznak = int(' ');
			int ostatniznak = int('~');
			int ileznakow = ostatniznak-pierwszyznak+1; //Znaki z tablicy ASCII 32-126
			int pom;
			char a, z;

			for (int i = 0; i < tab.size(); i++)
			{
				pom = this->sprawdz(tab[i]);
				if (pom == 0)
				{
					if ((int(tab[i])>=pierwszyznak) && (int(tab[i])<=ostatniznak))
						tab[i] = char((((int(tab[i]) - pierwszyznak + klucz) % ileznakow) >= 0) ? int((tab[i]) - pierwszyznak + klucz) % ileznakow + pierwszyznak : int((((tab[i]) - pierwszyznak + klucz) % ileznakow) + ileznakow + pierwszyznak));
					
				}
			}
		}
#pragma endregion
	private: System::Void szyfrujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SzyfrCezara::MyForm^ ustawieniaForm = gcnew SzyfrCezara::MyForm;
		int klucz= ustawieniaForm->key;
		System::String^ tekst1 = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string tab = context.marshal_as<std::string>(tekst1);
		szyfruj(klucz, tab); //szyfrowanie
		textBox2->Text= gcnew String(tab.c_str());
	}
private: System::Void deszyfrujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SzyfrCezara::MyForm^ ustawieniaForm = gcnew SzyfrCezara::MyForm;
	int klucz = -ustawieniaForm->key;
	System::String^ tekst1 = textBox1->Text;
	msclr::interop::marshal_context context;
	std::string tab = context.marshal_as<std::string>(tekst1);
	szyfruj(klucz, tab); //szyfrowanie
	textBox2->Text = gcnew String(tab.c_str());
}
private: System::Void ustawieniaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SzyfrCezara::MyForm^ ustawieniaForm = gcnew SzyfrCezara::MyForm;
	//ustawieniaForm->MdiParent = this;
	ustawieniaForm->ShowDialog();
	//ustawieniaForm->Show();

}
private: System::Void otwórzToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			String^ filename = openFileDialog1->FileName;
			String^ tekst = File::ReadAllText(filename);
			textBox1->Text = tekst;

			// Insert code to read the stream here.

			// Add file name without path to the form title

			//Text = String::Concat("Simple Text File Viewer - ", openFileDialog1->SafeFileName);

			// Write complete file path to file path text box

			//txtFilePath->Text = openFileDialog1->FileName;

			// Load text file contents into viewer text box:

			//txtText->Text = (gcnew StreamReader(myStream))->ReadToEnd();

			myStream->Close();
		}
	}
}
private: System::Void zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
	try {
		saveFileDialog1->InitialDirectory = "c:\\";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->Title = L"Zapisz plik";
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (saveFileDialog1->FileName != "")
			{
				String^ filename = saveFileDialog1->FileName;
				String^ tekst = textBox2->Text;
				StreamWriter^ writer = gcnew StreamWriter(File::Create(filename));
				try {
					writer->Write(tekst);
				}
				finally {
					delete writer;
				}

			}
		}
	}
	finally{
		delete saveFileDialog1;
	}
}
};
}
