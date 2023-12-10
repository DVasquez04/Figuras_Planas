#include "Triangulo.h"
Triangulo::Triangulo(){}
Triangulo::Triangulo(string a, string b, string c, string h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
}
Triangulo::~Triangulo() {}
string Triangulo::Area() {
	int area;
	string sArea;
	area = (stoi(b) * stoi(h)) / 2;
	sArea = to_string(area);
	return sArea;
}
string Triangulo::Perimetro() {
	int perimetro;
	string sPeri;
	perimetro = (stoi(a) + stoi(b )+ stoi(c));
	sPeri = to_string(perimetro);
	return sPeri;
}
void Triangulo::Dibujar(string nombre) {
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