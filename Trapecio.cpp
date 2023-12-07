#include "Trapecio.h"

Trapecio::Trapecio()
{
}

Trapecio::Trapecio(double base, double altura)
{
	this->base = base;
	this->altura = altura;
}

Trapecio::~Trapecio()
{
}

double Trapecio::getBase()
{
	return base;
}

double Trapecio::getAltura()
{
	return altura;
}

double Trapecio::Perimetro()
{
	double perimetro = 0;
	perimetro = 2 * (base + altura);
	return perimetro;
}

double Trapecio::Area()
{
	double area = 0;
	area = base * altura;
	return area;
}

void Trapecio::Dibujar()
{
}
