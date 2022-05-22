#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Fecha.h"

using namespace std;

int main()
{
    char i = 's';
    Fecha* fecha = nullptr;
    int day = 1, month = 1, year = 1;
    Fecha* fecha = new Fecha(day, month, year);
    while (i != 'n') {
        cout << "Ingrese dia - \n";
        cin >> day;
        cout << "Ingrese mes - \n";
        cin >> month;
        cout << "Ingrese ayo - \n";
        cin >> year;

        try {
            fecha->setDay(day, month, year);
            fecha->setMonth(month);
            fecha->setYear(year);
        }
        catch (invalid_argument& e) {
            cerr << e.what() << endl;
        }
        cout << "\n\tContinuar?\n";
        i = _getch();
    }
}