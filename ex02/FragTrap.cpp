#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constractor called" << std::endl;
    this->Name = "Default";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constractor with parametre called" << std::endl;
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout<< "FragTrap copy constractor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap copy assignement operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives request on the standard output" << std::endl;
}
