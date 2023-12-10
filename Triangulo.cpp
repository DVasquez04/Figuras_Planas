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
void Triangulo::Dibujar() {
	string line;
	ifstream MyFile("Triangulo2.txt");
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

string Triangulo::mult()
{
	int x= stoi(b) * stoi(h);
	string y = to_string(x);
	return y;
}

void Triangulo::modify()
{
	char change_from = '?';
	bool modified = false;
	modify2('?', b);
}

void Triangulo::modify2(char change_from, string base)
{
    string temp = base;
    ifstream file_from;
    file_from.open("Triangulo.txt");
    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }
    ofstream file_to;
    file_to.open("Triangulo2.txt");
    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }

    char ch_read;
    bool primerCaracterEncontrado = false;
    bool cont = false;

    while (file_from.get(ch_read)) {

        if ((ch_read == change_from || ch_read == '%' || ch_read == '!' || ch_read == '$' || ch_read == '@' || ch_read == '#' || ch_read == '$' || ch_read == '&') && !primerCaracterEncontrado) {
            if (ch_read == '%')
            {
                temp = c;
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
            else if (ch_read == change_from) {
                temp = b;
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
            else if (ch_read == '!') {
                temp = a;
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
            else if (ch_read == '@') {
                temp = h;
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
                temp = mult();
                for (int i = 0; i < temp.size(); ++i) {
                    if (temp.size() == 1)
                    {
                        file_to << "    " << temp[i];
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
            else if (ch_read == '&') {
                temp = Area();
                for (int i = 0; i < temp.size(); ++i) {
                    if (temp.size() == 1)
                    {
                        file_to << "    " << temp[i];
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
        else if ((ch_read == change_from || ch_read == '%' || ch_read == '!' || ch_read == '&' || ch_read == '@' || ch_read == '#' || ch_read == '$') && primerCaracterEncontrado) {
            switch (temp.size()) {
            case 1:
                if (cont == false && (ch_read == change_from || ch_read == '!' || ch_read == '%' || ch_read == '@'))
                {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << "  ";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '&')) {
                    file_to << " ";
                }
                break;
            case 2:
                if (cont == false && ch_read == change_from || ch_read == '!' || ch_read == '%' || ch_read == '@')
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << " ";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '&')) {
                    file_to << "  ";
                }
                break;
            case 3:
                if (cont == false && ch_read == change_from || ch_read == '!' || ch_read == '%' || ch_read == '@')
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '&')) {
                    file_to << " ";
                }
                break;
            case 4:
                if (cont == false && ch_read == '$')
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '&')) {
                    file_to << " ";
                }
                break;
            case 5:
                if (cont == false && (ch_read == '#' || ch_read == '&')) {
                    file_to << "";
                }
                break;
            case 6:
                if (cont == false && (ch_read == '#' || ch_read == '&')) {
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
