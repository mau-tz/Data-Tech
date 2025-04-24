#pragma once
#include <iostream>

class Empleado {
private:
	bool contagiado;
public:
	Empleado(bool contagiado) : contagiado(contagiado) {}
	bool getContagiado() const{ return contagiado; }
	void setContagiado(bool contagiado) { this->contagiado = contagiado; }
};