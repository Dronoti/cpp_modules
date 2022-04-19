#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T				*_arr;
	unsigned int	_n;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &array);
	~Array();
	Array				&operator=(const Array &array);
	unsigned int		size() const;
	T					&operator[](int i) const;
};

template <typename T>
Array<T>::Array(): _arr(NULL), _n(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _n(n) {}

template <typename T>
Array<T>::Array(const Array &array): _arr(new T[array._n]), _n(array._n)
{
	for (unsigned int i = 0; i < array._n; i++)
		this->_arr[i] = array._arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &array)
{
	for (unsigned int i = 0; i < array._n && i < this->_n; i++)
		this->_arr[i] = array._arr[i];
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_n);
}

template <typename T>
T	&Array<T>::operator[](int i) const
{
	if (i < 0 || (unsigned int)i >= this->_n)
		throw std::out_of_range("Index out of range");
	return (this->_arr[i]);
}

template <typename T>
std::ostream	&operator<<(std::ostream &out, const Array<T> &array)
{
	out << "Array = [ ";
	for (unsigned int i = 0; i < array.size(); i++)
		out << array[i] << " ";
	out << "]";
	return (out);
}

#endif
