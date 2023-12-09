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
	perimetro = 2 * (double( base) + double (altura));
	return perimetro;
}

double Rectangulo::Area()
{
	double area = 0;
	area = double(base) *double (altura);
	return area;
}

void Rectangulo::Dibujar()
{
	string line;
	ifstream MyFile("Rectangulo.txt");
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

void Rectangulo::modify()
{
    char change_from = '?';
    double roundedValue = round(base);
    char change_to=char(roundedValue);

    cout << "Change from: " << change_from << '\n';
    cout << "Change   to: " << change_to << '\n';

    // SOURCE FILE
    ifstream file_from;
    file_from.open("Rectangulo.txt");

    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }

    // DESTINATION FILE
    ofstream file_to;
    file_to.open("Rectangulo2.txt");

    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }

    // PROCESS CHARACTER AT A TIME
    char ch_read;
    while (file_from.get(ch_read))
    {
        if (ch_read == change_from)
        {
            file_to << change_to;
        }
        else
        {
            file_to << ch_read;
        }
    }
    Dibujar2();
    cout << "Done\n";
}

void Rectangulo::Dibujar2()
{
	string line;
	ifstream MyFile("Rectangulo2.txt");
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
