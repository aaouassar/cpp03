#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	FragTrap c("ayoub");
	FragTrap d("aouassar");
	ScavTrap z("ok");

	std::cout << "----------------" << std::endl;
	a.attack("B");
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.beRepaired(10);
	std::cout << "----------------" << std::endl;

	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	std::cout << "----------------" << std::endl;
	
	c.attack("aouassar");
	c.takeDamage(10);
	c.beRepaired(8);
	c.highFivesGuys();

	std::cout << "----------------" << std::endl;
	d.attack("ayoub");
	d.takeDamage(6);
	d.beRepaired(9);
	d.highFivesGuys();
	std::cout << "----------------" << std::endl;
	z.attack("walid");
	z.takeDamage(9);
	z.beRepaired(20);
	z.guardGate();
	std::cout << "----------------" << std::endl;
	return 0;
}