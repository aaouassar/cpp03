#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constractor called" << std::endl;
    this->Name = "Default";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constractor with parametre called" << std::endl;
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout<< "ScavTrap copy constractor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap copy assignement operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points < 1 || Energy_points < 1)
    {
        std::cout << " ScavTrap " << Name << " can't attack " << std::endl;
        return ;
    }
    std::cout << " ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << "points of damage" << std::endl;
    Energy_points -= 1;
}

void ScavTrap:: guardGate()
{
    std::cout << " ScavTrap " << Name << " is now in Gate keeper mode " << std::endl;
}