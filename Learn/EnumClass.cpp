#include "stdafx.h"

enum class Color
{
	RED,
	GREEN,
	BLUE
};

enum class Fruit
{
	BANANA,
	APPLE
};

void enum_main()
{

	Color mycolor{ Color::RED };
	Fruit myfruit{ Fruit::APPLE };

	if ((mycolor == Color::RED) && 3>2)
		std::cout << "This is enum_main().\n Match found. Hiha!" << std::endl << NEWSESSION;

}