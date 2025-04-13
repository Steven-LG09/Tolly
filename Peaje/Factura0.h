#pragma once

namespace Peaje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //Se incluye para crear el texto de impresion
	
	/// <summary>
	/// Resumen de Factura0
	/// </summary>
	public ref class Factura0 : public System::Windows::Forms::Form
	{
	public:
		Factura0(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Factura0()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:

	public:


	private: System::Windows::Forms::Button^ imprimir;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ ejes;
	private:
	public: System::Windows::Forms::Label^ tipo;
	public: System::Windows::Forms::Label^ categoria;
	private: System::Windows::Forms::Label^ label1;
	public:

	protected:


	private:

	private:

	public:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) //Aqui se inicializan todos los elementos de la interfaz
		{
			this->imprimir = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ejes = (gcnew System::Windows::Forms::Label());
			this->tipo = (gcnew System::Windows::Forms::Label());
			this->categoria = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// imprimir
			// 
			this->imprimir->Location = System::Drawing::Point(242, 262);
			this->imprimir->Name = L"imprimir";
			this->imprimir->Size = System::Drawing::Size(75, 23);
			this->imprimir->TabIndex = 1;
			this->imprimir->Text = L"Imprimir";
			this->imprimir->UseVisualStyleBackColor = true;
			this->imprimir->Click += gcnew System::EventHandler(this, &Factura0::imprimir_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Enabled = false;
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(12, 34);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(90, 21);
			this->dateTimePicker2->TabIndex = 59;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::Black;
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(100, 34);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(90, 21);
			this->dateTimePicker1->TabIndex = 58;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(94, 208);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 15);
			this->label10->TabIndex = 57;
			this->label10->Text = L"SOCIEDAD FIDUCIARIA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(93, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 15);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Fiduciaria Bancolombia S.A.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(112, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 15);
			this->label8->TabIndex = 55;
			this->label8->Text = L"NIT: 830.054.539-0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(97, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 15);
			this->label7->TabIndex = 54;
			this->label7->Text = L"https://app4.utp.edu.co/pe/";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(112, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 15);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Celular: 3148514140";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(112, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 15);
			this->label5->TabIndex = 52;
			this->label5->Text = L"contacto@utp.edu.co";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(93, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 15);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Linea Gratuita:  018000977330";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(11, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 15);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Atendido por: SLG";
			// 
			// ejes
			// 
			this->ejes->AutoSize = true;
			this->ejes->ForeColor = System::Drawing::Color::White;
			this->ejes->Location = System::Drawing::Point(11, 88);
			this->ejes->Name = L"ejes";
			this->ejes->Size = System::Drawing::Size(27, 15);
			this->ejes->TabIndex = 49;
			this->ejes->Text = L"Ejes";
			// 
			// tipo
			// 
			this->tipo->AutoSize = true;
			this->tipo->ForeColor = System::Drawing::Color::White;
			this->tipo->Location = System::Drawing::Point(11, 73);
			this->tipo->Name = L"tipo";
			this->tipo->Size = System::Drawing::Size(31, 15);
			this->tipo->TabIndex = 48;
			this->tipo->Text = L"Tipo";
			// 
			// categoria
			// 
			this->categoria->AutoSize = true;
			this->categoria->ForeColor = System::Drawing::Color::White;
			this->categoria->Location = System::Drawing::Point(11, 58);
			this->categoria->Name = L"categoria";
			this->categoria->Size = System::Drawing::Size(52, 15);
			this->categoria->TabIndex = 47;
			this->categoria->Text = L"Categoria";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 19);
			this->label1->TabIndex = 46;
			this->label1->Text = L"PEAJE UTP";
			// 
			// Factura0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(329, 290);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ejes);
			this->Controls->Add(this->tipo);
			this->Controls->Add(this->categoria);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->imprimir);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Factura0";
			this->ShowIcon = false;
			this->Text = L"Factura";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void imprimir_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento cuando se pulse el boton imprimir
		StreamWriter^ outFile = gcnew StreamWriter("Factura.txt"); //Se crea un objeto con el archivo donde va ir la factura
		outFile->Write(label1->Text); //Se escribe en el texto lo que se quiere imprimir 
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(dateTimePicker1->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("  "); //Se ingresa un salto de linea
		outFile->Write(dateTimePicker2->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(categoria->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(tipo->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(ejes->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label3->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label4->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label5->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label6->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label7->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label8->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label9->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Write("\r\n"); //Se ingresa un salto de linea
		outFile->Write(label10->Text); //Se escribe en el texto lo que se quiere imprimir
		outFile->Close(); //Se utiliza para terminar de escribir
	}
};
}