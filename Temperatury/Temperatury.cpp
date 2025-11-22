#include <iostream>
#include <stdlib.h>
#include <cstdlib> 
#include <ctime> 
#include "headerFile.h"
using namespace std;
int main()
{   
    srand(time(NULL));
    int wybor;
    int wybor2;
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
            << "• 8 - Usun z historii\n"
            << "• 9 - Modyfikacja wpisu z historii\n"
            << "• 10 - Losowe wypelnienie historii\n"
            << "• -1 - zakończ działanie programu" << endl;
        cout << "Wybierz operację: " << endl;
        cin >> wybor;
        switch (wybor) {
        case -1:
            cout << "Wybrano zakończenie działania programu" << endl;
            return 0;
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
                cout << "1. Tylko C -->\n";
                cout << "2. Tylko K -->\n";
                cout << "3. Tylko F -->\n";
                cout << "4. Cala historia" << endl;
                cout << "Wybierz operacje: " << endl;
                cin >> wybor2;
                switch (wybor2) {
                case 1: {
                    int licznik = 1;
                    int sumaC = 0;
                    for (int i = 0;i < dataCounter;i += 2) {
                        if (units[i] == 'C') {
                            cout << "<" << licznik << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                            sumaC += 1;
                            licznik++;
                        }
                    }
                    if (sumaC == 0) {
                        cout << "Brak danych" << endl;
                    }
                    break;
                }
                case 2: {
                    int licznik = 1;
                    int sumaK = 0;
                    for (int i = 0;i < dataCounter;i += 2) {
                        if (units[i] == 'K') {
                            cout << "<" << licznik << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                            sumaK += 1;
                            licznik++;
                        }
                    }
                    if (sumaK == 0) {
                        cout << "Brak danych" << endl;
                    }
                    break;
                }
                case 3: {
                    int licznik = 1;
                    int sumaF = 0;
                    for (int i = 0;i < dataCounter;i += 2) {
                        if (units[i] == 'F') {
                            cout << "<" << licznik << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                            sumaF += 1;
                            licznik++;
                        }
                    }
                    if (sumaF == 0) {
                        cout << "Brak danych" << endl;
                    }
                    break;
                }
                case 4:
                    for (int i = 0;i < dataCounter;i += 2) {
                        cout << "<" << i / 2 + 1 << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                    }
                    break;


                }
            }
            cout << "Wcisnij enter aby kontynuować: ";
            cin.ignore();
            cin.get();
            break;
        case 8: {
            if (dataCounter == 0) {
                cout << "Nie ma zadnej historii" << endl;
            }
            else {
                system("cls");
                int licznik = 1;
                int linijka;
                for (int i = 0;i < dataCounter;i += 2) {
                    cout << "<" << licznik << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                    licznik++;
                }
                cout << "Ktora linie chcesz usunac?" << endl;
                cin >> linijka;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Zly wybor! Wprowadz liczbe." << endl;
                    cout << "Wcisnij enter aby kontynuowac: ";
                    cin.get();
                    break;
                }
                if (linijka > licznik || linijka < 1) {
                    cout << "Nie ma takiej linii" << endl;
                }
                else if (linijka >= 1 && linijka < licznik) {
                    int index1 = linijka * 2 - 2;
                    int index2 = linijka * 2 - 1;
                    for (int i = index2 + 1;i < dataCounter;i++) {
                        tab[i - 2] = tab[i];
                        units[i - 2] = units[i];
                    }
                    dataCounter -= 2;
                }
                else {
                    cout << "Nie ma takiej linii" << endl;
                }
            }

            cout << "Wcisnij enter aby kontynuować: ";
            cin.ignore();
            cin.get();
            break;
        }
        case 9: {
            if (dataCounter == 0) {
                cout << "Nie ma zadnej historii" << endl;
            }
            else {
                system("cls");
                int licznik = 1;
                int linijka;
                for (int i = 0;i < dataCounter;i += 2) {
                    cout << "<" << licznik << ">" << "  " << tab[i] << units[i] << " = " << tab[i + 1] << units[i + 1] << endl;
                    licznik++;
                }
                cout << "Ktora linie chcesz zmodyfikowac?" << endl;
                cin >> linijka;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Zly wybor! Wprowadz liczbe." << endl;
                    cout << "Wcisnij enter aby kontynuowac: ";
                    cin.get();
                    break;
                }
                if (linijka > licznik || linijka < 1) {
                    cout << "Nie ma takiej linii" << endl;
                }
                else if (linijka >= 1 && linijka < licznik) {
                    int index1 = linijka * 2 - 2;
                    int index2 = linijka * 2 - 1;
                    float nowatemperatura;
                    char nowyrodzaj;
                    char nowyrodzaj2;
                    cout << "Wpisz nowa temperature" << endl;
                    cin >> nowatemperatura;
                    cout << "Podaj rodzaj temperatury : C,K lub F" << endl;
                    cin >> nowyrodzaj;
                    if (nowyrodzaj != 'C' && nowyrodzaj != 'K' && nowyrodzaj != 'F') {
                        cout << "Podano zly rodzaj" << endl;
                        break;
                    }
                    cout << "Na co?" << endl;
                    cin >> nowyrodzaj2;
                    if (nowyrodzaj2 != 'C' && nowyrodzaj2 != 'K' && nowyrodzaj2 != 'F') {
                        cout << "Podano zly rodzaj" << endl;
                        break;
                    }
                    if (nowyrodzaj == nowyrodzaj2) {
                        cout << "Nie ma żadnej zmiany  " << nowatemperatura << nowyrodzaj << " = " << nowatemperatura << nowyrodzaj2 << endl;
                    }
                    else {
                        tab[index1] = nowatemperatura;
                        units[index1] = nowyrodzaj;
                        switch (nowyrodzaj) {
                        case 'C':
                            switch (nowyrodzaj2) {
                            case 'F':
                                tab[index2] = CtoF(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;
                            case 'K':
                                tab[index2] = CtoK(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;
                            }
                            break;

                        case 'F':
                            switch (nowyrodzaj2) {
                            case 'C':
                                tab[index2] = FtoC(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;

                            case 'K':
                                tab[index2] = FtoK(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;
                            }
                            break;
                        case 'K':
                            switch (nowyrodzaj2) {
                            case 'C':
                                tab[index2] = KtoC(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;
                            case 'F':
                                tab[index2] = KtoF(nowatemperatura);
                                units[index2] = nowyrodzaj2;
                                break;
                            }
                            break;
                        }
                    }
                }
                else {
                    cout << "Nie ma takiej linii" << endl;
                }
            }

            cout << "Wcisnij enter aby kontynuować: ";
            cin.ignore();
            cin.get();
            break;
        }
        case 10: {
            int ile;
            cout << "Ile losowych wartosci przeliczyc?" << endl;
            cin >> ile;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Zly wybor! Wprowadz liczbe." << endl;
                cout << "Wcisnij enter aby kontynuowac: ";
                cin.get();
                break;
            }  
            if (ile < 1) {
                cout << "Liczba jest za mala" << endl;
                break;
            }
            if (dataCounter + ile * 2 > 100) {
                 char taknie;
                 cout << "Nie ma tyle miejsca" << endl;
                 cout << "Czy wygenerować tylko tyle losówek ile zostało miejsca?(y/n)" << endl;
                 cin >> taknie;
                 if (cin.fail()) {
                     cin.clear();
                     cin.ignore(1000, '\n');
                     cout << "Zly wybor!" << endl;
                     cout << "Wcisnij enter aby kontynuowac: ";
                     cin.get();
                     break;
                 }
                 if (taknie == 'n') {
                     cout << "Powrot do glownego menu" << endl;
                     break;
                 }
                 else if (taknie == 'y') {
                     ile = (100 - dataCounter) / 2;
                     if (ile <= 0) {
                         cout << "Brak miejsca na chociaz jeden wpis!" << endl;
                         break;
                     }
                     cout << "Wygeneruje " << ile << " wpisow" << endl;
                 }
                 else {
                     cout << "Zla odpowiedz" << endl;
                     break;
                 }
            }
            for (int i = 0; i < ile; i++) {
                char startUnits[3] = { 'C', 'F', 'K' };
                char start = startUnits[rand() % 3];
                int x;
                if (start == 'C') {
                    x = rand() % 1001 - 273;
                }
                if (start == 'F') {
                    x = rand() % 1400 - 459;
                }
                if (start == 'K') {
                    x = rand() % 1001;
                }
                double temp = (double)x;
                char end;
                do {
                    end = startUnits[rand() % 3];
                } while (end == start);
                double wynik;
                if (start == 'C' && end == 'F') {
                    wynik = CtoF(temp);
                }
                if (start == 'C' && end == 'K') {
                    wynik = CtoK(temp);
                }

                if (start == 'F' && end == 'C') {
                    wynik = FtoC(temp);
                }
                if (start == 'F' && end == 'K') {
                    wynik = FtoK(temp);
                }

                if (start == 'K' && end == 'C') {
                    wynik = KtoC(temp);
                }
                if (start == 'K' && end == 'F') {
                    wynik = KtoF(temp);
                }
                tab[dataCounter] = temp;
                units[dataCounter] = start;
                tab[dataCounter + 1] = wynik;
                units[dataCounter + 1] = end;
                dataCounter += 2;
            }
            cout << ile << " losowych wpisow dodano.\n";
        cout << "Wcisnij enter aby kontynuować: ";
        cin.ignore();
        cin.get();
        break;
        default:
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Zly wybor! Wprowadz liczbe." << endl;
                cout << "Wcisnij enter aby kontynuowac: ";
                cin.get();
                break;
            }
        }

    }
}
