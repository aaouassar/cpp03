#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap
{
    protected :
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;

    public :
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif