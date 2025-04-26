#pragma once

namespace Datatech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Salida
	/// </summary>
	public ref class Salida : public System::Windows::Forms::Form
	{
	public:
		Salida(void)
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
		~Salida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->label1->Location = System::Drawing::Point(201, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(470, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resultados finales";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(583, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Trabajadores:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(181, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(501, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Porcentaje de trabajadores contagiados:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(98, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad de dias:";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(448, 280);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 243);
			this->panel1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45));
			this->label5->Location = System::Drawing::Point(61, 366);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(338, 69);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Matriz final:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 502);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Salida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 552);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Salida";
			this->Text = L"Salida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
