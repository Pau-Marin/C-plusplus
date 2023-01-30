#include <iostream>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	explicit Entity(int age)
		: m_Name("Unknown"), m_Age(age) {}
};

void Printentity(const Entity& entity)
{

}

int main()
{
	Printentity(Entity(27));
	Printentity(Entity("Ritsu"));

	Entity a = std::string("Ritsu");
	Entity b(27);

	std::cin.get();
}