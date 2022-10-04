#ifndef TESTATRIANGULO_H_
#define TESTATRIANGULO_H_
#include "Triangulo.h"
class TestaTriangulo
{
private:
    Triangulo *Objeto = new Triangulo;

public:
    TestaTriangulo();
    ~TestaTriangulo();
    void menu();
};

TestaTriangulo::TestaTriangulo()
{
}

TestaTriangulo::~TestaTriangulo()
{
    delete Objeto;
}

void TestaTriangulo::menu()
{
    double entrada;
    int flag;
    do
    {
        do
        {
            do
            {
                cout << "Insira o lado A: ";
                cin >> entrada;
            } while (Objeto->setA(entrada) == false);
            do
            {
                cout << "Insira o lado B: ";
                cin >> entrada;
            } while (Objeto->setB(entrada) == false);
            do
            {
                cout << "Insira o lado C: ";
                cin >> entrada;
            } while (Objeto->setC(entrada) == false);
        } while (Objeto->tipoTriangulo() == false);
        cout << "Area: " << Objeto->Area() << "\n";
        cout << "Digite 0 para encerrar o programa: ";
        cin >> flag;
    } while (flag != 0);
}

#endif