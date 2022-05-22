#include "Fecha.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Fecha::Fecha(int _day, int _month, int _year) {
	setDay(_day, _month, _year);
	setMonth(_month);
	setYear(_year);
}

void Fecha::setDay(int _day, int _month, int _year) {
	if (_day >= 1 && _day <= 31) {
		if (validateDay(_day, _month, _year)) {
			this->day = _day;
		}
		else {
			throw invalid_argument("No existe el mes con esos dias");
		}
	}
	else {
		throw invalid_argument("Estas wey en dia");
	}
}

void Fecha::setMonth(int _month) {
	if (_month >= 1 && _month <= 12) {
		this->month = _month;
	}
	else {
		throw invalid_argument("Estas wey en mes");
	}
}

void Fecha::setYear(int _year) {
	this->year = _year; 
}

int Fecha::getDay() { return day; }

int Fecha::getMonth() { return month; }

int Fecha::getYear() { return year; }

bool Fecha::validateDay(int _day, int _month, int _year) {

	if (_day >= 29) {
		if (_month == 2 || _month == 4 || _month == 6 || _month == 7 || _month == 9 || _month == 11) {
			if (_month == 2) {
				if (validateLeap_year(_year)) {
					if (_day <= 29) {
						return true;
					}
					else {
						return false;
					}
				}
				else {
					if (_day <= 28) {
						return true;
					}
					else {
						return false;
					}
				}
			}
			else {
				if (_day <= 30) {
					return true;
				}
				else {
					return false;
				}
			}
		}
		else {
			return true;
		}
	}
	else {
		return true;
	}
}

bool Fecha::validateLeap_year(int _year) {
	if (_year % 4 == 0) {
		if (_year % 100 == 0) {
			if (_year % 400 == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}