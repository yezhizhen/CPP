// Bitwise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <iostream>
#include "bitmask.h"
// Note that with std::bitset, our options correspond to bit numbers, not bit patterns
const int option_0{ 0 };
const int option_1{ 1 };
const int option_2{ 2 };
const int option_3{ 3 };
const int option_4{ 4 };
const int option_5{ 5 };
const int option_6{ 6 };
const int option_7{ 7 };


int main()
{
	std::bitset<8> bits(0x2); // we need 8 bits, start with bit pattern 0000 0010
	bits.set(option_5); // set bit 5 to 1 (now we have 0010 0010)
	bits.flip(option_6); // flip bit 6 (now we have 0110 0010)
	bits.reset(option_6); // set bit 6 back to 0 (now we have 0010 0010)

	std::cout << "Bit 5 has value: " << bits.test(option_5) << '\n';  //1
	std::cout << "Bit 6 has value: " << bits.test(option_6) << '\n';  //0
	std::cout << "All the bits: " << bits << '\n';



	mask();
	color();

	return 0;
}

