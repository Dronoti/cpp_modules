#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template < typename T, typename Container=std::stack<T> >
class MutantStack: public std::stack<T>
{
public:
	typedef	typename Container::container_type::iterator iterator;
	iterator	begin()
	{
		return this->c.begin();
	};
	iterator	end()
	{
		return this->c.end();
	};
};

#endif
