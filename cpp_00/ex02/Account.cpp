// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.hpp"

//[19920104_091532] index:0;amount:42;created
Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_nbAccounts ++;
	_amount += initial_deposit;
	_totalAmount += _amount;
	std::cout<<"TIMESTAMP index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

//[19920104_091532] index:0;amount:47;closed
~Account( void ){
	std::cout<<"TIMESTAMP index:"<<_accountIndex<<";amount:"<<_amount<<"closed"<<srd::endl;
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
	std::cout<<"TIMESTAMP accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"
	<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
};

//non static methods

//[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
void	makeDeposit( int deposit ){
	int sum = _amount + deposit;
	_nbDeposits ++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout<<"TIMESTAMP index:"<<_accountIndex<<";"<<"p_amount"<<_amount<<";deposit:"<<deposit<<"amount:"<<sum<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	makeWithdrawal( int withdrawal ){
	
	if (withdrawal > _amount){
		std::cout<<"TIMESTAMP index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	else{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		int sub = _amount - withdrawal;
		std::cout<<"TIMESTAMP index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:"<<sub<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		_amount = sub;
		_totalAmount -= withdrawal;
		return (true);
	}
}

// int		checkAmount( void ) const;
// void	displayStatus( void ) const;



// int main(void)
// {
// 	std::cout << "Inital Stage Count: " << Account::getNbAccounts() << std::endl;
// 	return (0);
// }


