#include "Fixed.hpp"

Fixed::Fixed(): _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = num << this->_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = (int)roundf(num * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

int		Fixed::getRawBits() const
{
	return (this->_number);
}

void	Fixed::setRawBits(const int raw)
{
	this->_number = raw;
}

float	Fixed::toFloat() const
{
	return (this->_number / (float)(1 << this->_bits));
}

int		Fixed::toInt() const
{
	return (this->_number >> this->_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
