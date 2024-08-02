#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap( "" )
{
	std::cout << "ScavTrap : Default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap( name )
{
	std::cout << "ScavTrap : Constructor was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c) : ClapTrap( c )
{
	std::cout << "ScavTrap : Copy constructor was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor was called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap : " << name << " Too lazy to attack" << std::endl;
		return ;
	}
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap : " << name << " Too dead to attack" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap : " << name << " attacks " << target \
        << ", causing " << this->attackDamage << " points of damage!" \
        << std::endl;
}

void	ScavTrap::guardGate()
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap : " << name << " Too dead to gate keep" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap : " << name << " Too lazy to gate keep" << std::endl;
		return ;
	}
	std::cout << "ScavTrap : " << name << " Is now gate keeping" << std::endl;
}