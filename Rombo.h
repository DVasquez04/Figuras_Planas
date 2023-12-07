#pragma once
class Rombo
{
private:
	double diagonal;
	double base;
	double altura;
	double area;
public:
	Rombo();
	Rombo(double, double);
	~Rombo();
	double getBase();
	double getAltura();
	double getDiagonal();
	double perimetro();
	double area();
	void Dibujar();
};

