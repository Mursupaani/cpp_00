#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0)
{
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	if (_nbAccounts == 0)
		return ;
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount (void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:"
		<< _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(0);
	std::tm		*time = std::localtime(&now);
	char		str[128];

	std::strftime(str, 128, "[%Y%m%d_%H%M%S] ", time);
	std::cout << str;
}
