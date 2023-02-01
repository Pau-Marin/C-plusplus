#include <iostream>

class Entity
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_Obj;
	}


	Entity* operator->() { return m_Obj; }

	const Entity* operator->() const { return m_Obj; }
};

struct Vector3
{
	float x, y, z;
};

int main()
{
	const ScopedPtr entity = new Entity();
	entity->Print();

	int offset = (int)&((Vector3*)nullptr)->y;
	std::cout << offset << std::endl;

	std::cin.get();
}