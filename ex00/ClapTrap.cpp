#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap( std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Constructor was called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & c )
{
    this->name = c.getName();
    this->hitPoints = c.getHitPoints();
    this->energyPoints = c.getEnergyPoints();
    this->attackDamage = c.getAttackDamage();
    std::cout << "Copy constructor was called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called" << std::endl;
}

void    ClapTrap::attack( const std::string & target)
{
    if (energyPoints == 0)
    {
        std::cout << "Couldn't attack due to lack of energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "Couldn't attack due to lack of life" << std::endl;
        return ;
    }
    this->energyPoints--;
    std::cout << "ClapTrap : " << name << " attacks " << target \
        << ", causing " << this->attackDamage << " points of damage!" \
        << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap : " << this->name << " is already dead!" << std::endl;
		return ;
	}
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
    	this->hitPoints -= amount;
    std::cout << "ClapTrap : " << this->name << " loses " << amount \
        << " hit points and is left with " << this->hitPoints << " hit points!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap : " << name << " couldn't repaire due to lack of energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap : " << name << " couldn't repaire due to lack of life" << std::endl;
        return ;
    }
    this->hitPoints += amount;
    this->energyPoints--;
    std::cout << "ClapTrap : " << this->name << " repaires " << amount \
        << " parts and now has " << this->hitPoints << " hit points!" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
    return (this->name);
}

unsigned int ClapTrap::getHitPoints( void ) const
{
    return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints( void ) const
{
    return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage( void ) const
{
    return (this->attackDamage);
}
