#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Rectangulo
{
private:
	double base;
	double altura;
	
public:
	Rectangulo();
	Rectangulo(double, double);
	~Rectangulo();
	double getBase();
	double getAltura();
	double Perimetro();
	double Area();
	void Dibujar();
};

