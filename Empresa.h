#pragma once
#include "Empleado.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Empresa {
private:
    int N;
    vector<Empleado> empleados;
    vector<bool> empleadosContagiados;
    vector<vector<bool>> matrizConexion;
    float porcentajeObjetivo;

public:
    Empresa(int cantidad) : N(cantidad) {
        matrizConexion = vector<vector<bool>>(N, vector<bool>(N, false));
        empleadosContagiados = vector<bool>(N, false);
    }

    void inicializarEmpleados(int n) {
        for (int i = 0; i < n; i++) {
            Empleado nuevoEmpleado(false); // Crear un empleado no contagiado
            nuevoEmpleado.setID(i + 1);
            empleados.push_back(nuevoEmpleado);
        }
    }

    void generarMatrizConexion() {
        srand(time(0));
        if (N <= 1) {
            cout << "NO HAY SUFICIENTES EMPLEADOS PARA CONECTAR" << endl;
            return;
        }
        for (int i = 0; i < matrizConexion.size(); i++) {
            int conexiones = rand() % 5 + 1;
            unordered_set<int> conectados;

            while (conectados.size() < conexiones) {
                int empleado = rand() % N;

                if (empleado != i && !conectados.count(empleado)) {
                    matrizConexion[i][empleado] = true;
                    matrizConexion[empleado][i] = true; // Asegura la simetría
                    conectados.insert(empleado);
                }
            }
        }
    }

    void simularContagio(int inicio) {
        if (inicio < 0 || inicio >= N) {
            cout << "Empleado inicial fuera de rango" << endl;
            return;
        }
        queue<int> q;
        vector<bool> visitado(N, false);

        visitado[inicio] = true;
        empleadosContagiados[inicio] = true;
        empleados[inicio].setContagiado(true);
        q.push(inicio);

        while (!q.empty()) {
            int actual = q.front();
            q.pop();
            for (int i = 0; i < N; i++) {
                if (matrizConexion[actual][i] && !visitado[i]) {
                    visitado[i] = true;
                    empleadosContagiados[i] = true;
                    empleados[i].setContagiado(true); 
                    q.push(i);
                }
            }
        }
    }

    void graficarMatrizConexion() {
        cout << "Matriz de Conexion:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << matrizConexion[i][j] << " "; // Imprimir 0 o 1
            }
            cout << endl; // Nueva línea por fila
        }
    }
};