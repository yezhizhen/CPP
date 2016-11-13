#include "stdafx.h"
#include <array>
#include <algorithm>
#include <vector>
void passArray(const int myarray[])
{
	std::cout << "Inside passArray function..." << myarray[0];
}

void array_main()
{
	std::cout << "This is array_main()." << std::endl;
	int a = 7;
	const int array_length = 7;
	int myarray[array_length]{ 31,24 };

	for (const auto &ele : myarray)
	{
		std::cout << ele << std::endl;
	}

	passArray(myarray);
	std::cout << NEWSESSION;

	//output: -858993460 7 times. This represents 0xcccccccc
}


void std_array_main()
{

	std::array<int, 13> std_array = { 13,61,2,7,8,1,7,4,3 };
	std_array.at(3) = 3;
	std::cout << "Length is: " << std_array.size() << "\nstd_array index 3: " << std_array[3] << NEWSESSION;

	//sort forwards
	std::sort(std_array.begin(), std_array.end());
	using namespace std;
	for (const auto &ele : std_array)
		cout << ele << endl;
	cout << NEWSESSION;
	//sort backwards
	sort(std_array.rbegin(), std_array.rend());
	for (const auto &ele : std_array)
		cout << ele << endl;
	cout << NEWSESSION;



}

void printStack(const std::vector<int> &stack)
{
	using namespace std;

	for (const auto &ele : stack)
		std::cout << ele << ' ';
	cout << "\n(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}

void vector_main()
{
	using namespace std;
	vector<int> vec = { 5,1,4,5,1,9,8 };
	vec.resize(10);
	cout << "This is vector_main().";
	cout << "The length is: " << vec.size() << endl;

	for (auto const &element : vec)
		cout <<  element << ' ' << &element << endl;


	vector<bool> bool_array{ true, false, false, true, true, true, false, false, true, false };
	cout << "\nThe length is: " << bool_array.size() << '\n';

	for (auto const &element : bool_array)
		cout << boolalpha << element << ' ' << &element << endl;


	vec = { 3,4,5 };
	cout << "After resizing, capacity: " << vec.capacity() << endl;
	cout << vec[2] << " " << vec.at(2) << endl;

}

void stack_main()
{
	using namespace std;
	cout << "This is stack_main().\n";
	
	vector<int> stack;
	stack.reserve(5);

	printStack(stack);
	
	stack.push_back(4);
	printStack(stack);

	stack.push_back(2);
	printStack(stack);

	stack.pop_back();
	
	cout << "On the top: " << stack.back() << endl;

	stack.push_back(5);
	printStack(stack);
	cout << NEWSESSION;
}