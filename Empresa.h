#pragma once
#include "Empleado.h"
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Empresa {
private:
	int N;
	vector<Empleado> empleados;
	vector<bool> empleadosContagiados;
	vector<vector<bool>> matrizConexion;
	float porcentajeObjetivo;
public:
	Empresa(int cantidad, float objetivo) : N(cantidad), porcentajeObjetivo(objetivo){
		matrizConexion = vector<vector<bool>>(N, vector<bool>(N, false));
		empleadosContagiados = vector<bool>(N, false);
	}
	void inicializarEmpleados(int n) {
		for (int i = 0; i < n; i++) {
			Empleado nuevoEmpleado= new Empleado(false);
			nuevoEmpleado.setID(i+1);
			empleados.push_back(nuevoEmpleado);
		}
	}

	void generarMatrizConexion(vector<vector<bool>>& matriz) {
		// Genera la matriz de conexiones entre empleados
		srand(time(0));
		if (N <= 1) {
			cout << "NO HAY SUFICIENTES EMPLEADOS PARA CONECTAR" << endl;
			return;
		}
		for (int i = 0; i < matriz.size(); i++){
			int conexiones = rand() % 5 + 1;
			unordered_set<int>conectados;

			while (conectados.size() < conexiones) {
				int empleado = rand() % N;
				
				if (empleado != i && !conectados.count(empleado)) {
					matriz[i][empleado] = true;
					conectados.insert(empleado);
				}
			}
		}
	}

	void simularContagio(int inicio, float procentaje) {
		if (inicio < 0 || inicio >= N) {
			cout << "Empleado inicial fuera de rango" << endl;
			return;
		}
		queue<int> q;
		vector<bool> visitado(N, false);

		visitado[inicio] = true;
		empleadosContagiados[inicio] = true;
		q.push(inicio);

		while (!q.empty()) {
			int actual = q.front();
			q.pop();
			for (int i = 0; i < N; i++){
				if (matrizConexion[actual][i] && !visitado[i]) {
					visitado[i] = true;
					empleadosContagiados[i] = true;
					q.push(i);
				}
			}
		}
		
	}
	int calcularPorcentajeContagiados() {
		int contagiados = 0;
		for (int i = 0; i < N; i++) {
			if (empleados[i].getContagiado()) {
				contagiados++;
			}
		}
		return (contagiados * 100) / N;
	}
};