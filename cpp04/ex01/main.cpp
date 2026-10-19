/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/18 14:19:13 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	own_tests()
{
	std::cout << "\nOWN TESTS\n";
	// Dog a;
	Cat b;
	// Dog c(a);
	// Cat d(b);
	// a = c;
	// b = d;
	// std::cout << std::endl;
	// WrongAnimal	*cat = new WrongCat;
	// WrongCat test;
	// cat->makeSound();
	// test.makeSound();
	// delete cat;
	b._brain->setIdea("miaou");
	std::cout << b._brain->getIdea(0);
	std::cout << std::endl;
}

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	own_tests();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0;
}
