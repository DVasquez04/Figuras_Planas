#pragma once
class Trapecio
{
private:
	double base;
	double altura;
	double perimetro;
	double area;
public:
	Trapecio();
	Trapecio(double, double);
	~Trapecio();
	double getBase();
	double getAltura();
	double perimetro();
	double area();
	void Dibujar();
};


