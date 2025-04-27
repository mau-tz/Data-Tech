#include "MyForm.h"
#include "Empresa.h"
#include <iostream>
using namespace std;
using namespace System;
using namespace Windows::Forms;

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew Datatech::MyForm);

    int n;
    do {
        cout << "Ingrese el numero de empleados (entre 60 y 120): ";
        cin >> n;
        if (n < 60 || n > 120) {
            cout << "Por favor, ingrese un valor valido entre 60 y 120." << endl;
        }
    } while (n < 60 || n > 120);

    Empresa empresa(n);

    // Paso 3: Inicializar los empleados
    empresa.inicializarEmpleados(n);

    // Paso 4: Generar la matriz de conexiones entre empleados
    empresa.generarMatrizConexion();

    // Paso 5: Graficar la matriz de conexiones
    cout << endl;
    empresa.graficarMatrizConexion();

    // Paso 6: Permitir al usuario elegir qué empleado se contagia primero
    int empleadoInicial;
    do {
        cout << "Seleccione el ID del empleado que inicia el contagio (1 a " << n << "): ";
        cin >> empleadoInicial;
        if (empleadoInicial < 1 || empleadoInicial > n) {
            cout << "Por favor, ingrese un ID válido entre 1 y " << n << "." << endl;
        }
    } while (empleadoInicial < 1 || empleadoInicial > n);

    empresa.simularContagio(empleadoInicial - 1);

}