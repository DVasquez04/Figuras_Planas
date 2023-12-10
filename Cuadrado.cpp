#include "Cuadrado.h"
Cuadrado::Cuadrado() {}
Cuadrado::Cuadrado(string a) {
	this->a = a;
}
Cuadrado::~Cuadrado() {}
string Cuadrado::Area() {
	int area;
	string sArea;
	area = (std::stoi(a) * std::stoi(a));
	sArea = to_string(area);
	return sArea;
}
string Cuadrado::Perimetro() {
	int perimetro;
	string sPeri;
	perimetro = (4 * stoi(a));
	sPeri = to_string(perimetro);
	return sPeri;
}
void Cuadrado::Dibujar(string nombre) {
	string line;
	ifstream MyFile(nombre);
	if (MyFile.is_open()) {
		while (getline(MyFile, line)) {
			cout << line << '\n';
		}
		MyFile.close();
	}
	else {
		cout << "Unable to open file\n";
	}
}