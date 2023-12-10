#include "Circulo.h"
Circulo::Circulo(){}
Circulo::Circulo(string r) {
	this->r = r;
}
Circulo::~Circulo(){}
string Circulo::Area() {
	int area;
	string sArea;
	double pi = 3.14;
	area = (pi * (stoi(r) * stoi(r)));
	sArea = to_string(area);
	return sArea;
}
string Circulo::Perimetro() {
	int perimetro;
	string sPeri;
	double pi = 3.14;
	perimetro = (2 * pi * stoi(r));
	sPeri = perimetro;
	return sPeri;
}
void Dibujar(string nombre) {
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