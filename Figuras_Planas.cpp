#include <iostream>
#include <string>
#include "Paralelogramo.h"
#include "Cuadrado.h"
#include <windows.h>
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Rombo.h"
#include "Cometa.h"
#include "Trapecio.h"
#include "Circulo.h"

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
            string a = "0", b = "0", c = "0", h = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = value;
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = value;
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        c = value;
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        h = value;
                }
            }
            Triangulo t(a, b, c, h);
            t.modify();
            t.Dibujar();
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
            string a = "0", b = "0", h = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = value;
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = value;
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        h = value;
                }
            }
            Paralelogramo p(b, h, a);
            p.modify();
            p.Dibujar(); 
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
            string value;
            string a = "0", b = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value)) {
                        a = argv[2];
                    }    
                }
                else {
                    value = argv[i];
                    if (esNumero(value)) {
                        b = argv[3];
                    }   
                }
            }
            Rectangulo r(b, a);
            r.modify();
            r.Dibujar();
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
            string a = "0";
            value = argv[2];
            if (esNumero(value))
                a = value;
            Cuadrado c(a);
            c.modify();
            c.Dibujar();
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
            string a = "0", d = "0", D = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = value;
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        d = value;
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        D = value;
                }
            }
            Rombo r(D, d, a);
            r.modify();
            r.Dibujar();
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
            string a = "0", b = "0", d = "0", D = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = value;
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = value;
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        d = value;
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        D = value;
                }
            }
            Cometa c(a, b, d, D);
            c.modify();
            c.Dibujar();
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
            string a = "0", b = "0", c = "0", h = "0", B = "0";
            for (int i = 2; i < cont; i++) {
                if (i == 2) {
                    value = argv[i];
                    if (esNumero(value))
                        a = value;
                }
                else if (i == 3) {
                    value = argv[i];
                    if (esNumero(value))
                        b = value;
                }
                else if (i == 4) {
                    value = argv[i];
                    if (esNumero(value))
                        c = value;
                }
                else if (i == 5) {
                    value = argv[i];
                    if (esNumero(value))
                        h = value;
                }
                else {
                    value = argv[i];
                    if (esNumero(value))
                        B = value;
                }
            }
            Trapecio t(B, h, a, c, b);
            t.modify();
            t.Dibujar();
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
            string r = "0";
            value = argv[2];
            if (esNumero(value))
                r = value;
            Circulo c(r);
            c.modify();
            c.Dibujar();
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
}