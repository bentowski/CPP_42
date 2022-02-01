/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:07 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/01 23:51:45 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ): _accountIndex(Account::_nbAccounts),_amount(initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout <<"created";
	std::cout << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += checkAmount();
	return ;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout <<"closed";
	std::cout << std::endl;
	return ;
}

int Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);

	tm *ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon < 10)
		std::cout << "0" << 1 + ltm->tm_mon;
	else
		std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0" << ltm->tm_mday;
	else
		std::cout << ltm->tm_mday;
	std::cout << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0" << ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0" << ltm->tm_sec;
	else
		std::cout << ltm->tm_sec;
	std::cout << "] ";
}

void Account::makeDeposit( int deposit )
{
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if (withdrawal <= this->checkAmount())
	{
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;

		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << checkAmount() + withdrawal << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return 1;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << checkAmount() << ";";
		std::cout << "withdrawal:refused";
		std::cout << std::endl;
		return 0;
	}
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

int Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
