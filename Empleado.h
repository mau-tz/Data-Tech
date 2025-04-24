#pragma once
#include <iostream>

class Empleado {
private:
	bool contagiado;
	int id;
public:
	Empleado(bool contagiado) : contagiado(contagiado) {}
	bool getContagiado() const{ return contagiado; }
	void setContagiado(bool contagiado) { this->contagiado = contagiado; }
	int getID() const { return id; }
	void setID(int id) { this->id = id; }
};