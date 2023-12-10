#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Trapecio
{
private:
	string base;
	string altura;
	string base2;
	string d1;
	string d2;

public:
	Trapecio();
	Trapecio(string,string,string,string,string);
	~Trapecio();
	string Perimetro();
	string Area();
	void Dibujar();
	string suma();
	void Dibujar2();
	void modify();
	void modify2(char, string);
};


