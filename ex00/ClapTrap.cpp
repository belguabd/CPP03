#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {};

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
    }
    else
        std::cout << "ClapTrap " << _name << " cannot attack because it has no energy or hit points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        if (_hitPoints >= amount)
            _hitPoints = 0;
        else
            _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy left to repair!" << std::endl;
}