#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Fecha.h"

using namespace std;

int main()
{
    char i = 's';
    Fecha* fecha = nullptr;
    int day = 1, month = 1, year = 1;
    fecha = new Fecha(day, month, year);
    while (i != 'n') {
        cout << "Ingrese dia - \n";
        cin >> day;
        try {
            fecha->setDay(day, month, year);
        }
        catch (invalid_argument& e) {
            cerr << e.what() << endl;
        }
        cout << "Ingrese mes - \n";
        cin >> month;
        try {
            fecha->setMonth(month);
        }
        catch (invalid_argument& e) {
            cerr << e.what() << endl;
        }
        cout << "Ingrese ayo - \n";
        cin >> year;
        try {
            fecha->setYear(year);
        }
        catch (invalid_argument& e) {
            cerr << e.what() << endl;
        }
        cout << fecha->getDay() << "/" << fecha->getMonth() << "/" << fecha->getYear() << endl;
        cout << "\n\tContinuar?\n";
        i = _getch();
        system("cls");
    }

    for (int j = 0; j < 10; j++) {
        fecha++;
        cout << fecha->getDay() << "/" << fecha->getMonth() << "/" << fecha->getYear() << endl;
    }

    cout << "+++++++++++++++++++++++++++++++++++++++ \n";

    for (int j = 0; j < 10; j++) {
        fecha--;
        cout << fecha->getDay() << "/" << fecha->getMonth() << "/" << fecha->getYear() << endl;
    }

    return 0;
}