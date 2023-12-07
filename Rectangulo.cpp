#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::Rectangulo(double base, double altura)
{
	this->base = base;
	this->altura = altura;
}

Rectangulo::~Rectangulo()
{
}

double Rectangulo::getBase()
{
	return base;
}

double Rectangulo::getAltura()
{
	return altura;
}

double Rectangulo::Perimetro()
{
	double perimetro = 0;
	perimetro = 2 * (base + altura);
	return perimetro;
}

double Rectangulo::Area()
{
	double area = 0;
	area = base * altura;
	return area;
}

void Rectangulo::Dibujar()
{
	string line;
	ifstream MyFile("Rectangulo.txt");
	while (getline(MyFile, line)) {
		cout << line << '\n';
	}
	MyFile.close();
}