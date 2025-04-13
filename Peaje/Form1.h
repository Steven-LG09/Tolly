#pragma once
#include "Menu0.h" //Se incluye la segunda interfaz para poder conectarla con el boton de ingreso

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			textoUsuario->PasswordChar = '*'; // Se cambia el formato para que solo aparezca asteriscos cuando se escriba el usuario
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ logotipo; 
	protected:

	private: System::Windows::Forms::Label^ etiquetaUsuario;
	private: System::Windows::Forms::TextBox^ textoUsuario;
	private: System::Windows::Forms::Button^ botonIngreso;
	private: System::Windows::Forms::Label^ verificacion;
	protected:


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
		void InitializeComponent(void) //Aqui se inicializa todos los elementos de esta interfaz
		{
			this->logotipo = (gcnew System::Windows::Forms::Label());
			this->etiquetaUsuario = (gcnew System::Windows::Forms::Label());
			this->textoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->botonIngreso = (gcnew System::Windows::Forms::Button());
			this->verificacion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// logotipo
			// 
			this->logotipo->AutoSize = true;
			this->logotipo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logotipo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->logotipo->Location = System::Drawing::Point(64, 70);
			this->logotipo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->logotipo->Name = L"logotipo";
			this->logotipo->Size = System::Drawing::Size(169, 32);
			this->logotipo->TabIndex = 0;
			this->logotipo->Text = L"PEAJE UTP";
			// 
			// etiquetaUsuario
			// 
			this->etiquetaUsuario->AutoSize = true;
			this->etiquetaUsuario->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->etiquetaUsuario->Location = System::Drawing::Point(66, 140);
			this->etiquetaUsuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->etiquetaUsuario->Name = L"etiquetaUsuario";
			this->etiquetaUsuario->Size = System::Drawing::Size(45, 15);
			this->etiquetaUsuario->TabIndex = 1;
			this->etiquetaUsuario->Text = L"Usuario";
			// 
			// textoUsuario
			// 
			this->textoUsuario->Location = System::Drawing::Point(118, 137);
			this->textoUsuario->Name = L"textoUsuario";
			this->textoUsuario->Size = System::Drawing::Size(100, 21);
			this->textoUsuario->TabIndex = 2;
			// 
			// botonIngreso
			// 
			this->botonIngreso->Location = System::Drawing::Point(104, 180);
			this->botonIngreso->Name = L"botonIngreso";
			this->botonIngreso->Size = System::Drawing::Size(75, 23);
			this->botonIngreso->TabIndex = 3;
			this->botonIngreso->Text = L"Ingresar";
			this->botonIngreso->UseVisualStyleBackColor = true;
			this->botonIngreso->Click += gcnew System::EventHandler(this, &Form1::botonIngreso_Click);
			// 
			// verificacion
			// 
			this->verificacion->AutoSize = true;
			this->verificacion->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->verificacion->Location = System::Drawing::Point(101, 218);
			this->verificacion->Name = L"verificacion";
			this->verificacion->Size = System::Drawing::Size(0, 15);
			this->verificacion->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(302, 278);
			this->Controls->Add(this->verificacion);
			this->Controls->Add(this->botonIngreso);
			this->Controls->Add(this->textoUsuario);
			this->Controls->Add(this->etiquetaUsuario);
			this->Controls->Add(this->logotipo);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Login Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void botonIngreso_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		if (this->textoUsuario->Text == "user123") {     // Se verifica que el usuario escrito sea correcto
			Peaje::Menu0^ menu0 = gcnew Peaje::Menu0();  //Se crea un objeto para poder ingresar a la segunda interfaz
			this->Visible = false;                       //Con esto se cierra la primera interfaz para abrir solo la segunda
			menu0->ShowDialog();                         //Se llama al objeto creado anteriormente para poder mostrar la interfaz
			this->Visible = true;                        //Cuando se cierre la segunda interfaz, se volvera a abrir la primera 
			
		}
		else {
			this->verificacion->Text = "Usuario Incorrecto"; //Si el usuario es incorrecto saldra un aviso diciendo esto
		}
	}
};
}
