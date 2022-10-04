#ifndef TRIANGULO_H_
#define TRIANGULO_H_

class Triangulo
{
private:
    double a, b, c; // > 0 e formar triangulo
public:
    Triangulo();
    bool setA(double aux);
    bool setB(double aux);
    bool setC(double aux);
    bool tipoTriangulo() const;
    double Area() const;
};

Triangulo::Triangulo()
{
    a = 1;
    b = 1;
    c = 1;
}

bool Triangulo::setA(double aux)
{
    if (aux > 0)
    {
        a = aux;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triangulo::setB(double aux)
{
    if (aux > 0)
    {
        b = aux;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triangulo::setC(double aux)
{
    if (aux > 0)
    {
        c = aux;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triangulo::tipoTriangulo() const
{
    if (b - c < a && a < b + c || a - c < b && b < a + c || a - b < c && c < a + b)
    {
        if (a == b && b == c)
        {
            cout << "Triangulo equilatero\n";
            return true;
        }
        if (a == b && b != c || a == c && c != b || b == c && c != a)
        {
            cout << "Triangulo isosceles\n";
            return true;
        }
        if (a != b && b != c)
        {
            cout << "Triangulo escaleno\n";
            return true;
        }
        if (a * a < (b * b) + (c * c))
        {
            cout << "Triangulo acutangulo\n";
            return true;
        }
        if (a * a > (b * b) + (c * c))
        {
            cout << "Triangulo obtusangulo\n";
            return true;
        }
        if (a * a == (b * b) + (c * c))
        {
            cout << "Triangulo retangulo\n";
            return true;
        }
    }
    else
    {
        return false;
    }
}

double Triangulo::Area() const
{
    double t = (a + b + c) / 2;
    return (sqrt(t * (t - a) * (t - b) * (t - c)));
}

#endif