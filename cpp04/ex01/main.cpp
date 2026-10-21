/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/20 16:14:03 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	own_tests()
{
	
}

int	main(void)
{
	// Animal	*tab[100];

	// for(int i = 0;i < 100;i++)
	// {
	// 	if (i < 50)
	// 		tab[i] = new Dog();
	// 	else
	// 		tab[i] = new Cat();
	// }
	// Cat	cat;
	// cat.setThought("coucou");
	// std::cout << cat.getThought(0) << std::endl;
	// Cat cat2 = cat;
	// std::cout << cat.getThought(0) << std::endl;
	Dog	dog;
	dog.setThought("coucou le chien");
	std::cout << dog.getThought(0) << std::endl;
	Dog dog2(dog);
	std::cout << dog.getThought(0) << std::endl;
	for(int i = 0;i < 100;i++)
	// 	delete tab[i];
	return 0;
}
