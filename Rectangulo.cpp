#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::Rectangulo(double base, double altura)
{
	this->base = base;
	this->altura = altura;
}

Rectangulo::~Rectangulo()
{
}

double Rectangulo::getBase()
{
	return base;
}

double Rectangulo::getAltura()
{
	return altura;
}

double Rectangulo::Perimetro()
{
	double perimetro = 0;
	perimetro = 2 * (base + altura);
	return perimetro;
}

double Rectangulo::Area()
{
	double area = 0;
	area = base * altura;
	return area;
}

void Rectangulo::Dibujar()
{
	string line;
	ifstream MyFile("Rectangulo.txt");
	vector<char> bytes;
	char byte = 0;
    while (MyFile.get(byte)) {
        bytes.push_back(byte);
    }

    // Find indices to replace
    vector<size_t> replaceIndices;
    for (size_t i = 0; i < bytes.size(); ++i) {
        if (bytes[i] == '&') {
            replaceIndices.push_back(i);
        }
        else if (bytes[i] == '?') {
            replaceIndices.push_back(i);
        }
        else if (bytes[i] == '%') {
            replaceIndices.push_back(i);
        }
        else if (bytes[i] == '@') {
            replaceIndices.push_back(i);
        }
        else if (bytes[i] == '#') {
            replaceIndices.push_back(i);
        }
    }

    // Replace values at the found indices
    for (auto index : replaceIndices) {
        if (bytes[index] == '&') {
            bytes[index] = (char)altura;
        }
        else if (bytes[index] == '?') {
            bytes[index] = (char)base;
        }
        else if (bytes[index] == '%') {
            double suma = base + altura;
            bytes[index] = (char)suma;
        }
        else if (bytes[index] == '@') {
            double result = 2 * (base + altura);
            bytes[index] = (char)result;
        }
        else if (bytes[index] == '#') {
            double result = base * altura;
            bytes[index] = (char)result;
        }
    }

    // Print the modified vector
    for (auto i : bytes) {
        cout << i;
    }
    cout << endl;

    MyFile.close();
}