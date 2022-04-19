#include "Fixed.hpp"

Fixed::Fixed(): _number(0) {}

Fixed::Fixed(const int num)
{
	this->_number = num << this->_bits;
}

Fixed::Fixed(const float num)
{
	this->_number = (int)roundf(num * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(this->getRawBits() + fixed.getRawBits());
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(this->getRawBits() - fixed.getRawBits());
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits((this->getRawBits() * fixed.getRawBits()) >> this->_bits);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	if (fixed.getRawBits() == 0)
		std::cerr << "Сan't divide by zero" << std::endl;
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
