/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:22:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/09 15:42:14 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:
		const std::string	&getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;

		void				beSigned(const Bureaucrat &signatory);

		Form(void);
		Form(const std::string &name, int GTS, int GTE);
		Form(const Form &other);
		Form	&operator=(const Form &other);
		~Form(void);

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

std::ostream		&operator<<(std::ostream &os, const Form &form);

#endif