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
        cout << "Ingrese el número de empleados (entre 60 y 120): ";
        cin >> n;
        if (n < 60 || n > 120) {
            cout << "Por favor, ingrese un valor válido entre 60 y 120." << endl;
        }
    } while (n < 60 || n > 120);

    // Paso 2: Crear una empresa con un porcentaje objetivo arbitrario (por ejemplo, 50%)
    float porcentajeObjetivo = 50.0; // Se puede ajustar según sea necesario
    Empresa empresa(n, porcentajeObjetivo);

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

    // Paso 7: Simular el contagio
    empresa.simularContagio(empleadoInicial - 1); // Convertir a índice basado en 0

    // Paso 8: Graficar el estado de contagio
    cout << endl;
    empresa.graficarEstadoContagio();

    // Paso 9: Calcular y mostrar el porcentaje de empleados contagiados
    int porcentajeContagiados = empresa.calcularPorcentajeContagiados();
    cout << "Porcentaje de empleados contagiados: " << porcentajeContagiados << "%" << endl;

}