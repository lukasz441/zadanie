#include <iostream>
#include <cmath>
#include <iomanip>
#include "pierwiastki.h"

void RownanieKwadratowe::czytaj_dane()
{
    do
    {
        std::cout << "Podaj a (rozne od 0): ";
        std::cin >> a;
    }
    while(a == 0);

    std::cout << "Podaj b: ";
    std::cin >> b;

    std::cout << "Podaj c: ";
    std::cin >> c;
}

void RownanieKwadratowe::przetworz_dane()
{
    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        kod = 1;
        x1 = (-b - std::sqrt(delta)) / (2 * a);
        x2 = (-b + std::sqrt(delta)) / (2 * a);
    }
    else if (delta == 0)
    {
        kod = 2;
        x1 = -b / (2 * a);
    }
    else
    {
        kod = 3;
    }
}

void RownanieKwadratowe::wyswietl_wynik()
{
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    switch (kod)
    {
        case 1:
            std::cout << "Dwa pierwiastki: x1 = " << x1 << ", x2 = " << x2 << std::endl;
            break;
        case 2:
            std::cout << "Jeden pierwiastek: x = " << x1 << std::endl;
            break;
        case 3:
            std::cout << "Brak pierwiastkow rzeczywistych." << std::endl;
            break;
    }
}
