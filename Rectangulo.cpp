#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::Rectangulo(string base, string altura)
{
	this->base = base;
	this->altura = altura;
}

Rectangulo::~Rectangulo()
{
}

string Rectangulo::getBase()
{
	return base;
}

string Rectangulo::getAltura()
{
	return altura;
}

double Rectangulo::Perimetro()
{
	double perimetro = 0;
	//perimetro = 2 * (double( base) + double (altura));
	return perimetro;
}

double Rectangulo::Area()
{
	double area = 0;
	//area = double(base) *double (altura);
	return area;
}

void Rectangulo::Dibujar(string nombre)
{
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

void Rectangulo::modify()
{
    char change_from = '?';
   // double roundedValue = round(base);
   

    cout << "Change from: " << change_from << '\n';
    cout << "Change   to: " << base << '\n';

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
            file_to << base;
        }
        else
        {
            file_to << ch_read;
        }
    }
   
    cout << "Done\n";
}


