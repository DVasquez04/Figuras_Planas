#pragma once
class Cometa{
	int a, b, d, D;
public:
	Cometa();
	Cometa(int, int, int, int);
	~Cometa();
	double Area();
	double Perimetro();
	void Dibujar();
};

