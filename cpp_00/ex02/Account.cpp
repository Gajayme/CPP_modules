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

// static int	getNbAccounts( void );
// 	static int	getTotalAmount( void );
// 	static int	getNbDeposits( void );
// 	static int	getNbWithdrawals( void );
// 	static void	displayAccountsInfos( void );

int Account::getNbAccounts(){
	return(_nbAccounts);
}

int Account::getTotalAmount(){
	return(_totalAmount);
}

int Account::getNbDeposits(){
	return(_nbDeposits);
}

// int main(void)
// {
// 	std::cout << "Inital Stage Count: " << Account::getNbAccounts() << std::endl;
// 	return (0);
// }


