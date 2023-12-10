#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Cometa{
	string a, b, d, D;
public:
	Cometa();
	Cometa(string, string, string, string);
	~Cometa();
	string Area();
	string Perimetro();
	void Dibujar();
	string mult();
	string suma();
	void modify();
	void modify2(char, string);
};

