#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Triangulo{
	string a, b, c, h;
public:
	Triangulo();
	Triangulo(string, string, string, string);
	~Triangulo();
	string Area();
	string Perimetro();
	void Dibujar(string);

};

