#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Rectangulo
{
private:
	string base;
	string altura;
	
public:
	Rectangulo();
	Rectangulo(string, string);
	~Rectangulo();
	string getBase();
	string getAltura();
	double Perimetro();
	double Area();
	void Dibujar(string);
	void modify();
	
};

