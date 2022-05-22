#pragma once
#define INCREMENTDAY_H
#ifdef INCREMENTDAY_H
class IncrementDay
{
public:
	int day;
	IncrementDay(int _day) {
		this->day = _day;
	}

	IncrementDay& operator++() {
		++day;
		return *this;
	}

	IncrementDay& operator--() {
		--day;
		return *this;
	}

	int getDay() {
		return day;
	}
};

#endif // INCREMENTDAY_H



