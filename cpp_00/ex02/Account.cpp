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

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

//1-8 strings in log file are constructors output

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

void	Account::displayAccountsInfos(){
	std::cout<<"TIMESTAMP"<<" "<<"accounts:"<<index<<";"<<"total:"<<_totalAmount<<";"<<"deposits:"
	<<_totalNbDeposits<<";"<<"withdrawals:"<<_totalNbWithdrawals<<std::endl;
};

//crtr
Account( int initial_deposit );
//drctr
~Account( void );

// int main(void)
// {
// 	std::cout << "Inital Stage Count: " << Account::getNbAccounts() << std::endl;
// 	return (0);
// }


