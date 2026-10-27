/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 12:47:46 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// EXECUTE "MAKE TEST"

void	own_tests()
{
	std::cout << "\nOWN TESTS\n\nANIMALS CONSTRUCTORS\n\n";
	Dog a;
	Cat b;
	Dog c(a);
	Cat d(b);
	a = c;
	b = d;
	std::cout << "\nWRONG ANIMALS CONSTRUCTORS\n\n";
	const WrongAnimal	*cat = new WrongCat;
	const WrongCat test;
	std::cout << "\nSOUNDS TESTS\n\n";
	a.makeSound();
	b.makeSound();
	cat->makeSound();
	test.makeSound();
	std::cout << "\nDESTRUCTORS\n\n";
	delete cat;
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
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	own_tests();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0;
}
