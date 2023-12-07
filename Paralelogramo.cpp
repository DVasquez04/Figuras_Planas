#include "Paralelogramo.h"


Paralelogramo::Paralelogramo()
{
}

Paralelogramo::Paralelogramo(double base, double altura, double diagonal)
{
	this->base = base;
	this->altura = altura;
	this->diagonal = diagonal;
}

Paralelogramo::~Paralelogramo()
{
}

double Paralelogramo::getBase()
{
	return base;
}

double Paralelogramo::getAltura()
{
	return altura;
}

double Paralelogramo::getDiagonal()
{
	return diagonal;
}

double Paralelogramo::Perimetro()
{
	double perimetro = 0;
	perimetro = 2 * (diagonal + base);
	return perimetro;
}

double Paralelogramo::Area()
{
	double area = 0;
	area = base * altura;
	return area;
}

void Paralelogramo::Dibujar()
{
	string line;
	ifstream MyFile("Paralelogramo.txt");
	while (getline(MyFile, line)) {
		cout << line << '\n';
	}
	MyFile.close();
}