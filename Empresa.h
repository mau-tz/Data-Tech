#pragma once
#include "Empleado.h"
#include <vector>
#include <unordered_set>
#include <iostream>
#include <cstdlib>
#include <unordered_set>    
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

    void setPorcentajeObjetivo(float porcentaje) {
        porcentajeObjetivo = porcentaje;
    }

    void inicializarEmpleados(int n) {
        for (int i = 0; i < n; i++) {
            Empleado nuevoEmpleado(false);
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

        vector<int> conexionesPorEmpleado(N, 0);

        for (int i = 0; i < N; i++) {
            int conexionesDeseadas = rand() % 5 + 1;
            unordered_set<int> conectados;

            while (conectados.size() < conexionesDeseadas && conexionesPorEmpleado[i] < 5) {
                int empleado = rand() % N;


                if (empleado != i && !matrizConexion[i][empleado] && conexionesPorEmpleado[empleado] < 5) {
                    matrizConexion[i][empleado] = true;
                    matrizConexion[empleado][i] = true; 
                    conectados.insert(empleado);

                    conexionesPorEmpleado[i]++;
                    conexionesPorEmpleado[empleado]++;
                }

                // Si todos los empleados alcanzaron el límite de 5 conexiones, terminamos
                if (conexionesPorEmpleado[i] >= 5) {
                    break;
                }
            }
        }
    }

    void simularContagioPorDias(int inicio) {
        if (inicio < 0 || inicio >= N) {
            cout << "Empleado inicial fuera de rango" << endl;
            return;
        }

        vector<bool> visitado(N, false);
        vector<int> actuales; // Empleados que se contagian hoy
        actuales.push_back(inicio);
        visitado[inicio] = true;
        empleadosContagiados[inicio] = true;
        empleados[inicio].setContagiado(true);

        int dia = 0;
        int totalContagiados = 1;
        bool mostrado = false;
        cout << "Dia " << dia << ": " << empleados[inicio].getID() << endl;

        while (!actuales.empty()) {
            vector<int> siguientes; // Empleados que se contagiaran el siguiente dia
            dia++;
            for (int actual : actuales) {
                for (int j = 0; j < N; j++) {
                    if (matrizConexion[actual][j] && !visitado[j]) {
                        visitado[j] = true;
                        empleadosContagiados[j] = true;
                        empleados[j].setContagiado(true);
                        siguientes.push_back(j);
                        totalContagiados++;
                    }
                }
            }
            if (!siguientes.empty()) {
                cout << "Dia " << dia << ": ";
                for (int idx : siguientes)
                    cout << empleados[idx].getID() << " ";
                cout << endl;
            }
            float porcentajeActual = (totalContagiados * 100.0f) / N;
            if (!mostrado && porcentajeActual >= porcentajeObjetivo) {
                cout << "El porcentaje de contagiados supera " << porcentajeObjetivo << "% el dia " << dia << " (" << totalContagiados << " contagiados)" << endl;
                mostrado = true;
            }
            actuales = siguientes;
        }
        if (!mostrado) {
            cout << "El porcentaje objetivo de contagios NO se alcanzo." << endl;
        }
    }

    void graficarMatrizConexion() {
        cout << "Matriz de Conexion:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << matrizConexion[i][j]; // Imprimir 0 o 1
            }
            cout << endl;
        }
    }
};