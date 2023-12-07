#pragma once
class Triangulo{
	int a, b, c, h;
public:
	Triangulo();
	Triangulo(int, int, int, int);
	~Triangulo();
	double Area();
	int Perimetro();
	void Dibujar();

};

