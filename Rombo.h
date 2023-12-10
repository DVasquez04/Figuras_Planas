#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Rombo
{
private:
	string diagonal;
	string base;
	string altura;
	string area;
	
public:
	Rombo();
	Rombo(string,string,string);
	~Rombo();
	string getBase();
	string getAltura();
	string getDiagonal();
	string Perimetro();
	string Area();
	string mult();
	void Dibujar();
	void modify();
	void modify2(char, string);
};

