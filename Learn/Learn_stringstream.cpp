#include "stdafx.h"
#include <sstream>



void stringstream_main()
{
	using namespace std; using std::cout;
	
	stringstream os{"abc"};
	
	os << 1253 << " " << "15243.2";
	cout << os.str() << endl;

	int a;
	double b;
	os >> a >> b;

	cout << "a is: " << a << ", b is: " << b << endl;

	cout << os.str() << NEWSESSION ;

	 // erase the buffer
	os.str("123");
	os.clear();

	os << "first";

	os << "Worldffffffffffff!";
	os << 1234;
	cout << os.str();


}


