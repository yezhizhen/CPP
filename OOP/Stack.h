#pragma once

#include <array>

class Stack
{
private:
	static const int cap = 100;
	std::array<int, cap> stack;
	int len = cap;
	
public:
	void reset();
	bool push(const int &val);
	int pop();
	void print();

};