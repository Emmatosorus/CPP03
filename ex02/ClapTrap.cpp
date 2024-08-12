#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap : Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name )
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "ClapTrap : Constructor was called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & c )
{
    this->name = c.getName();
    this->hitPoints = c.getHitPoints();
    this->energyPoints = c.getEnergyPoints();
    this->attackDamage = c.getAttackDamage();
    std::cout << "ClapTrap : Copy constructor was called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &thing)
{
	this->name = thing.getName();
	this->hitPoints = thing.getHitPoints();
	this->energyPoints = thing.getEnergyPoints();
	this->attackDamage = thing.getAttackDamage();
	std::cout << "ClapTrap : Copy assignment operator was called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : Destructor was called" << std::endl;
}

void    ClapTrap::attack( const std::string & target)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap : " << name << " couldn't attack due to lack of energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap : " << name << " couldn't attack due to lack of life" << std::endl;
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
