#include "Cometa.h"
Cometa::Cometa(){}
Cometa::Cometa(string a, string b, string d, string D) {
	this->a = a;
	this->b = b;
	this->d = d;
	this->D = D;
}
Cometa::~Cometa() {}
string Cometa::Area() {
	double area;
	string sArea;
	area = (stoi(d) * stoi(D)) / 2;
	sArea = to_string(area);
	return sArea;
}
string Cometa::Perimetro() {
	double perimetro;
	string sPeri;
	perimetro = (2 * (stoi(b) + stoi(a)));
	sPeri = perimetro;
	return sPeri;
}
void Cometa::Dibujar(string nombre) {
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