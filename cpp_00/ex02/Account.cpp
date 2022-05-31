// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>

//[19920104_091532] index:0;amount:42;created
Account::Account( int initial_deposit ){
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts ++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

//static var and methods

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int Account::getNbAccounts(){
	return(_nbAccounts);
}

int Account::getTotalAmount(){
	return(_totalAmount);
}

int Account::getNbDeposits(){
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return(_totalNbWithdrawals);
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout<<" accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"
	<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
};

//[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
void	Account::makeDeposit( int deposit ){
	int sum = _amount + deposit;
	_nbDeposits ++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";"<<"p_amount:"<<_amount<<";deposit:"<<deposit<<";amount:"<<sum<<";nb_deposits:"<<_nbDeposits<<std::endl;
	_amount = sum;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal ){
	
	if (withdrawal > _amount){
		_displayTimestamp();
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	else{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		int sub = _amount - withdrawal;
		_displayTimestamp();
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:"<<sub<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		_amount = sub;
		_totalAmount -= withdrawal;
		return (true);
	}
}

// int		Account::checkAmount( void ) const{
// 	_displayTimestamp();
// 	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
// }

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp( void ){	
	const int MAXLEN = 80;
    char s[MAXLEN];
    time_t t = time(0);
    strftime(s, MAXLEN, "[%Y%m%d_%H%M%S]", localtime(&t));
    std::cout << s;
}
