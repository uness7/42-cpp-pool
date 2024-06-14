#include <iostream>
#include "Harl.hpp"

int	main()
{
	Harl	harl;
	std::string	lvl = "debug";
	std::string	lvl1 = "info";
	std::string	lvl2 = "warning";
	std::string	lvl3 = "error";

	harl.complain(lvl);
	harl.complain(lvl1);
	harl.complain(lvl2);
	harl.complain(lvl3);

	return 0;
}
