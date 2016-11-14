#include "stdafx.h"
#include <array>
#include <cassert>
#include "myarray.h"
template <typename T1, typename T2>
T2 max(T1 x, T2 y)
{
	return x > y ? x : y;
}

template <class T>
double average(T *myarray, int nums)
{
	double tSum = 0;
	for (int nCount = 0; nCount < nums; nCount++)
		tSum += myarray[nCount];
	tSum /= static_cast<double>(nums);
	return tSum;

}





class Cents
{
private:
	int m_nCents;
public:
	Cents(int nCents)
		: m_nCents{nCents}
	{
	}
	
	template <typename T>
	friend void operator+=(T& x, Cents &c)
	{
		x += c.m_nCents;
	}

};


void template_main()
{
	using namespace std;
	cout << "This is template_main().\n";

	cout << max(3, 4) << endl;

	cout << max(3, 4.5) << endl << NEWSESSION;


	double a1[5]{ 3.0,2.5,1.3,2.7,4.4 };


	int a2[5]{ 3,8,5 };


	cout << average(a1, sizeof(a1)/sizeof(a1[0])) << endl;

	cout << average(a2, sizeof(a2) / sizeof(a2[0])) << endl << NEWSESSION;

	Cents c1[5]{ Cents{3},  Cents{ 3 }, Cents{ 3 }, Cents{ 3 }, Cents{ 6} };

	cout << average(c1, 5) << endl << NEWSESSION;

	Array<int,12> anArray;
	Array<double,12> adArray;

	for (int nCount = 0; nCount < anArray.GetLength(); nCount++)
	{
		anArray[nCount] = nCount;
		adArray[nCount] = nCount + 0.5;
	}

	for (int nCount = anArray.GetLength() - 1; nCount >= 0; nCount--)
		std::cout << anArray[nCount] << "\t" << adArray[nCount] << std::endl;
	
	anArray.print();
	adArray.print();


}




