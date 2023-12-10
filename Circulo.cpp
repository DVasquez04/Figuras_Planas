#include "Circulo.h"
Circulo::Circulo(){}
Circulo::Circulo(string r) {
	this->r = r;
}
Circulo::~Circulo(){}
string Circulo::Area() {
	int area;
	string sArea;
	int pi = 3;
	area = (pi * (stoi(r) * stoi(r)));
	sArea = to_string(area);
	return sArea;
}
string Circulo::Perimetro() {
	int perimetro;
	string sPeri;
	int pi = 3;
	perimetro = (2 * pi * stoi(r));
	sPeri = to_string(perimetro);
	return sPeri;
}

string Circulo::elevado()
{
	int x = stoi(r) * stoi(r);
	string y = to_string(x);
	return y;
}
void Circulo::Dibujar()
{
	string line;
	ifstream MyFile("Circulo2.txt");
	while (getline(MyFile, line)) {
		cout << line << '\n';
	}
	MyFile.close();
}
void Circulo::modify()
{
	char change_from = '?';
	bool modified = false;
	modify2('?', r);
}
void Circulo::modify2(char change_from, string base)
{
    string temp = base;
    ifstream file_from;
    file_from.open("Circulo.txt");
    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }
    ofstream file_to;
    file_to.open("Circulo2.txt");
    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }

    char ch_read;
    bool primerCaracterEncontrado = false;
    bool cont = false;

    while (file_from.get(ch_read)) {

        if ((ch_read == change_from || ch_read == '@'  || ch_read == '$' || ch_read == '!' || ch_read == '#') && !primerCaracterEncontrado) {
             if (ch_read == change_from) {
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
            else if (ch_read == '$') {
                int x = 2 * stoi(r);
                temp = to_string(x);
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
                 temp = Perimetro();
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
                temp = elevado();
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
                            file_to << "" << temp[i];
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
            else if (ch_read == '!') {
                temp = Area();
                for (int i = 0; i < temp.size(); ++i) {
                    if (temp.size() == 1)
                    {
                        file_to << "  " << temp[i];
                    }
                    else if (temp.size() == 2) {
                        if (i == 0) {
                            file_to << "   " << temp[i];
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
                            file_to << "  " << temp[i];
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
                    else if (temp.size() == 6) {
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
        else if ((ch_read == change_from || ch_read == '@' || ch_read == '$' || ch_read == '!' || ch_read == '#') && primerCaracterEncontrado) {
            switch (temp.size()) {
            case 1:
                if (cont == false && ch_read == change_from)
                {
                    file_to << " ";
                }
                else if (cont == false && (ch_read == '$'||ch_read=='@')) {
                    file_to << "  ";
                }
                else if (cont == false && ch_read == '#') {
                    file_to << "    ";
                }
                else if (cont == false && ch_read == '!') {
                    file_to << "    ";
                }
                break;
            case 2:
                if (cont == false && ch_read == change_from )
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '$' || ch_read == '@')) {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '#') {
                    file_to << "   ";
                }
                else if (cont == false && ch_read == '!') {
                    file_to << "  ";
                }
                break;
            case 3:
                if (cont == false && ch_read == change_from )
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '$' || ch_read == '@')) {
                    file_to << "";
                }
                else if (cont == false && ch_read == '#') {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '!') {
                    file_to << "  ";
                }
                break;
            case 4:
                if (cont == false && (ch_read == '$' || ch_read == '@'))
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '#') {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '!') {
                    file_to << " ";
                }
                break;
            case 5:
                if (cont == false && (ch_read == '#' || ch_read == '!')) {
                    file_to << " ";
                }
                break;
            case 6:
                if (cont == false && (ch_read == '#' || ch_read == '!')) {
                    file_to << "";
                }
                break;
            case 7:
                if (cont == false && ch_read == '!') {
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