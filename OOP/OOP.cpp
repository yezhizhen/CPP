// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include "Stack.h"
#include "Overload.h"
void inheritance_main();

class DateClass
{
	int m_year;

	int m_month;

	int m_day;
	
	const int m_f;

public:
	
	DateClass(const int &f, const int &month, const int &day, const int &year = 4) : m_f(f), m_month{ month }, m_year{ year },m_day{day}
	{
		
	}

	void print();
};


int main()
{
	DateClass today(11, 12, 2016);

	today.print();

	Stack stack;
	stack.reset();
	stack.print();
	for(int i=0; i<10; i++)
		stack.push(i);
	stack.print();

	std::cout << NEWSESSION;

	overload_main();
	std::cout << NEWSESSION;

	inheritance_main();
	std::cout << NEWSESSION;


}



void DateClass::print()
{
	std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
}
