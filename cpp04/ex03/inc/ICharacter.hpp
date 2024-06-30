#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

/*
 * DEFINITIONS :
 *
 * - An interface is a ref type in OOP that can only contain abstract methods.
 * - It defines a contract that derived classes must adhere to.
 *
 * MEMBERS & ATTRIBUTES :
 *
 * - No constructors
 * - Cannot have instance fields
 * - Only abstract methods
 *
 * */

class ICharacter
{
	private:
		std::string	m_name;
	public:
		virtual 			~ICharacter( void ) {} 
		virtual std::string& const 	getName() const = 0 ;
		virtual void 			equip(AMateria *m) = 0 ;
		virtual void 			unequip(int idx) = 0 ;
		virtual void 			use(int idx, ICharacter& target) = 0 ;
};

#endif
