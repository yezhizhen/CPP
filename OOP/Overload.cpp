#include "stdafx.h"
#include "Overload.h"


Cents::Cents(int cents): m_cents{cents}
{
}


//friend def
Cents operator+(const Cents & c1, const Cents & c2)
{
	return Cents(c1.m_cents + c2.m_cents);
}

//friend def
Cents operator-(const Cents & c1, const Cents & c2)
{
	return Cents(c1.m_cents - c2.m_cents);
}

void Cents::operator=(const int & value)
{
	std::cout << "Here = is overloaded!\n";
	m_cents = value;
	std::cout << (*this);
}

std::ostream& operator<<(std::ostream &out, const Cents &c)
{
	out << "Here is overloaded <<! And " << "we have " << c.getCents() << " cents!\n";
	return out;
}



void overload_main()
{
	Cents cents1{ 6 };
	Cents cents2{ 3 };
	Cents centsSum = cents1 - cents2;
	
	std::cout << "I have " << centsSum.getCents() << " cents." << std::endl;
	std::cout << centsSum << std::endl;
	centsSum = 651;

}
