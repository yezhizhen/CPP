#pragma once
#include "stdafx.h"
void overload_main();


class Cents
{
private:
	int m_cents;
	int hiha;
public:
	explicit Cents(int cents);

	// add Cents + Cents using a friend function
	friend Cents operator+(const Cents &c1, const Cents &c2);

	// subtract Cents - Cents using a friend function
	friend Cents operator-(const Cents &c1, const Cents &c2);

	//member function overload
	void operator=(const int &value);

	int getCents() const { return m_cents; }
};

std::ostream& operator<<(std::ostream &out, const Cents &c);