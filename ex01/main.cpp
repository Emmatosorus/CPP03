#include "ScavTrap.h"

int main( void )
{
	ScavTrap s("Steve");
	std::cout << std::endl;
	ClapTrap b("Bob");

	std::cout << std::endl;

	s.attack("Bob" );
	b.takeDamage( 20 );
	b.beRepaired( 20 );
	b.attack( "Steve" );
	s.takeDamage( 20 );
	b.attack( "Steve" );
	b.attack( "Steve" );
	b.attack( "Steve" );
	b.attack( "Steve" );
	b.attack( "Steve" );
	s.takeDamage( 100 );
	s.beRepaired( 20 );
	s.guardGate();

	std::cout << std::endl;

}