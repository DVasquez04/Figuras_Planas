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

int Rectangulo::Perimetro()
{
	int perimetro = 0;
	perimetro = 2 * (stoi( base) + stoi(altura));
	return perimetro;
}

int Rectangulo::Area()
{
	double area = 0;
	area = stoi(base) * stoi(altura);
	return area;
}

string Rectangulo::suma()
{
    int sum = 0;
    sum = stoi(base) + stoi(altura);
    string suma = to_string(sum);
    return suma;
}

void Rectangulo::Dibujar()
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
    int p = Perimetro();
    string perimetro = to_string(p);
    int a = Area();
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
                else if(ch_read == change_from){
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
                else if (ch_read == '%') {
                    temp = suma();
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
                        else if (temp.size() == 3) {
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
                else if (ch_read == '@') {
                        temp = perimetro;
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
                            else if (temp.size() == 3) {
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
                else if (ch_read == '#') {
                    temp = area;
                    for (int i = 0; i < temp.size(); ++i) {
                        if (temp.size() == 1)
                        {
                            file_to << "   " << temp[i];
                        }
                        else if (temp.size() == 2) {
                            if (i == 0) {
                                file_to << "  " << temp[i];
                            }
                            else {
                                file_to << temp[i];
                            }
                        }
                        else if (temp.size() == 3) {
                            if (i == 0) {
                                file_to << "  " << temp[i];
                            }
                            else {
                                file_to << temp[i];
                            }
                        }
                        else if (temp.size() == 4) {
                            if (i == 0) {
                                file_to << " " << temp[i];
                            }
                            else {
                                file_to << temp[i];
                            }
                        }
                        else if (temp.size() == 5) {
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
                switch (temp.size()) {
                    case 1:
                        if (cont == false && (ch_read == change_from || ch_read == '&'))
                        {
                            file_to << " ";
                        }
                        else if (cont == false &&( ch_read == '%' || ch_read == '@')) {
                            file_to << "  ";
                        }
                        else if (cont == false && ch_read == '#') {
                            file_to << "  ";
                        }
                        break;
                    case 2:
                        if (cont == false &&( ch_read == change_from || ch_read == '&'))
                        {
                            file_to << "";
                        }
                        else if (cont == false &&( ch_read == '%' || ch_read == '@')) {
                            file_to << " ";
                        }
                        else if (cont == false && ch_read == '#') {
                            file_to << "  ";
                        }
                        break;
                    case 3:
                        if (cont == false &&( ch_read == change_from || ch_read == '&'))
                        {
                            file_to << "";
                        }
                        else if (cont == false && (ch_read == '%' || ch_read == '@')) {
                            file_to << "";
                        }
                        else if (cont == false && ch_read == '#') {
                            file_to << " ";
                        }
                        break;
                    case 4:
                        if (cont == false && (ch_read == '%' || ch_read == '@'))
                        {
                            file_to << "";
                        }
                        else if (cont == false && ch_read == '#' ) {
                            file_to << " ";
                        }
                        break;
                    case 5:
                        if (cont == false && ch_read == '#') {
                            file_to << "";
                        }
                        break;
                    case 6:
                        if (cont == false && ch_read == '#') {
                            file_to << "";
                        }
                        break;
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





