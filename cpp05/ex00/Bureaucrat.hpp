/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:20 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/07 17:18:49 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		const std::string	&getName(void) const;
		int					getGrade(void) const;

		void				incrGrade(void);
		void				decrGrade(void);

		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		~Bureaucrat(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

std::ostream		&operator<<(std::ostream &os, const Bureaucrat &brcrt);

#endif