#include "stdafx.h"
#include "Stack.h"
#include <cassert>

//const int Stack::cap = 101;

void Stack::reset()
{
	len = 0;
	for (auto &ele : stack)
		ele = 0;
}

bool Stack::push(const int &val)
{
	if (len >= cap)
		return false;
	stack[len++] = val;
	return true;
}

int Stack::pop()
{
	assert(len >= 0);
	return stack[--len];
}

void Stack::print()
{
	std::cout << "( ";
	for (int i = 0; i < len; ++i)
		std::cout << stack[i] << ' ' ;
	std::cout << ")\n";
}