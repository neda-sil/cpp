/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:22:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/10 14:08:41 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:
		virtual const std::string	&getName(void) const = 0;
		virtual bool				getSigned(void) const;
		virtual int					getGradeToSign(void) const;
		virtual int					getGradeToExec(void) const;

		virtual void				beSigned(const Bureaucrat &signatory);
		virtual void				execute(const Bureaucrat &executor) const;

		AForm(void);
		AForm(const std::string &name, int GTS, int GTE);
		AForm(const AForm &other);
		AForm	&operator=(const AForm &other);
		virtual ~AForm(void);

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
		class	FormIsNotSigned : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

std::ostream		&operator<<(std::ostream &os, const AForm &AForm);

#endif