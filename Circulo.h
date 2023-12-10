#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
class Circulo{
	string r;
public:
	Circulo();
	Circulo(string);
	~Circulo();
	string Area();
	string Perimetro();
	void Dibujar(string);
	string elevado();
	void Dibujar2();
	void modify();
	void modify2(char, string);
};

