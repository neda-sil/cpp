/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:05:05 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/26 21:30:56 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm* local = std::localtime(&now);
	char	buff[20];
	std::strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", local);
	std::cout << "[" << buff << "] ";
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() <<
				 ";total:" << Account::getTotalAmount() <<
				 ";deposits:" << Account::getNbDeposits() <<
				 ";withdrawals:" << Account::getNbWithdrawals() <<
				 std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";amount:" << this->_amount <<
				 ";deposits:" << this->_nbDeposits <<
				 ";withdrawals:" << this->_nbWithdrawals <<
				 std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount = deposit;

	Account::_totalNbDeposits++;
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";p_amount:" << this->_amount;

	Account::_totalAmount += deposit;

	std::cout << ";deposit:" << deposit <<
				 ";amount:" << this->_amount <<
				 ";nb_deposits:" << this->_nbDeposits <<
				 std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";p_amount:" << this->_amount;

	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal <<
				 ";amount:" << this->_amount <<
				 "nb_withdrawals:" << Account::_totalNbWithdrawals <<
				 std::endl;
	return true;
}

Account::Account(int initial_deposit)
{
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	
	this->_accountIndex = Account::getNbAccounts() - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";amount:" << this->_amount <<
				 ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";amount:" << this->_amount <<
				 ";closed" << std::endl;
}
