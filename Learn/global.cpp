#include "stdafx.h"
// define two global variables
extern int g_x{ 3 };
extern int g_y(2);
// in this file, g_x and g_y can be used anywhere beyond this point



namespace Constants
{
	// actual global variables
	extern const double pi(3.14159);
	extern const double avogadro(6.0221413e23);
	extern const double my_gravity(9.2); // m/s^2 -- gravity is light on this planet
}

void print_g_x()
{
	std::cout << "g_x now is " << g_x << std::endl;
	

}