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
	perimetro = 2 * (stod( base) + stod(altura));
	return perimetro;
}

double Rectangulo::Area()
{
	double area = 0;
	area = stod(base) * stod(altura);
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
    cout << "Change from: " << change_from << '\n';
    cout << "Change   to: " << base << '\n';
    bool modified = false;
   
    modify2('?', base);
    
    
}
void Rectangulo::modify2(char change_from, string base)
{
    string temp = base;
    ifstream file_from;
    file_from.open("Rectangulo.txt");
    double p = Perimetro();
    string perimetro = to_string(p);
    double a = Area();
    string area = to_string(a);
    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }
    ofstream file_to;
    file_to.open("Rectangulo2.txt");
    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }
  
    char ch_read;
    bool primerCaracterEncontrado = false;
    bool cont = false;
   
    while (file_from.get(ch_read)) {
        
            if ((ch_read == change_from||ch_read=='&'||ch_read=='%'||ch_read=='@'||ch_read=='#') && !primerCaracterEncontrado) {
                if (ch_read=='&')
                {
                    temp = altura;
                    for (int i = 0; i < temp.size(); ++i) {
                        if (temp.size()==1)
                        {
                            file_to <<" " << temp[i];
                        }
                        else if (temp.size() == 2){
                            if (i == 0) {
                                file_to << " " << temp[i];
                            }
                            else {
                                file_to << temp[i];
                            }
                        }
                        else {
                            file_to << temp[i];
                        }
                    }
                }
                else {
                    temp = base;
                    for (int i = 0; i < temp.size(); ++i) {
                        if (temp.size() == 1)
                        {
                            file_to << " " << temp[i];
                        }
                        else if (temp.size() == 2) {
                            if (i == 0) {
                                file_to << " " << temp[i];
                            }
                            else {
                                file_to << temp[i];
                            }
                        }
                        else {
                            file_to << temp[i];
                        }
                    }
                }
                primerCaracterEncontrado = true;  // Indicar que ya se encontró el primer carácter
            }
            else if ((ch_read == change_from || ch_read == '&' || ch_read == '%' || ch_read == '@' || ch_read == '#') && primerCaracterEncontrado) {
                if (temp.size() == 1 && cont == false ) {
                    file_to << " ";
                }
                else {
                    file_to << "";
                }
                cont = true;
            }
            else {
                cont = false;
                file_to << ch_read;
                primerCaracterEncontrado = false;
            }
    }
}





