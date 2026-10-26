/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/26 20:53:50 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// YOU CAN DO "MAKE TEST" TO READ THE OUTPUT IN A FILE INSTEAD OF THE TERMINAL

void	print_animals(Animal **tab)
{
	for (int i=0;i < 100;i++)
	{
		std::cout << "Animal " << i << ": ";
		tab[i]->makeSound();
		std::cout << "\n";
		
	}
	std::cout << "\n__________________________________________\n\n";
}

int	main(void)
{
	Animal	*tab[100];
	std::cout << "\n__________________________________________\n\n";

	for(int i = 0;i < 100;i++)
	{
		if (i < 50)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	std::cout << "\n__________________________________________\n\n";
	Cat	cat;
	cat.setThought("coucou");
	std::cout << cat.getThought(0) << std::endl;
	Cat cat2 = cat;
	std::cout << cat.getThought(0) << std::endl;
	std::cout << "\n__________________________________________\n\n";
	Dog	*dog = new Dog;
	dog->setThought("coucou le chien");
	std::cout << dog->getThought(0) << std::endl;
	std::cout << "\n__________________________________________\n\n";
	Dog *dog2 = new Dog(*dog);
	Dog *dog3 = new Dog();
	*dog3 = *dog;
	std::cout << "\n__________________________________________\n\n";
	std::cout << dog2->getThought(0) << std::endl;
	std::cout << dog3->getThought(0) << std::endl;
	dog2->setThought("bwarf");
	std::cout << dog2->getThought(1) << std::endl;
	std::cout << dog->getThought(1) << std::endl;
	dog->setThought("hihi hou");
	std::cout << dog->getThought(1) << std::endl;
	std::cout << dog2->getThought(1) << std::endl;
	std::cout << "\n__________________________________________\n\n";
	print_animals(tab);
	for(int i = 0;i < 100;i++)
		delete tab[i];
	std::cout << "\n__________________________________________\n\n";
	delete dog;
	delete dog2;
	delete dog3;
	std::cout << "\n__________________________________________\n\n";
	std::cout << "Every thoughts taken test:" << std::endl;
	Dog	*thoughts = new Dog();
	for(int i = 0;i < 105;i++)
		thoughts->setThought("test");
	std::cout << "\n";
	for (int i = 0;i < 105;i++)
		std::cout << thoughts->getThought(i) << std::endl;
	std::cout << "\n";
	std::cout << thoughts->getThought(-1) << std::endl;
	std::cout << "\n__________________________________________\n\n";
	delete thoughts;
}
