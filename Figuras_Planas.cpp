#include <iostream>
#include "Paralelogramo.h"
#include "Cuadrado.h"
#include <windows.h>
#include "Rectangulo.h"
using namespace std;
int main(int argc, char* argv[]) {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Rectangulo r( "11", "5");
    r.Dibujar("Rectangulo.txt");
    r.modify();
    r.Dibujar("Rectangulo2.txt");
}