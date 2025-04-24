#pragma once
#include <iostream>

class Empleado {
private:
	int id;
	bool contagiado;
public:
	Empleado(int id, bool contagiado) : id(id), contagiado(contagiado) {}
	int getId() const{ return id; }
	bool getContagiado() const{ return contagiado; }
	void setContagiado(bool contagiado) { this->contagiado = contagiado; }
	void setId(int id) { this->id = id; }
};