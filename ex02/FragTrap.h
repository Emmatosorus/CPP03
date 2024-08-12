#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string const & name );
		FragTrap( FragTrap const & f );
		~FragTrap();

		FragTrap & operator=( FragTrap const & thing );

		void    attack( const std::string & target );
		void	highFivesGuys( void );

	private:
		FragTrap();
};
