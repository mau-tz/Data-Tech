#pragma once

namespace Datatech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Matriz
	/// </summary>
	public ref class Matriz : public System::Windows::Forms::Form
	{
	public:
		Matriz(void)
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
		~Matriz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 96);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(843, 497);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(22, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cantidad de trabajadores: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(22, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cantidad de contagiados: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(779, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Dia # ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(687, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Siguiente dia";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Matriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 552);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"Matriz";
			this->Text = L"Matriz";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
