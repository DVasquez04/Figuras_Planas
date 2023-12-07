#include "Triangulo.h"
Triangulo::Triangulo(){}
Triangulo::Triangulo(int a, int b, int c, int h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
}
Triangulo::~Triangulo() {}
double Triangulo::Area() {
	double area;
	area = (b * h) / 2;
	return area;
}
int Triangulo::Perimetro() {
	int perimetro;
	perimetro = (a + b + c);
	return perimetro;
}
void Triangulo::Dibujar() {

}