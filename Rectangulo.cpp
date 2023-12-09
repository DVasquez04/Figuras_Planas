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
	std::fstream yourfile;
	std::string line, someString;

	yourfile.open("Rectangulo.txt", ios::in | ios::app);  //The path to your file goes here

	if (yourfile.is_open()) {  //You don't have to ask if the file is open but it's more secure
		while (getline(yourfile, line)) {
			if (line.find(someString) != string::npos) { //the find() documentation might be helpful if you don't understand
				if (someString == "&") {
					yourfile << altura;
					cout << "Hace algo esta mierda??" << endl;
				}
				else if (someString == "?") {
					yourfile << base;
				}
				else if (someString == "%") {
					double result = base + altura;
					yourfile << result;
				}
				else if (someString == "@") {
					double result = 2 * (base + altura);
					yourfile << result;
				}
				else if (someString == "#") {
					double result = base * altura;
					yourfile << result;
				}
				else {
					cout << "no entra" << endl;
				}
			} //end if
		} //end while
		Dibujar();
	} //end ifz
	else cerr << "Your file couldn't be opened";

	yourfile.close();
}
