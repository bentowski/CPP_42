#include "Account.hpp"

Account::Account( int initial_deposit )
{
	return ;
}

Account::~Account( void )
{
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
	return Account::_nbWithdrawals;
}

void Account::makeDeposit( int deposit )
{
	Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_totalNbWithdrawals += 1;
}

int Account::checkAmount( void ) const
{

}

void Account::displayStatus( void ) const
{

}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
