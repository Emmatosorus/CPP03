#include <iostream>

class ClapTrap
{
    public:
        ClapTrap( std::string const & name);
        ClapTrap( ClapTrap const & c);
        ~ClapTrap();

        ClapTrap & operator=( ClapTrap const & thing );

        void    attack( const std::string & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        std::string getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

    protected:
        std::string 	name;
        unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	private:
		ClapTrap();
};