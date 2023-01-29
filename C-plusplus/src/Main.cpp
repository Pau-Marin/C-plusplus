#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
	using namespace std::string_literals;

	std::u32string name0 = U"Ritsu"s + U" hello";

	const char* example = R"(Line1
Line2
Line3
Line4)";

	const char* name = "Ritsu";
	const wchar_t* name2 = L"Ritsu";

	const char16_t* name3 = u"Ritsu";
	const char32_t* name4 = U"Ritsu";

	std::cout << name << std::endl;
	std::cin.get();
}