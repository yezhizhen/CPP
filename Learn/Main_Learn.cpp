// Learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "global_main.h"
#include "namespace.h"
#include "general_inclusion.h"
#include "myStruct.h"
#include <cassert>
#include <iomanip>

using validateFcn = bool(*)(int, int);

void struct_main()
{

	using std::cout;
	
	extern Employee joe;
	cout << "Before change. joe's age is: " << joe.age;
	
	joe.age = 3;
	cout << "\nAfter change. joe's age is: " << joe.age << NEWSESSION;

	


}

// Definition of main()
int main(int argc, char* argv[])
{
	using std::string;
	if ("" == string(argv[1]))
	{
		std::cout << "Normal mode\n";

		int x{ 5 }, y{ 7 };
		std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;

		const auto c{ 'a' };
		std::cout << int(c) << std::endl;

		const auto a = 3 > 5 ? 3 : 5;
		std::cout << a << std::endl;

		unsigned int t = 4;
		t <<= 1; // use operator<< for left shift
		std::cout << t << std::endl << "----------------------\n"; // use operator<< for output
		print_g_x();
		global_main();
		print_g_x();
		std::cout << "pi now is " << Constants::pi << std::endl << "------------------\n";

		namespace_main();

		int i = 69;
		char ch = static_cast<char>(i);

		std::cout << ch << "\n" << NEWSESSION;

		stringmain();
		enum_main();
		typedef_main();

		struct_main();

		array_main();
		pointer_main();

		std_array_main();
		vector_main();

		//Print function pointers
		std::cout << "Function address is: " << main << NEWSESSION;
		stack_main();
	}
	else if("io" == string(argv[1]))
	{
		using namespace std; using std::cout;
		cout << "I/O module" << endl;
		
		cout << "Enter your age: " << endl;

		// Then we'll use the extraction operator on cin to get input from the user
		int nAge;
		cin >> nAge;

		if (nAge <= 0)
		{
			// In this case we'll use the insertion operatior on cerr to print an error message
			cerr << "Oops, you entered an invalid age!" << endl;
			exit(1);
		}

		// Otherwise we'll use insertion again on cout to print a result
		cout << "You entered " << nAge << " years old" << endl << NEWSESSION;

		cout << "Buffer size 10."<< endl;
		char buf[10];
		cin >> setw(10) >> buf;
		cout << buf << NEWSESSION;
		cin.ignore(4141,'\n');
		char strBuf[11];
		char ch;

		
		// Read up to 10 characters
		cin.getline(strBuf, 11);
		cout << strBuf << endl;

		// Read up to 10 more characters
		cin.getline(strBuf, 11);
		cout << strBuf << endl;
		
		cout.setf(ios::showpos); // turn on the ios::showpos flag
		cout << 27 << endl;
		cout.unsetf(ios::showpos); // turn off the ios::showpos flag
		cout << 28 << endl;

		cout << hex << 27 << endl;
		cout << 27 << endl;
		cout << dec<< 27 << endl;

		stringstream_main();

	}
	else if ("file_io" == string(argv[1]))
	{
		file_main();
	}

}


