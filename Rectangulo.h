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
	int Perimetro();
	int Area();
	string suma();
	void Dibujar(string);
	void modify();
	void modify2(char, string);
	
};

