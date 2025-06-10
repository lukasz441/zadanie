#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tablica.h"


void Tablica::czytaj_dane()
{
    srand(time(0));
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            t[i][j] = (i == j) ? rand() % 10 : 0;
}

void Tablica::przetworz_dane()
{
    suma = 0;
    for(int i = 0; i < 10; i++)
        suma += t[i][i];
    std::cout << "Suma przekatnej: " << suma << std::endl;
}

void Tablica::wyswietl_wynik()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            std::cout << t[i][j] << " ";
        std::cout << std::endl;
    }
}
