

#include <iostream>
#include <stdlib.h>
using namespace std;

float FtoC(float stopnie);
float FtoK(float stopnie);
float CtoF(float stopnie);
float CtoK(float stopnie);
float KtoF(float stopnie);
float KtoC(float stopnie);
int check(float temp, char stopnie);
int dataCounter = 0;
double tab[100];
char units[100];
int main()
{
    int wybor;
    float fahr, celsius, kelwin;
    while (true) {
        system("cls");

        cout << "• 1 - przelicz Fahr -> Celsius\n"
            << "• 2 - przelicz Fahr->Kelwin\n"
            << "• 3 - przelicz Celsius->Fahr\n"
            << "• 4 - przelicz Celsius->Kelwin\n"
            << "• 5 - przelicz Kelwin->Celsius\n"
            << "• 6 - przelicz Kelwin->Fahr\n"
            << "• 7 - Pokaz historie\n"
            << "• 8 - zakończ działanie programu" << endl;
        cout << "Wybierz operację: " << endl;
        cin >> wybor;
        switch (wybor) {
        case 1:
            cout << "Podaj wartośc F: " << endl;
            cin >> fahr;
            if (check(fahr, 'F') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                celsius = FtoC(fahr);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = fahr;
                    units[dataCounter] = 'F';
                    tab[dataCounter + 1] = celsius;
                    units[dataCounter + 1] = 'C';
                    dataCounter += 2;
                }
                cout << "Fahr : " << fahr << "  Celsius : " << celsius << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;

                cin.ignore(); cin.get();
            }
            break;
        case 2:
            cout << "Podaj wartośc F: " << endl;
            cin >> fahr;
            if (check(fahr, 'F') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                kelwin = FtoK(fahr);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = fahr;
                    units[dataCounter] = 'F';
                    tab[dataCounter + 1] = kelwin;
                    units[dataCounter + 1] = 'K';
                    dataCounter += 2;
                }
                cout << "Fahr : " << fahr << "  Kelwin : " << kelwin << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            break;
        case 3:
            cout << "Podaj wartośc C: " << endl;
            cin >> celsius;
            if (check(celsius, 'C') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                fahr = CtoF(celsius);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = celsius;
                    units[dataCounter] = 'C';
                    tab[dataCounter + 1] = fahr;
                    units[dataCounter + 1] = 'F';
                    dataCounter += 2;
                }
                cout << "Celsius: " << celsius << "  Fahr: " << fahr << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            break;
        case 4:
            cout << "Podaj wartośc C: " << endl;
            cin >> celsius;
            if (check(celsius, 'C') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                kelwin = CtoK(celsius);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = celsius;
                    units[dataCounter] = 'C';
                    tab[dataCounter + 1] = kelwin;
                    units[dataCounter + 1] = 'K';
                    dataCounter += 2;
                }
                cout << "Celsius: " << celsius << "  Kelwin: " << kelwin << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            break;
        case 5:
            cout << "Podaj wartośc K: " << endl;
            cin >> kelwin;
            if (check(kelwin, 'K') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                celsius = KtoC(kelwin);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = kelwin;
                    units[dataCounter] = 'K';
                    tab[dataCounter + 1] = celsius;
                    units[dataCounter + 1] = 'C';
                    dataCounter += 2;
                }
                cout << "Kelwin : " << kelwin << "  Celsius : " << celsius << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            break;
        case 6:
            cout << "Podaj wartośc K: " << endl;
            cin >> kelwin;
            if (check(kelwin, 'K') == -999.0) {
                cout << "Nie ma takiej temperatury" << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            else {
                fahr = KtoF(kelwin);
                if (dataCounter + 1 >= 100) {
                    cout << "Pamięć pełna, nie można zapisać więcej danych." << endl;
                }
                else {
                    tab[dataCounter] = kelwin;
                    units[dataCounter] = 'K';
                    tab[dataCounter + 1] = fahr;
                    units[dataCounter + 1] = 'F';
                    dataCounter += 2;
                }
                cout << "Kelwin: " << kelwin << "  Fahr: " << fahr << endl;
                cout << "Wcisnij enter aby kontynuować: " << endl;
                cin.ignore(); cin.get();
            }
            break;
        case 7:
            if (dataCounter == 0) {
                cout << "Brak zapisanych konwersji" << endl;
            }
            else {
                for (int i = 0;i < dataCounter;i+=2) {
                    cout << "<" << i/2 + 1 << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                }
            }
            cout << "Wcisnij enter aby kontynuować: ";
            cin.ignore();
            cin.get();
            break;
        case 8:
            cout << "Wybrano zakończenie działania programu" << endl;
            return 0;
        default:
            cout << "Nieprawidlowy wybor, nacisnij enter by kontynuowac" << endl;
            cin.ignore(); cin.get();
            break;
        }

    }
 }
float FtoC(float stopnie) { 
   float wynik = (5.0 / 9.0) * (stopnie - 32.0);
   return wynik;
}
float FtoK(float stopnie) {
    float wynik = (stopnie + 459.67) * (5.0 / 9.0);
    return wynik;
}
float CtoF(float stopnie) {
    float wynik = (stopnie * 9.0/5.0) + 32.0;
    return wynik;
}
float CtoK(float stopnie) {
    float wynik = (stopnie + 273.15);
    return wynik;
}
float KtoF(float stopnie) {
    float wynik = (stopnie - 273.15) * 9.0 / 5.0 + 32.0;
    return wynik;
}
float KtoC(float stopnie) {
    float wynik = (stopnie - 273.15);
    return wynik;
}
int check(float temp, char stopnie) {
    if (stopnie == 'K') {
        if (temp < 0) {
            return -999.0;
        }
    }
    else if (stopnie == 'C') {
        if (temp < -273.15) {
            return -999.0;
        }
    }
    else if (stopnie == 'F') {
        if (temp < -459.67) {
            return -999.0;
        }
    }
    return 0;
}
