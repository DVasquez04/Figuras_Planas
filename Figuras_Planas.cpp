#include <iostream>
#include <string>
#include "Paralelogramo.h"
#include "Cuadrado.h"
#include <windows.h>
#include "Rectangulo.h"
using namespace std;
bool esNumero(string str) {
    try {
        size_t pos = 0;
        int numero = stoi(str, &pos);
        //el pos mira si todo el string es un num, y luego valida si el num esta entre 0 y 999
        return (pos == str.length() && numero >= 0 && numero <= 999);
    }
    catch (...) {
        //retorna false si falla el stoi de una
        return false;
    }
}
void showAbout() {
    string line;
    ifstream MyFile("About.txt");
    while (getline(MyFile, line)) {
        cout << line << '\n';
    }
    MyFile.close();
}
void Accion(int cont, char* argv[]) {
    if (cont <= 2) {
        showAbout();
        exit(1);
    }
    string Tipo = argv[1];
    if (Tipo == "triangulo") {
        //validar variables
        if (cont != 6) {
            //el numero de variables no concuerda
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0, b = 0, c = 0, h = 0;
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = stoi(value);
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        c = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        h = stoi(value);
                }
            }
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "c: " << c << endl;
            cout << "h: " << h << endl;
        }
    }
    else if (Tipo == "paralelogramo") {
        //validar variables
        if (cont != 5) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0, b = 0, h = 0;
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        h = stoi(value);
                }
            }
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "h: " << h << endl;
        }
    }
    else if (Tipo == "rectangulo") {
        //validar
        if (cont != 4) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            //string value;
            string a = argv[2], b = argv[3];
            /*for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        b = stoi(value);
                }
            }*/
            Rectangulo r( a, b);
            r.Dibujar("Rectangulo.txt");
            r.modify();
            r.Dibujar("Rectangulo2.txt");
            //cout << "a: " << a << endl;
            //cout << "b: " << b << endl;
        }
    }
    else if (Tipo == "cuadrado") {
        if (cont != 3) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0;
            value = argv[2];
            if (esNumero(value))
                a = stoi(value);
            cout << "a: " << a << endl;
        }
    }
    else if (Tipo == "rombo") {
        if (cont != 5) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0, d = 0, D = 0;
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        d = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        D = stoi(value);
                }
            }
            cout << "a: " << a << endl;
            cout << "d: " << d << endl;
            cout << "D: " << D << endl;
        }
    }
    else if (Tipo == "cometa") {
        if (cont != 6) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0, b = 0, d = 0, D = 0;
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = stoi(value);
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        d = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        D = stoi(value);
                }
            }
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "d: " << d << endl;
            cout << "D: " << D << endl;
        }
    }
    else if (Tipo == "trapecio") {
        if (cont != 7) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int a = 0, b = 0, c = 0, h = 0, B = 0;
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = stoi(value);
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = stoi(value);
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        c = stoi(value);
                }
                else if (i == 5) {
                    value = argv[i];
                    if (esNumero(value))
                        h = stoi(value);
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        B = stoi(value);
                }
            }
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "c: " << c << endl;
            cout << "h: " << h << endl;
            cout << "B: " << B << endl;
        }
    }
    else if (Tipo == "circulo") {
        if (cont != 3) {
            showAbout();
            exit(2);
        }
        else {
            //esto para validar
            string value;
            int r = 0;
            value = argv[2];
            if (esNumero(value))
                r = stoi(value);
            cout << "r: " << r << endl;
        }
    }
    else {
        showAbout();
    }
}
int main(int argc, char* argv[]) {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Accion(argc, argv);
    /*Rectangulo r( "1", "1");
    r.Dibujar("Rectangulo.txt");
    r.modify(); 
    r.Dibujar("Rectangulo2.txt");*/
}