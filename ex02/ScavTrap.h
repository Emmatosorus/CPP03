#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string const & name);
		ScavTrap( ScavTrap const & s);
		~ScavTrap();

		ScavTrap & operator=( ScavTrap const & thing );

		void    attack( const std::string & target );
		void	guardGate();

	private:
		ScavTrap();

};

