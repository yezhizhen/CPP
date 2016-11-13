#include "stdafx.h"


void pointer_main()
{
	std::cout << "This is pointer_main()." << std::endl;
	int i_ptr = 5;
	int *ptr = &i_ptr;
	//show pointer size
	std::cout << "My pointer size is " << sizeof(ptr) << std::endl;

	int *nextptr = nullptr;

	if (nextptr)
		std::cout << "nextptr is not null." << std::endl << NEWSESSION;
	else
		std::cout << "nextptr is null." << std::endl << NEWSESSION;

	using namespace std;

	int *dyn_int = new int{ 7 };

	cout << "Before delete address: " << dyn_int << ", value: " << *dyn_int << endl;

	delete dyn_int; //Free the memory pointed to
	cout << "After delete address: " << dyn_int << endl;
	dyn_int = nullptr;

	int *dyn_arr = new int[135]{ 1,2,3,4,5 };

	for (int i = 0; i < 135; i++)
	{
		cout << i << "-th element: " << dyn_arr[i] << endl;
	}
	cout << NEWSESSION;
	

	delete[] dyn_arr;

	dyn_arr = nullptr;

	int* const cons_ptr = &i_ptr;

	int &ref = i_ptr;

	ref = *cons_ptr;

	/*free(dyn_int);
	cout << "Before delete address: " << dyn_int << ", value: " << *dyn_int << endl;
	*/
}