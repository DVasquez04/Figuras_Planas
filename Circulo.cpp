#include "Circulo.h"
Circulo::Circulo(){}
Circulo::Circulo(int r) {
	this->r = r;
}
Circulo::~Circulo(){}
double Circulo::Area() {
	double area;
	double pi = 3.14;
	area = (pi * (r * r));
	return area;
}
double Circulo::Perimetro() {
	double perimetro;
	double pi = 3.14;
	perimetro = (2 * pi * r);
	return perimetro;
}
void Dibujar() {

}