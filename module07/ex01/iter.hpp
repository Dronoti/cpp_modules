#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *ptr, int len, void f(T&))
{
	for (int i = 0; i < len; i++)
		f(ptr[i]);
}

#endif
