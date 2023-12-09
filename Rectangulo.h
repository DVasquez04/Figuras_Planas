#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Rectangulo
{
private:
	char base;
	char altura;
	
public:
	Rectangulo();
	Rectangulo(double, double);
	~Rectangulo();
	double getBase();
	double getAltura();
	double Perimetro();
	double Area();
	void Dibujar();
	void modify();
	void Dibujar2();
};

