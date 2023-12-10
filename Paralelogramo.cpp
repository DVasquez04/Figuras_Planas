
#include "Paralelogramo.h"


Paralelogramo::Paralelogramo()
{
}

Paralelogramo::Paralelogramo(string base, string altura, string diagonal)
{
    this->base = base;
    this->altura = altura;
    this->diagonal = diagonal;
}

Paralelogramo::~Paralelogramo()
{
}

string Paralelogramo::getBase()
{
    return base;
}

string Paralelogramo::getAltura()
{
    return altura;
}

string Paralelogramo::getDiagonal()
{
    return diagonal;
}

string Paralelogramo::Perimetro()
{
    int perimetro = 0;
    perimetro = 2 * (stoi(diagonal) + stoi(base));
    string result = to_string(perimetro);
    return result;
}

string Paralelogramo::Area()
{
    int area = 0;
    area = stoi(base) * stoi(altura);
    string result = to_string(area);
    return result;
}

void Paralelogramo::Dibujar()
{
    string line;
    ifstream MyFile("paralelogramo_01.txt");
    while (getline(MyFile, line)) {
        cout << line << '\n';
    }
    MyFile.close();
}

void Paralelogramo::Dibujar2()
{
    string line;
    ifstream MyFile("paralelogramo2.txt");
    while (getline(MyFile, line)) {
        cout << line << '\n';
    }
    MyFile.close();
}

void Paralelogramo::modify()
{
    char change_from = '&';
    bool modified = false;
    modify2('&', base);
}
string Paralelogramo::suma()
{
    int sum = stoi(diagonal) + stoi(base);
    string suma = to_string(sum);
    return suma;
}
void Paralelogramo::modify2(char change_from, string base)
{
    string temp = base;
    ifstream file_from;
    file_from.open("paralelogramo_01.txt");
    if (file_from.fail())
    {
        cout << "Error opening file1: ";
        exit(1);
    }
    ofstream file_to;
    file_to.open("paralelogramo2.txt");
    if (file_to.fail())
    {
        cout << "Error opening file: ";
        exit(2);
    }

    char ch_read;
    bool primerCaracterEncontrado = false;
    bool cont = false;

    while (file_from.get(ch_read)) {

        if ((ch_read == change_from || ch_read == '!' || ch_read == '?' || ch_read == '$' || ch_read == '@' || ch_read == '#') && !primerCaracterEncontrado) {
            if (ch_read == '!')
            {
                temp = altura;
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
            else if (ch_read == '?') {
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
            else if (ch_read == '#') {
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
            else if (ch_read == '$') {
                temp = Area();
                for (int i = 0; i < temp.size(); ++i) {
                    if (temp.size() == 1)
                    {
                        file_to << "  " << temp[i];
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
        else if ((ch_read == change_from || ch_read == '!' || ch_read == '?' || ch_read == '$' || ch_read == '@' || ch_read == '#') && primerCaracterEncontrado) {
            switch (temp.size()) {
            case 1:
                if (cont == false && (ch_read == change_from || ch_read == '!' || ch_read == '?'))
                {
                    file_to << " ";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '@')) {
                    file_to << "  ";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << "   ";
                }
                break;
            case 2:
                if (cont == false && (ch_read == change_from || ch_read == '!' || ch_read == '?'))
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '@')) {
                    file_to << " ";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << "  ";
                }
                break;
            case 3:
                if (cont == false && (ch_read == change_from || ch_read == '!' || ch_read == '?'))
                {
                    file_to << "";
                }
                else if (cont == false && (ch_read == '#' || ch_read == '@')) {
                    file_to << "";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << " ";
                }
                break;
            case 4:
                if (cont == false && (ch_read == '#' || ch_read == '@'))
                {
                    file_to << "";
                }
                else if (cont == false && ch_read == '$') {
                    file_to << " ";
                }
                break;
            case 5:
                if (cont == false && ch_read == '$') {
                    file_to << "";
                }
                break;
            case 6:
                if (cont == false && ch_read == '$') {
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