#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap( "" )
{
	std::cout << "FragTrap : Default constructor was called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap( name )
{
	std::cout << "FragTrap : Constructor was called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor was called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &f) : ClapTrap( f )
{
	std::cout << "FragTrap : Copy constructor was called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &thing)
{
	this->name = thing.getName();
	this->hitPoints = thing.getHitPoints();
	this->energyPoints = thing.getEnergyPoints();
	this->attackDamage = thing.getAttackDamage();
	std::cout << "FragTrap : Copy assignment operator was called" << std::endl;
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "FragTrap : " << name << " Too lazy to attack" << std::endl;
		return ;
	}
	if (hitPoints <= 0)
	{
		std::cout << "FragTrap : " << name << " Too dead to attack" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "FragTrap : " << name << " attacks " << target \
        << ", causing " << this->attackDamage << " points of damage!" \
        << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "High Five!!" << std::endl;
}