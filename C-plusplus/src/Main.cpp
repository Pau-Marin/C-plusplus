#include <iostream>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};

int main()
{
	{
		std::weak_ptr<Entity> e0;
		{
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
	}

	std::cin.get();
}