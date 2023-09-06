#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("A");
	ClapTrap b("B");

	a.attack("B");
	a.takeDamage(10);
	a.beRepaired(10);

	std::cout << "----------------" << std::endl;

	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	return (0);

}