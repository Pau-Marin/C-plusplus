#include <iostream>

#include "Log.h"

int main()
{
	for (int i = 0; i < 5; i++) {
		if ((i + 1) % 2 == 0)
			return 0;
		Log("Hello World!");
		std::cout << i << std::endl;
	}

	return 0;
}