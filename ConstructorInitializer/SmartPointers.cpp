#include <iostream>
#include <string>


class Entity
{
private:
	std::string m_Name;

public:
	Entity()
	{
		std::cout << "Create Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}


	//Entity(const std::string& name)
	//	:m_Name(name)
	//{
	//}

	//const std::string& GetName() const { return m_Name; }
};

int main02()
{
	{
		std::shared_ptr<Entity> e0;

		{

			std::shared_ptr<Entity> e1 = std::make_shared<Entity>();
			e0 = e1;
			std::cout << "I'm main02" << std::endl;

		}
	}

	std::cin.get();
	return 0;
} 