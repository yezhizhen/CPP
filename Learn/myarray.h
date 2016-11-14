#pragma once
#include <array>
#include <cassert>
template <typename T, size_t m_length>
class Array
{
private:
	std::array<T, m_length> m_ptData;

public:

	T& operator[] (const int &nIndex);

	int GetLength()const;

	void print()const;

};

