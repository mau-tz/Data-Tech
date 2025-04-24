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
	void inicializarEmpleados(int n) {
		// Inicializa los empleados
	}
	void generarMatrizConexion() {
		// Genera una conexión entre dos empleados
	}
	int simularContagio(int inicio, float procentaje) {
		// Simula el contagio de un empleado
	}
	int calcularDiasParaPorcentaje(float y) {
		// Calcula el porcentaje de empleados contagiados
	}
};