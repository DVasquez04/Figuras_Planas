#include <iostream>
#include "Paralelogramo.h"
#include "Cuadrado.h"
#include <windows.h>

using namespace std;
int main(int argc, char* argv[]) {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Paralelogramo p(1, 2, 3);
    p.Dibujar();
}