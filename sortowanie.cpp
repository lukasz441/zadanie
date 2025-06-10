#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sortowanie.h"

void Sortowanie::czytaj_dane()
{
    srand(time(0));
    for(int i = 0; i < 6; i++)
        liczby[i] = rand() % 100;

    std::cout << "Nieposortowane liczby: " << std::endl;
    for(int i = 0; i < 6; i++)
        std::cout << liczby[i] << " ";
    std::cout << std::endl;
}

void Sortowanie::przetworz_dane()
{
    for(int i = 0; i < 6 - 1; i++) {
        for(int j = 0; j < 6 - i - 1; j++)
            {
            if(liczby[j] > liczby[j + 1])
            {
                int temp = liczby[j];
                liczby[j] = liczby[j + 1];
                liczby[j + 1] = temp;
            }
        }
    }
}

void Sortowanie::wyswietl_dane() {
    std::cout << "Posortowane liczby: " << std::endl;
    for(int i = 0; i < 6; i++)
        std::cout << liczby[i] << " ";
    std::cout << std::endl;
}
