#include "ClapTrap.h"

int main( void )
{
    ClapTrap steve("Steve");
    ClapTrap alex("Alex");

	std::cout << std::endl;

    steve.attack( "Alex" );
	alex.takeDamage( 5 );
	alex.attack( "Steve" );
	steve.takeDamage( 6 );
	steve.beRepaired( 2 );
	alex.attack( "Steve");
	steve.takeDamage( 8 );
	steve.beRepaired( 2 );

	std::cout << std::endl;

	ClapTrap steve2( "Bob" );
	steve2 = steve;
	steve2.beRepaired(5);

	std::cout << std::endl;
}