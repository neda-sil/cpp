/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:52:04 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/20 18:21:10 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Other functions

template<typename T>
size_t	Array<T>::size(void)
{
	return _len;
}

// Operators

template<typename T>
T	&Array<T>::operator[](size_t i)
{
	if (i >= _len)
		throw NotAccessible();
	return _array[i];
}

template<typename T>
const T	&Array<T>::operator[](size_t i) const
{
	if (i >= _len)
		throw NotAccessible();
	return _array[i];
}

// Constructors and Destructors

template<typename T>
Array<T>::Array() : _len(0), _array(NULL)
{
	
}

template<typename T>
Array<T>::Array(size_t n) : _len(n), _array(new T[n]())
{
	
}

template<typename T>
Array<T>::Array(const Array &other)
{
	_array = new T[other._len];
	for(size_t i = 0;i<other._len;i++)
		this->_array[i] = other._array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		for(size_t i = 0;i<other._len;i++)
			this->_array[i] = other._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{

}

// Exception

template<typename T>
const char	*Array<T>::NotAccessible::what(void) const throw()
{
	return "index is not accessible";
}
