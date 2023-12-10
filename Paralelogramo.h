#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Paralelogramo
{
private:
	string base;
	string altura;
	string diagonal;

public:
	Paralelogramo();
	Paralelogramo(string, string, string);
	~Paralelogramo();
	string getBase();
	string getAltura();
	string getDiagonal();
	string Perimetro();
	string Area();
	void Dibujar();
	void Dibujar2();
	void modify();
	void modify2(char, string);
	string suma();
};

