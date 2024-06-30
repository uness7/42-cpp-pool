#include "Ice.hpp"

Ice::Ice( void )
{
        AMeteria("ice");
        std::cout << "Ice Default Constructor was called" << std::endl;
}

Ice::Ice( const Ice &copy )
{
        std::cout << "Ice Copy Constructor was called" << std::endl;
        *this = copy;
}

Ice&   Ice::operator=( const Ice &copy )
{
        std::cout << "Ice Assignment operator was called" << std::endl;
        if (this != &copy)
        {
                this->m_type = copy.m_type;
        }
        return *this;
}

Ice::~Ice( void )
{
        std::cout << "Ice Destructor was called" << std::endl;
}

