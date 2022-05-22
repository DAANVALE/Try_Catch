#pragma once
#define FECHA_H
#ifdef FECHA_H

class Fecha
{
private:
	int day = 1, month = 1, year = 1;
public:
	Fecha() {}
	Fecha(int _day, int _month, int _year);
	void setDay(int _day, int _month, int year);
	void setMonth(int _month);
	void setYear(int _year);
	int getDay();
	int getMonth();
	int getYear();
	bool validateDay(int _day, int _month, int year);
	bool validateLeap_year(int _year);
};

#endif // FECHA_H
