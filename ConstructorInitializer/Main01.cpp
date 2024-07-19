#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;

public:
	Entity()
		: m_Name("UnKnown"){}

	Entity(const std::string& name)
		:m_Name(name)
	{
	}

	const std::string& GetName() const { return m_Name; }
};
int main01()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Aiden");
	std::cout << e1.GetName() << std::endl;

	std::cout << "I'm main01" << std::endl;
	std::cin.get();

	return 0;
}