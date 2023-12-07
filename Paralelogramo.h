#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Paralelogramo
{
private:
	double base;
	double altura;
	double diagonal;
	
public:
	Paralelogramo();
	Paralelogramo(double, double, double);
	~Paralelogramo();
	double getBase();
	double getAltura();
	double getDiagonal();
	double Perimetro();
	double Area();
	void Dibujar();
};

