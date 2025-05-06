
#include <iostream>
#include "Empresa.h"
using namespace std;



int main() {

	cout << "DATA TECH" << endl;
    int n;
    do {
        cout << "Ingrese el numero de empleados (entre 60 y 120): ";
        cin >> n;
        if (n < 60 || n > 120) {
            cout << "Por favor, ingrese un valor valido entre 60 y 120." << endl;
        }
    } while (n < 60 || n > 120);

    Empresa empresa(n);

    empresa.inicializarEmpleados(n);

    empresa.generarMatrizConexion();

    cout << endl;
    empresa.graficarMatrizConexion();

    int empleadoInicial;
    do {
        cout << "Seleccione el ID del empleado que inicia el contagio (1 a " << n << "): ";
        cin >> empleadoInicial;
        if (empleadoInicial < 1 || empleadoInicial > n) {
            cout << "Por favor, ingrese un ID válido entre 1 y " << n << "." << endl;
        }
    } while (empleadoInicial < 1 || empleadoInicial > n);

    float porcentaje;
    do {
        cout << "Ingrese el porcentaje objetivo de contagio (ejemplo: 50 para 50%): ";
        cin >> porcentaje;
        if (porcentaje <= 0 || porcentaje > 100) {
            cout << "Por favor, ingrese un porcentaje valido (mayor que 0 y menor o igual a 100)." << endl;
        }
    } while (porcentaje <= 0 || porcentaje > 100);

    // Lo estableces en el objeto empresa
    empresa.setPorcentajeObjetivo(porcentaje);

    empresa.simularContagioPorDias(empleadoInicial - 1);

    return 0;
}