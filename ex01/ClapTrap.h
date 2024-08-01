#ifndef CLAPTRAP_H
#define ClAPTRAP_H

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap( std::string name);
        ClapTrap( ClapTrap const & c);
        ~ClapTrap();

        ClapTrap & operator=( ClapTrap const & thing );

        void    attack( const std::string & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amout );
        std::string getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

    private:
        ClapTrap();
        std::string name;
        unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif