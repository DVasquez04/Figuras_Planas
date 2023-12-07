#pragma once
class Trapecio
{
private:
	double base;
	double altura;

public:
	Trapecio();
	Trapecio(double, double);
	~Trapecio();
	double getBase();
	double getAltura();
	double Perimetro();
	double Area();
	void Dibujar();
};


