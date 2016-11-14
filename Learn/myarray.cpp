#include "stdafx.h"
#include "myarray.h"

template<typename T, size_t m_length>
T & Array<T, m_length>::operator[](const int & nIndex) 
{
	assert(nIndex < m_length);
	return m_ptData[nIndex];
}

template<typename T, size_t m_length>
int Array<T, m_length>::GetLength() const
{
	return m_length;
}

template<typename T, size_t m_length>
void Array<T, m_length>::print() const
{
	std::cout << "\nStart printing...\n";
	for (const auto &ele : m_ptData)
		std::cout << ele << " ";
}

// Dangerous code. Partial specilization not allowed.
/*
template<>
void Array<double, 12>::print() const
{
	std::cout << "Oh my god! This is double array!!!!!!!!!\n";
	std::cout << "\nStart printing...\n";
	for (const auto &ele : m_ptData)
		std::cout << ele << " ";
}
*/