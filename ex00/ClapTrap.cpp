#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constractor called" << std::endl;
    this->Name = "Default";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constractor with parametre called" << std::endl;
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout<< "ClapTrap copy constractor called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap copy assignement operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points < 1 || Energy_points < 1)
    {
        std::cout << " ClapTrap " << Name << " can't attack " << std::endl;
        return ;
    }
    std::cout << " ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << "points of damage" << std::endl;
    Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points < 1)
    {
        std::cout << " ClapTrap " << Name << " cant't attack " << std::endl;
        return ;
    }
    std::cout << " Claptrap " << Name << " lose " << amount << std::endl;
    Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points < 1 || Hit_points < 1)
    {
        std::cout << " ClapTrap " << Name << " cant't attack " << std::endl;
        return ;
    }
    std:: cout << " ClapTrap " << Name << " take " << amount << std::endl;
    Hit_points += amount;
    Energy_points -= 1;
}

