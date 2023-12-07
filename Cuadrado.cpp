#include "Cuadrado.h"
Cuadrado::Cuadrado() {}
Cuadrado::Cuadrado(int a) {
	this->a = a;
}
Cuadrado::~Cuadrado() {}
int Cuadrado::Area() {
	int area;
	area = (a * a);
	return area;
}
int Cuadrado::Perimetro() {
	int perimetro;
	perimetro = (4 * a);
	return perimetro;
}
void Cuadrado::Dibujar() {

}