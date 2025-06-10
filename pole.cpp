#include <iostream>
#include <iomanip>
#include "pole.h"

void Prostokat::czytaj_dane()
{
    std::cout << "Podaj bok a: ";
    std::cin >> a;
    std::cout << "Podaj bok b: ";
    std::cin >> b;
}

void Prostokat::przetworz_dane()
{
    pole = a * b;
}

void Prostokat::wyswietl_wynik()
{
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Bok a = " << a << std::endl;
    std::cout << "Bok b = " << b << std::endl;
    std::cout << "Pole = " << pole << std::endl;
}
