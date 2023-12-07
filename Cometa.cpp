#include "Cometa.h"
Cometa::Cometa(){}
Cometa::Cometa(int a, int b, int d, int D) {
	this->a = a;
	this->b = b;
	this->d = d;
	this->D = D;
}
Cometa::~Cometa() {}
double Cometa::Area() {
	double area;
	area = (d * D) / 2;
	return area;
}
double Cometa::Perimetro() {
	double perimetro;
	perimetro = (2 * (b + a));
	return perimetro;
}
void Cometa::Dibujar() {

}