#include "stdafx.h"

#include <string>

void stringmain()
{
	using namespace std;
	string myName{ "Euclid" };
	cout << "This is stringmain().\n Myname is " << myName << endl;
	int age;
	cout << "Type your age:  " << endl;
	cin >> age;
	cout << "Your age is: " << age << endl;
	cin.ignore(32767, '\n');
	cout << "Type your name: ";
	string yourName;
	

	getline(cin, yourName);


	cout << "Your name is " << yourName << ", with length " << yourName.length() << NEWSESSION ;




}