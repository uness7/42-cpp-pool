#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void	Harl::debug() {
	std::cout << "Debug level" << std::endl;
}

void	Harl::info() {
	std::cout << "Info level" << std::endl;
}

void	Harl::warning() {
	std::cout << "Warning level" << std::endl;
}

void	Harl::error() {
	std::cout << "error level" << std::endl;
}

void	Harl::complain( std::string& level )
{
	void (Harl::*fn[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*fn[i])();
			return ;
		}
	}
}
