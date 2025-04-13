#pragma once
#include "Factura0.h" //Se incluye la tercera interfaz para poder conectarla con el boton de facturar

namespace Peaje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu0
	/// </summary>
	public ref class Menu0 : public System::Windows::Forms::Form
	{
	public:
		Menu0(void)
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
		~Menu0()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CUno;
	private: System::Windows::Forms::Button^ cDos;
	private: System::Windows::Forms::Button^ cTres;
	private: System::Windows::Forms::Button^ cCuatro;
	private: System::Windows::Forms::Button^ cCinco;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ automovil;
	private: System::Windows::Forms::Button^ campero;
	private: System::Windows::Forms::Button^ pickUp;
	private: System::Windows::Forms::Button^ microbus;
	private: System::Windows::Forms::Button^ buseta;
	private: System::Windows::Forms::Button^ busMetro;
	private: System::Windows::Forms::Button^ camionP;
	private: System::Windows::Forms::Button^ camionG;
	private: System::Windows::Forms::Button^ camion;
	private: System::Windows::Forms::Button^ tractoC;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ejes2;
	private: System::Windows::Forms::Button^ ejes3;
	private: System::Windows::Forms::Button^ ejes4;
	private: System::Windows::Forms::Button^ ejes5;
	private: System::Windows::Forms::Button^ ejes6;
	private: System::Windows::Forms::Button^ factura;
	private: System::Windows::Forms::Label^ cYt;
	private: System::Windows::Forms::Label^ cC;
	private: System::Windows::Forms::Label^ ejE;
	private: System::Windows::Forms::Button^ tractoC2;
	private: System::Windows::Forms::Button^ tractoC3;
	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) //Aqui se inicializa todos los elementos de esta interfaz
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CUno = (gcnew System::Windows::Forms::Button());
			this->cDos = (gcnew System::Windows::Forms::Button());
			this->cTres = (gcnew System::Windows::Forms::Button());
			this->cCuatro = (gcnew System::Windows::Forms::Button());
			this->cCinco = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->automovil = (gcnew System::Windows::Forms::Button());
			this->campero = (gcnew System::Windows::Forms::Button());
			this->pickUp = (gcnew System::Windows::Forms::Button());
			this->microbus = (gcnew System::Windows::Forms::Button());
			this->buseta = (gcnew System::Windows::Forms::Button());
			this->busMetro = (gcnew System::Windows::Forms::Button());
			this->camionP = (gcnew System::Windows::Forms::Button());
			this->camionG = (gcnew System::Windows::Forms::Button());
			this->camion = (gcnew System::Windows::Forms::Button());
			this->tractoC = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ejes2 = (gcnew System::Windows::Forms::Button());
			this->ejes3 = (gcnew System::Windows::Forms::Button());
			this->ejes4 = (gcnew System::Windows::Forms::Button());
			this->ejes5 = (gcnew System::Windows::Forms::Button());
			this->ejes6 = (gcnew System::Windows::Forms::Button());
			this->factura = (gcnew System::Windows::Forms::Button());
			this->cYt = (gcnew System::Windows::Forms::Label());
			this->cC = (gcnew System::Windows::Forms::Label());
			this->ejE = (gcnew System::Windows::Forms::Label());
			this->tractoC2 = (gcnew System::Windows::Forms::Button());
			this->tractoC3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Categorias y Tarifas";
			// 
			// CUno
			// 
			this->CUno->BackColor = System::Drawing::Color::Transparent;
			this->CUno->Location = System::Drawing::Point(194, 19);
			this->CUno->Name = L"CUno";
			this->CUno->Size = System::Drawing::Size(45, 43);
			this->CUno->TabIndex = 2;
			this->CUno->Text = L"I  $9200";
			this->CUno->UseVisualStyleBackColor = false;
			this->CUno->Click += gcnew System::EventHandler(this, &Menu0::CUno_Click);
			// 
			// cDos
			// 
			this->cDos->BackColor = System::Drawing::Color::Transparent;
			this->cDos->Location = System::Drawing::Point(245, 19);
			this->cDos->Name = L"cDos";
			this->cDos->Size = System::Drawing::Size(52, 43);
			this->cDos->TabIndex = 3;
			this->cDos->Text = L"II  $10000";
			this->cDos->UseVisualStyleBackColor = false;
			this->cDos->Click += gcnew System::EventHandler(this, &Menu0::cDos_Click);
			// 
			// cTres
			// 
			this->cTres->Location = System::Drawing::Point(303, 19);
			this->cTres->Name = L"cTres";
			this->cTres->Size = System::Drawing::Size(59, 43);
			this->cTres->TabIndex = 5;
			this->cTres->Text = L"III  $21300";
			this->cTres->UseVisualStyleBackColor = true;
			this->cTres->Click += gcnew System::EventHandler(this, &Menu0::cTres_Click);
			// 
			// cCuatro
			// 
			this->cCuatro->Location = System::Drawing::Point(368, 19);
			this->cCuatro->Name = L"cCuatro";
			this->cCuatro->Size = System::Drawing::Size(58, 43);
			this->cCuatro->TabIndex = 6;
			this->cCuatro->Text = L"IV  $27100";
			this->cCuatro->UseVisualStyleBackColor = true;
			this->cCuatro->Click += gcnew System::EventHandler(this, &Menu0::cCuatro_Click);
			// 
			// cCinco
			// 
			this->cCinco->Location = System::Drawing::Point(434, 19);
			this->cCinco->Name = L"cCinco";
			this->cCinco->Size = System::Drawing::Size(53, 43);
			this->cCinco->TabIndex = 7;
			this->cCinco->Text = L"V  $30500";
			this->cCinco->UseVisualStyleBackColor = true;
			this->cCinco->Click += gcnew System::EventHandler(this, &Menu0::cCinco_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LimeGreen;
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(217, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Configuracion categorias";
			this->label2->Visible = false;
			// 
			// automovil
			// 
			this->automovil->BackColor = System::Drawing::Color::Transparent;
			this->automovil->Location = System::Drawing::Point(238, 92);
			this->automovil->Name = L"automovil";
			this->automovil->Size = System::Drawing::Size(75, 31);
			this->automovil->TabIndex = 9;
			this->automovil->Text = L"Automovil";
			this->automovil->UseVisualStyleBackColor = false;
			this->automovil->Visible = false;
			this->automovil->Click += gcnew System::EventHandler(this, &Menu0::automovil_Click);
			// 
			// campero
			// 
			this->campero->Location = System::Drawing::Point(238, 129);
			this->campero->Name = L"campero";
			this->campero->Size = System::Drawing::Size(75, 30);
			this->campero->TabIndex = 10;
			this->campero->Text = L"Campero";
			this->campero->UseVisualStyleBackColor = true;
			this->campero->Visible = false;
			this->campero->Click += gcnew System::EventHandler(this, &Menu0::campero_Click);
			// 
			// pickUp
			// 
			this->pickUp->Location = System::Drawing::Point(238, 163);
			this->pickUp->Name = L"pickUp";
			this->pickUp->Size = System::Drawing::Size(75, 48);
			this->pickUp->TabIndex = 11;
			this->pickUp->Text = L"Pick up camioneta";
			this->pickUp->UseVisualStyleBackColor = true;
			this->pickUp->Visible = false;
			this->pickUp->Click += gcnew System::EventHandler(this, &Menu0::pickUp_Click);
			// 
			// microbus
			// 
			this->microbus->Location = System::Drawing::Point(238, 217);
			this->microbus->Name = L"microbus";
			this->microbus->Size = System::Drawing::Size(75, 31);
			this->microbus->TabIndex = 12;
			this->microbus->Text = L"Microbus";
			this->microbus->UseVisualStyleBackColor = true;
			this->microbus->Visible = false;
			this->microbus->Click += gcnew System::EventHandler(this, &Menu0::microbus_Click);
			// 
			// buseta
			// 
			this->buseta->Location = System::Drawing::Point(319, 92);
			this->buseta->Name = L"buseta";
			this->buseta->Size = System::Drawing::Size(90, 23);
			this->buseta->TabIndex = 13;
			this->buseta->Text = L"Buseta";
			this->buseta->UseVisualStyleBackColor = true;
			this->buseta->Visible = false;
			this->buseta->Click += gcnew System::EventHandler(this, &Menu0::buseta_Click);
			// 
			// busMetro
			// 
			this->busMetro->Location = System::Drawing::Point(318, 121);
			this->busMetro->Name = L"busMetro";
			this->busMetro->Size = System::Drawing::Size(91, 38);
			this->busMetro->TabIndex = 14;
			this->busMetro->Text = L"Bus Metropolitano";
			this->busMetro->UseVisualStyleBackColor = true;
			this->busMetro->Visible = false;
			this->busMetro->Click += gcnew System::EventHandler(this, &Menu0::busMetro_Click);
			// 
			// camionP
			// 
			this->camionP->Location = System::Drawing::Point(319, 163);
			this->camionP->Name = L"camionP";
			this->camionP->Size = System::Drawing::Size(90, 40);
			this->camionP->TabIndex = 15;
			this->camionP->Text = L"Camion Pequeño";
			this->camionP->UseVisualStyleBackColor = true;
			this->camionP->Visible = false;
			this->camionP->Click += gcnew System::EventHandler(this, &Menu0::camionP_Click);
			// 
			// camionG
			// 
			this->camionG->Location = System::Drawing::Point(319, 209);
			this->camionG->Name = L"camionG";
			this->camionG->Size = System::Drawing::Size(90, 39);
			this->camionG->TabIndex = 16;
			this->camionG->Text = L"Camion Grande";
			this->camionG->UseVisualStyleBackColor = true;
			this->camionG->Visible = false;
			this->camionG->Click += gcnew System::EventHandler(this, &Menu0::camionG_Click);
			// 
			// camion
			// 
			this->camion->Location = System::Drawing::Point(412, 92);
			this->camion->Name = L"camion";
			this->camion->Size = System::Drawing::Size(75, 23);
			this->camion->TabIndex = 17;
			this->camion->Text = L"Camion";
			this->camion->UseVisualStyleBackColor = true;
			this->camion->Visible = false;
			this->camion->Click += gcnew System::EventHandler(this, &Menu0::camion_Click);
			// 
			// tractoC
			// 
			this->tractoC->Location = System::Drawing::Point(412, 121);
			this->tractoC->Name = L"tractoC";
			this->tractoC->Size = System::Drawing::Size(75, 38);
			this->tractoC->TabIndex = 18;
			this->tractoC->Text = L"Tracto Camion";
			this->tractoC->UseVisualStyleBackColor = true;
			this->tractoC->Visible = false;
			this->tractoC->Click += gcnew System::EventHandler(this, &Menu0::tractoC_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Tomato;
			this->label3->Location = System::Drawing::Point(12, 263);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(48, 24);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Ejes";
			this->label3->Visible = false;
			// 
			// ejes2
			// 
			this->ejes2->BackColor = System::Drawing::Color::Transparent;
			this->ejes2->Location = System::Drawing::Point(66, 264);
			this->ejes2->Name = L"ejes2";
			this->ejes2->Size = System::Drawing::Size(83, 23);
			this->ejes2->TabIndex = 20;
			this->ejes2->Text = L"2 Ejes";
			this->ejes2->UseVisualStyleBackColor = false;
			this->ejes2->Visible = false;
			this->ejes2->Click += gcnew System::EventHandler(this, &Menu0::ejes2_Click);
			// 
			// ejes3
			// 
			this->ejes3->Location = System::Drawing::Point(155, 264);
			this->ejes3->Name = L"ejes3";
			this->ejes3->Size = System::Drawing::Size(84, 23);
			this->ejes3->TabIndex = 21;
			this->ejes3->Text = L"3 Ejes";
			this->ejes3->UseVisualStyleBackColor = true;
			this->ejes3->Visible = false;
			this->ejes3->Click += gcnew System::EventHandler(this, &Menu0::ejes3_Click);
			// 
			// ejes4
			// 
			this->ejes4->Location = System::Drawing::Point(245, 264);
			this->ejes4->Name = L"ejes4";
			this->ejes4->Size = System::Drawing::Size(80, 23);
			this->ejes4->TabIndex = 22;
			this->ejes4->Text = L"4 Ejes";
			this->ejes4->UseVisualStyleBackColor = true;
			this->ejes4->Visible = false;
			this->ejes4->Click += gcnew System::EventHandler(this, &Menu0::ejes4_Click);
			// 
			// ejes5
			// 
			this->ejes5->Location = System::Drawing::Point(331, 264);
			this->ejes5->Name = L"ejes5";
			this->ejes5->Size = System::Drawing::Size(75, 23);
			this->ejes5->TabIndex = 23;
			this->ejes5->Text = L"5 Ejes";
			this->ejes5->UseVisualStyleBackColor = true;
			this->ejes5->Visible = false;
			this->ejes5->Click += gcnew System::EventHandler(this, &Menu0::ejes5_Click);
			// 
			// ejes6
			// 
			this->ejes6->Location = System::Drawing::Point(412, 264);
			this->ejes6->Name = L"ejes6";
			this->ejes6->Size = System::Drawing::Size(75, 23);
			this->ejes6->TabIndex = 24;
			this->ejes6->Text = L"6 Ejes";
			this->ejes6->UseVisualStyleBackColor = true;
			this->ejes6->Visible = false;
			this->ejes6->Click += gcnew System::EventHandler(this, &Menu0::ejes6_Click);
			// 
			// factura
			// 
			this->factura->Location = System::Drawing::Point(175, 333);
			this->factura->Name = L"factura";
			this->factura->Size = System::Drawing::Size(214, 23);
			this->factura->TabIndex = 25;
			this->factura->Text = L"Facturar";
			this->factura->UseVisualStyleBackColor = true;
			this->factura->Visible = false;
			this->factura->Click += gcnew System::EventHandler(this, &Menu0::factura_Click);
			// 
			// cYt
			// 
			this->cYt->AutoSize = true;
			this->cYt->ForeColor = System::Drawing::Color::White;
			this->cYt->Location = System::Drawing::Point(76, 302);
			this->cYt->Name = L"cYt";
			this->cYt->Size = System::Drawing::Size(0, 15);
			this->cYt->TabIndex = 26;
			// 
			// cC
			// 
			this->cC->AutoSize = true;
			this->cC->ForeColor = System::Drawing::Color::White;
			this->cC->Location = System::Drawing::Point(250, 302);
			this->cC->Name = L"cC";
			this->cC->Size = System::Drawing::Size(0, 15);
			this->cC->TabIndex = 27;
			// 
			// ejE
			// 
			this->ejE->AutoSize = true;
			this->ejE->ForeColor = System::Drawing::Color::White;
			this->ejE->Location = System::Drawing::Point(424, 302);
			this->ejE->Name = L"ejE";
			this->ejE->Size = System::Drawing::Size(0, 15);
			this->ejE->TabIndex = 28;
			// 
			// tractoC2
			// 
			this->tractoC2->Location = System::Drawing::Point(412, 163);
			this->tractoC2->Name = L"tractoC2";
			this->tractoC2->Size = System::Drawing::Size(75, 40);
			this->tractoC2->TabIndex = 29;
			this->tractoC2->Text = L"Tracto Camion";
			this->tractoC2->UseVisualStyleBackColor = true;
			this->tractoC2->Visible = false;
			this->tractoC2->Click += gcnew System::EventHandler(this, &Menu0::tractoC2_Click);
			// 
			// tractoC3
			// 
			this->tractoC3->Location = System::Drawing::Point(412, 209);
			this->tractoC3->Name = L"tractoC3";
			this->tractoC3->Size = System::Drawing::Size(75, 39);
			this->tractoC3->TabIndex = 30;
			this->tractoC3->Text = L"Tracto Camion";
			this->tractoC3->UseVisualStyleBackColor = true;
			this->tractoC3->Visible = false;
			this->tractoC3->Click += gcnew System::EventHandler(this, &Menu0::tractoC3_Click);
			// 
			// Menu0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(527, 368);
			this->Controls->Add(this->tractoC3);
			this->Controls->Add(this->tractoC2);
			this->Controls->Add(this->ejE);
			this->Controls->Add(this->cC);
			this->Controls->Add(this->cYt);
			this->Controls->Add(this->factura);
			this->Controls->Add(this->ejes6);
			this->Controls->Add(this->ejes5);
			this->Controls->Add(this->ejes4);
			this->Controls->Add(this->ejes3);
			this->Controls->Add(this->ejes2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tractoC);
			this->Controls->Add(this->camion);
			this->Controls->Add(this->camionG);
			this->Controls->Add(this->camionP);
			this->Controls->Add(this->busMetro);
			this->Controls->Add(this->buseta);
			this->Controls->Add(this->microbus);
			this->Controls->Add(this->pickUp);
			this->Controls->Add(this->campero);
			this->Controls->Add(this->automovil);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cCinco);
			this->Controls->Add(this->cCuatro);
			this->Controls->Add(this->cTres);
			this->Controls->Add(this->cDos);
			this->Controls->Add(this->CUno);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Menu0";
			this->ShowIcon = false;
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void CUno_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cYt->Text = "Categoria 1 = $9200"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label2->Visible = true; //El nombre de la categoria se hace visible
		this->automovil->Visible = true; //El boton de la siguiente categoria se hace visible
		this->campero->Visible = true; //El boton de la siguiente categoria se hace visible
		this->pickUp->Visible = true; //El boton de la siguiente categoria se hace visible
		this->microbus->Visible = true; //El boton de la siguiente categoria se hace visible
		this->buseta->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->busMetro->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionP->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionG->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camion->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC3->Visible = false; //El boton de la siguiente categoria se hace invisible
		CUno->BackColor= Color::Gold; //Se cambia el color del boton
		cDos->BackColor = Color::Transparent; //Se cambia el color del boton
		cTres->BackColor = Color::Transparent; //Se cambia el color del boton
		cCuatro->BackColor = Color::Transparent; //Se cambia el color del boton
		cCinco->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void cDos_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cYt->Text = "Categoria 2 = $10000"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label2->Visible = true; //El nombre de la categoria se hace visible
		this->buseta->Visible = true; //El boton de la siguiente categoria se hace visible
		this->busMetro->Visible = true; //El boton de la siguiente categoria se hace visible
		this->camionP->Visible = true; //El boton de la siguiente categoria se hace visible
		this->camionG->Visible = true; //El boton de la siguiente categoria se hace visible
		this->camion->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->automovil->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->campero->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->pickUp->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->microbus->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC3->Visible = false; //El boton de la siguiente categoria se hace invisible
		CUno->BackColor = Color::Transparent; //Se cambia el color del boton
		cDos->BackColor = Color::Gold; //Se cambia el color del boton
		cTres->BackColor = Color::Transparent; //Se cambia el color del boton
		cCuatro->BackColor = Color::Transparent; //Se cambia el color del boton
		cCinco->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void cTres_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cYt->Text = "Categoria 3 = $21300"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label2->Visible = true; //El nombre de la categoria se hace visible
		this->camion->Visible = true; //El boton de la siguiente categoria se hace visible
		this->tractoC->Visible = true; //El boton de la siguiente categoria se hace visible
		this->buseta->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->busMetro->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionP->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionG->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->automovil->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->campero->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->pickUp->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->microbus->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC3->Visible = false; //El boton de la siguiente categoria se hace invisible
		CUno->BackColor = Color::Transparent; //Se cambia el color del boton
		cDos->BackColor = Color::Transparent; //Se cambia el color del boton
		cTres->BackColor = Color::Gold; //Se cambia el color del boton
		cCuatro->BackColor = Color::Transparent; //Se cambia el color del boton
		cCinco->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void cCuatro_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cYt->Text = "Categoria 4 = $27100"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label2->Visible = true; //El nombre de la categoria se hace visible
		this->tractoC2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->buseta->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->busMetro->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionP->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionG->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camion->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->automovil->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->campero->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->pickUp->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->microbus->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC3->Visible = false; //El boton de la siguiente categoria se hace invisible
		CUno->BackColor = Color::Transparent; //Se cambia el color del boton
		cDos->BackColor = Color::Transparent; //Se cambia el color del boton
		cTres->BackColor = Color::Transparent; //Se cambia el color del boton
		cCuatro->BackColor = Color::Gold; //Se cambia el color del boton
		cCinco->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void cCinco_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cYt->Text = "Categoria 5 = $30500"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label2->Visible = true; //El nombre de la categoria se hace visible
		this->tractoC3->Visible = true; //El boton de la siguiente categoria se hace visible
		this->buseta->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->busMetro->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionP->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camionG->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->camion->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->automovil->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->campero->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->pickUp->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->microbus->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->tractoC2->Visible = false; //El boton de la siguiente categoria se hace invisible
		CUno->BackColor = Color::Transparent; //Se cambia el color del boton
		cDos->BackColor = Color::Transparent; //Se cambia el color del boton
		cTres->BackColor = Color::Transparent; //Se cambia el color del boton
		cCuatro->BackColor = Color::Transparent; //Se cambia el color del boton
		cCinco->BackColor = Color::Gold; //Se cambia el color del boton
	}
	private: System::Void automovil_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Automovil"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::LimeGreen; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void campero_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Campero"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::LimeGreen; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void pickUp_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Pick Up Camioneta"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::LimeGreen; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void microbus_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Microbus"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::LimeGreen; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void buseta_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Buseta"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::LimeGreen; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void busMetro_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Bus Metropolitano"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::LimeGreen; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void camionP_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Camion Pequeño"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::LimeGreen; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void camionG_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Camion Grande"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes2->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::LimeGreen; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void camion_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Camion"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes3->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes4->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::LimeGreen; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void tractoC_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Tracto Camion"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes3->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes4->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::LimeGreen; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void tractoC2_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Tracto Camion"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes5->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes6->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::LimeGreen; //Se cambia el color del boton
		tractoC3->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void tractoC3_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->cC->Text = "Tracto Camion"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->label3->Visible = true; //El nombre de la categoria se hace visible
		this->ejes6->Visible = true; //El boton de la siguiente categoria se hace visible
		this->ejes3->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes4->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes2->Visible = false; //El boton de la siguiente categoria se hace invisible
		this->ejes5->Visible = false; //El boton de la siguiente categoria se hace invisible
		automovil->BackColor = Color::Transparent; //Se cambia el color del boton
		campero->BackColor = Color::Transparent; //Se cambia el color del boton
		pickUp->BackColor = Color::Transparent; //Se cambia el color del boton
		microbus->BackColor = Color::Transparent; //Se cambia el color del boton
		buseta->BackColor = Color::Transparent; //Se cambia el color del boton
		busMetro->BackColor = Color::Transparent; //Se cambia el color del boton
		camionP->BackColor = Color::Transparent; //Se cambia el color del boton
		camionG->BackColor = Color::Transparent; //Se cambia el color del boton
		camion->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC2->BackColor = Color::Transparent; //Se cambia el color del boton
		tractoC3->BackColor = Color::LimeGreen; //Se cambia el color del boton
	}
	private: System::Void ejes2_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->ejE->Text = "2 Ejes"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->factura->Visible = true; //El boton para realizar la factura se hace visible
		ejes2->BackColor = Color::Tomato; //Se cambia el color del boton
		ejes3->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes4->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes5->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes6->BackColor = Color::Transparent; //Se cambia el color del boton

	}
	private: System::Void ejes3_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->ejE->Text = "3 Ejes"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->factura->Visible = true; //El boton para realizar la factura se hace visible
		ejes2->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes3->BackColor = Color::Tomato; //Se cambia el color del boton
		ejes4->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes5->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes6->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void ejes4_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->ejE->Text = "4 Ejes"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->factura->Visible = true; //El boton para realizar la factura se hace visible
		ejes2->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes3->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes4->BackColor = Color::Tomato; //Se cambia el color del boton
		ejes5->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes6->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void ejes5_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->ejE->Text = "5 Ejes"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->factura->Visible = true; //El boton para realizar la factura se hace visible
		ejes2->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes3->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes4->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes5->BackColor = Color::Tomato; //Se cambia el color del boton
		ejes6->BackColor = Color::Transparent; //Se cambia el color del boton
	}
	private: System::Void ejes6_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		this->ejE->Text = "6 Ejes"; //Sale un aviso en una etiqueta diciendo que se selecciono este opcion
		this->factura->Visible = true; //El boton para realizar la factura se hace visible
		ejes2->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes3->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes4->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes5->BackColor = Color::Transparent; //Se cambia el color del boton
		ejes6->BackColor = Color::Tomato; //Se cambia el color del boton
	}
	private: System::Void factura_Click(System::Object^ sender, System::EventArgs^ e) { //Se crea el evento para el cuando se pulse el boton
		Peaje::Factura0^ factura0 = gcnew Peaje::Factura0();  //Se crea un objeto para poder ingresar a la tercera interfaz
		factura0->categoria->Text = this->cYt->Text;  // Se guardar el texto que esta en la etiqueta cyT para enviarlo a la otra interfaz, para colocarla en la etiqueta de categoria
		factura0->tipo->Text = this->cC->Text;  // Se guardar el texto que esta en la etiqueta cC para enviarlo a la otra interfaz, para colocarla en la etiqueta de tipo
		factura0->ejes->Text = this->ejE->Text;  // Se guardar el texto que esta en la etiqueta ejE para enviarlo a la otra interfaz, para colocarla en la etiqueta de ejes
		this->Visible = false;                       //Con esto se cierra la segunda interfaz para abrir solo la tercera
		factura0->ShowDialog();                         //Se llama al objeto creado anteriormente para poder mostrar la interfaz
		this->Visible = true;                       //Cuando se cierre la tercera interfaz, se volvera a abrir la segunda 
		
	}
};
}
