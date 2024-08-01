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
        int         getHitPoints( void ) const;
        int         getEnergyPoints( void ) const;
        int         getAttackDamage( void ) const;

    private:
        ClapTrap();
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
};