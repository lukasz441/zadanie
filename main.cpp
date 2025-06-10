#include <iostream>
#include <conio.h>
#include "pole.h"
#include "pierwiastki.h"
#include "tablica.h"
#include "sortowanie.h"

void menu() {
    std::cout << "[1] Oblicz pole prostokata" << std::endl;
    std::cout << "[2] Rozwiaz rownanie kwadratowe" << std::endl;
    std::cout << "[3] Tablica 10x10 z przekatna" << std::endl;
    std::cout << "[4] Sortowanie 6 liczb" << std::endl;
    std::cout << "[Q] Wyjscie" << std::endl;
    std::cout << "Wybierz opcje: ";
}

bool czy_powrot_do_menu() {
    char wybor;
    while (true) {
        std::cout << "[1] Powrot do menu glownego" << std::endl;
        std::cout << "[Q]uit / [E]xit / [Esc] Wyjscie" << std::endl;
        std::cout << "Wybierz opcje: ";

        wybor = _getch();
        std::cout << wybor << std::endl;

        if (wybor == '1')
        {
            return true;
        }
        else if (wybor == 'Q' || wybor == 'q' || wybor == 'E' || wybor == 'e' || wybor == 27)
        {
            return false;
        }
        else
        {
            std::cout << "Nieprawidlowy wybor, sprobuj ponownie." << std::endl;
        }
    }
}

int main() {
    char wybor;
    bool kontynuuj = true;

    while (kontynuuj)
        {
        std::cout << "Lukasz Brejnak 2F" << std::endl;
        std::cout << "Technikum elektroniczne nr 3" << std::endl;
        std::cout << "PM5 - Projektowanie oprogramowania" << std::endl;

        menu();
        std::cin >> wybor;

        switch (wybor)
        {
            case '1':
            {
                Prostokat p;
                p.czytaj_dane();
                p.przetworz_dane();
                p.wyswietl_wynik();
                break;
            }
            case '2':
            {
                RownanieKwadratowe r;
                r.czytaj_dane();
                r.przetworz_dane();
                r.wyswietl_wynik();
                break;
            }
            case '3':
            {
                Tablica t;
                t.czytaj_dane();
                t.przetworz_dane();
                t.wyswietl_wynik();
                break;
            }
            case '4':
            {
                Sortowanie s;
                s.czytaj_dane();
                s.przetworz_dane();
                s.wyswietl_dane();
                break;
            }
            case 'Q':
            case 'q':
                kontynuuj = false;
                continue;
            default:
                std::cout << "Nieprawidlowy wybor. Sprobuj ponownie." << std::endl;
                continue;
        }

        kontynuuj = czy_powrot_do_menu();
        std::cout << std::endl;
    }

    std::cout << "Koniec programu" << std::endl;
    return 0;
}
