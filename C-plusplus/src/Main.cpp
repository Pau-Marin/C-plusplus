#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value) {
	value++;
}

int main()
{
	int a = 5;
	int b = 8;

	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	// Increment(a);

	LOG(a);
	LOG(b);

	std::cin.get();
}