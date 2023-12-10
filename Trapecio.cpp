#include "Trapecio.h"

Trapecio::Trapecio()
{
}

Trapecio::Trapecio(string base, string altura,string d1,string d2,string base2)
{
	this->base = base;
	this->altura = altura;
	this->d1 = d1;
	this->d2 = d2;
	this->base2 = base2;
}

Trapecio::~Trapecio()
{
}

string Trapecio::Perimetro()
{
	int perimetro = 0;
	perimetro = stoi(base) +stoi(d1)+stoi(d2)+stoi(base2);
	string result = to_string(perimetro);
	return result;
}

string Trapecio::Area()
{
	int area = 0;
	area = ((stoi(base) + stoi(base2)) * stoi(altura)) / 2;
	string result = to_string(area);
	return result;
}

string Trapecio::suma()
{
	int sum = (stoi(base) + stoi(base2)) * stoi(altura);
	string result = to_string(sum);
	return result;
}
void Trapecio::Dibujar()
{
	string line;
	ifstream MyFile("Trapecio2.txt");
	while (getline(MyFile, line)) {
		cout << line << '\n';
	}
	MyFile.close();
}

void Trapecio::modify()
{
	char change_from = '&';
	bool modified = false;
	modify2('&', d1);
}

void Trapecio::modify2(char change_from, string base)
{
    string temp = base;
    ifstream file_from;
    file_from.open("Trapecio.txt");
    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }
    ofstream file_to;
    file_to.open("Trapecio2.txt");
    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }

    char ch_read;
    bool primerCaracterEncontrado = false;
    bool cont = false;

    while (file_from.get(ch_read)) {

        if ((ch_read == change_from || ch_read == '%' || ch_read == '?' || ch_read == '$' || ch_read == '!' || ch_read == '#'||ch_read=='<'||ch_read=='@') && !primerCaracterEncontrado) {
            if (ch_read == '?')
            {
                temp = base2;
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
                temp = d1;
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
                temp =altura;
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
            else if (ch_read == '#') {
                temp = d2;
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
                temp = this->base;
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
            else if (ch_read == '%') {
                temp = suma();
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
            else if (ch_read == '<') {
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
        else if ((ch_read == change_from || ch_read == '%' || ch_read == '?' || ch_read == '$' || ch_read == '@' || ch_read == '#'||ch_read=='!'||ch_read=='<') && primerCaracterEncontrado) {
            switch (temp.size()) {
            case 1:
                if (cont == false && (ch_read == change_from || ch_read == '$' || ch_read == '?'||ch_read=='!'||ch_read=='#'))
                {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '@') {
                    file_to << "  ";
                }
                else if (cont == false && (ch_read == '<' || ch_read == '%')) {
                    file_to << "  ";
                }
                break;
            case 2:
                if (cont == false && (ch_read == change_from || ch_read == '$' || ch_read == '?' || ch_read == '!' || ch_read == '#'))
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '@') {
                    file_to << " ";
                }
                else if (cont == false && (ch_read == '<' || ch_read == '%')) {
                    file_to << "  ";
                }
                break;
            case 3:
                if (cont == false && (ch_read == change_from || ch_read == '$' || ch_read == '?' || ch_read == '!' || ch_read == '#'))
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '@') {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '<' || ch_read == '%')) {
                    file_to << " ";
                }
                break;
            case 4:
                if (cont == false && ch_read == '@')
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '<' || ch_read == '%')) {
                    file_to << " ";
                }
                break;
            case 5:
                if (cont == false && (ch_read == '<' || ch_read == '%')) {
                    file_to << "";
                }
                break;
            case 6:
                if (cont == false && (ch_read == '<' || ch_read == '%')) {
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
