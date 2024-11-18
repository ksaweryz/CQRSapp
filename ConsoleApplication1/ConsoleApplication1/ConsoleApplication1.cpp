#include "pch.h"
#include <iostream>
#include <cstdlib>

using namespace std;

double wynik = 0;

bool oblicz(double liczba_1, double liczba_2, char znak)
{
    switch (znak) {
    case '+':
        wynik = liczba_1 + liczba_2;
        return true;
    case '-':
        wynik = liczba_1 - liczba_2;
        return true;
    case '*':
        wynik = liczba_1 * liczba_2;
        return true;
    case '/':
        if (liczba_2 != 0) {
            wynik = liczba_1 / liczba_2;
            return true;
        } else {
            cout << "Nie mozna dzielic przez 0!" << endl;
            return false;
        }
    default:
        system("cls");
        cout << "Bledna operacja!" << endl;
        return false;
    }
}

double pobierz_wynik() {
    return wynik;
}

int main()
{
    double liczba_1, liczba_2;
    char znak;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba_1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba_2;
    cout << "Wybierz operacje (+, -, *, /) : ";
    cin >> znak;

    if (oblicz(liczba_1, liczba_2, znak)) {
        double wynik_obliczen = pobierz_wynik();
        cout << "Wynik: " << wynik_obliczen << endl;
    }

    return 0;
}
