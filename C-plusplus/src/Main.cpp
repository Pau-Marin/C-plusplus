#include <iostream>

#include "Log.h"

int main()
{
	// for (;;) {} -> Infinite loop

	/*
	 * Perfectly valid for loop
	 *
	 * int i = 0;
	 * bool condition = true;
	 *
	 * for (; condition; ) {
	 *	Log("Hello World!");
	 *	i++;
	 *	if (!(i < 5)) {
	 *		condition = false;
	 *	}
	 * }
	 */

	for (int i = 0; i < 5; i++) { // Perfectly valid for loop
		Log("For Hello World!");
	}

	Log("============================");

	// int i = 0;
	// while (i < 5) {
	bool condition = false;
	while (condition) {
		Log("While Hello World!");
		// i++;
	}

	Log("============================");

	do {
		Log("Do while Hello World!");
	} while (condition);

	std::cin.get();
}