#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Cuadrado{
	string a;
public:
	Cuadrado();
	Cuadrado(string);
	~Cuadrado();
	string Area();
	string Perimetro();
	void Dibujar(string);
};

