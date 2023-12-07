#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Cuadrado{
	int a;
public:
	Cuadrado();
	Cuadrado(int);
	~Cuadrado();
	int Area();
	int Perimetro();
	void Dibujar();
};

