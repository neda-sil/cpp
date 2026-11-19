/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:52:04 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/19 14:32:38 by neda-sil         ###   ########.fr       */
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
T	Array<T>::operator[](int i)
{
	try
	{
		if (i < static_cast<int>(_len) || i > static_cast<int>(_len))
			throw NotAccessible();
		return _array[i];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

// Constructors and Destructors

template<typename T>
Array<T>::Array() : _len(0), _array(NULL)
{
	
}

template<typename T>
Array<T>::Array(size_t n) : _len(n), _array(new T[n])
{
	
}

template<typename T>
Array<T>::Array(const Array &other)
{
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	if (_array)
		delete[] _array;
}

// Exception

template<typename T>
const char	*Array<T>::NotAccessible::what(void) const throw()
{
	return "index is not accessible";
}
