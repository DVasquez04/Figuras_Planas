#pragma once
class Rectangulo
{
	private:
		double base;
		double altura;
		double perimetro;
		double area;
	public:
		Rectangulo();
		Rectangulo(double, double);
		~Rectangulo();
		double getBase();
		double getAltura();
		double perimetro();
		double area();
		void Dibujar();
};

