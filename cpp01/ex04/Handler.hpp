/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handler.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:17:44 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/02 13:46:58 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLER_HPP
# define HANDLER_HPP

# include <iostream>
# include <string>
# include <fstream>

typedef std::string	str;

class Handler
{
	private:
		str		_filename;
		str		_s1;
		str		_s2;
		std::ifstream	_inFile;
		std::ofstream	_outFile;
		bool checkConditions(void);

	public:
		Handler(str filename, str s1, str s2);
		~Handler(void);
		void	replaceFromFile(void);
};

#endif