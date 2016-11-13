#pragma once
#include "stdafx.h"

namespace Foo
{
	namespace Goo
	{
		const int g_x = 5;
	}
}

int cout()
{
	return 3;
}

int namespace_main()
{
	namespace combined = Foo::Goo;
	using std::cout;
	cout << combined::g_x << std::endl;
	cout << "This is ::cout output:  " << ::cout() << std::endl;
	return 0;
}