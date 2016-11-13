#include "stdafx.h"

extern int g_x; // forward declaration for g_x -- g_x can be used beyond this point in this file

void global_main()
{
	std::cout << "This is global_main()." << std::endl;
	extern int g_y; // forward declaration for g_y -- g_y can be used beyond this point in main()
	
	g_x = 5;
	std::cout << g_y << std::endl; // should print 2

}