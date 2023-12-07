#pragma once
class Paralelogramo
{
private:
	double base;
	double altura;
	double diagonal;
	double perimetro;
	double area;
public:
	Paralelogramo();
	Paralelogramo(double, double, double);
	~Paralelogramo();
	double getBase();
	double getAltura();
	double getDiagonal();
	double perimetro();
	double area();
	void Dibujar();
};

