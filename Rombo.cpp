#include "Rombo.h"

Rombo::Rombo()
{
}

Rombo::Rombo(double base, double altura)
{
	this->base = base;
	this->altura = altura;
}

Rombo::~Rombo()
{
}

double Rombo::getBase()
{
	return base;
}

double Rombo::getAltura()
{
	return altura;
}

double Rombo::getDiagonal()
{
	return diagonal;
}

double Rombo::Perimetro()
{
	double perimetro = 0;
	perimetro = 4 * diagonal;
	return perimetro;
}

double Rombo::Area()
{
	double area = 0;
	area = (base * altura) / 2;
	return area;
}

void Rombo::Dibujar()
{
}
