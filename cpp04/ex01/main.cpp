/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/26 14:53:51 by neda-sil         ###   ########.fr       */
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
	// Dog	*dog = new Dog;
	// dog->setThought("coucou le chien");
	// std::cout << dog->getThought(0) << std::endl;
	// Dog *dog2 = new Dog(*dog);
	// Dog *dog3 = new Dog();
	// dog3 = dog;
	// std::cout << dog2->getThought(0) << std::endl;
	// std::cout << dog3->getThought(0) << std::endl;
	// // for(int i = 0;i < 100;i++)
	// // 	delete tab[i];
	// delete dog;
	// delete dog2;
	// delete dog3;

	std::cout << "la\n";
	Dog	*dog1 = new Dog;
	std::cout << "ici\n";
	// dog1->setThought("coucou1");
	Dog	*dog2 = new Dog;
	std::cout << "coucou\n";

	*dog2 = *dog1;
	std::cout << "la non\n";
	// dog2->setThought("coucou2");

	// std::cout << "1 : " << dog1->getThought(1) << "\n2 : " << dog2->getThought(1) << std::endl;

	std::cout << "c'est fini\n";
	delete dog1;
	std::cout << "c'est fini 2\n";
	delete dog2;
	return 0;
}
