#pragma once
#include "Empleado.h"
#include <vector>
using namespace std;

class Empresa {
private:
	int N;
	vector<Empleado> empleados;
	vector<vector<bool>> matrizConexion;
	float porcentajeObjetivo;
public:
	Empresa(int cantidad, float objetivo) : N(cantidad), porcentajeObjetivo(objetivo){}
	void generarConexion(int id1, int id2) {
		// Genera una conexión entre dos empleados
	}
	void simularContagio(int id) {
		// Simula el contagio de un empleado
	}
	float calcularPorcentajeContagiados() {
		// Calcula el porcentaje de empleados contagiados
	}
};