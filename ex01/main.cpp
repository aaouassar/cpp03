#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("A");
	ClapTrap b("B");
	ScavTrap c("ayoub");
	ScavTrap d("aouassar");

	std::cout << "----------------" << std::endl;
	a.attack("B");
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.beRepaired(10);
	std::cout << "----------------" << std::endl;
	b.takeDamage(5);
	b.beRepaired(3);
	c.attack("A");
	std::cout << "----------------" << std::endl;
	c.guardGate();
	std::cout << "----------------" << std::endl;
	d.guardGate();
	return 0;
}