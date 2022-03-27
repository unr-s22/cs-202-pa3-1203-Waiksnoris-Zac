//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#ifndef CODE_ACCOUNT_H
#define CODE_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account
{
	std::vector<Money> money;
	std::vector<Money> withdraw;
	std::vector<Money> deposit;
	int numDeposit = 0;
	int numWithdraw = 0;
	int i = 0; 

public:
	
	
	

	friend class Money;
	Account(const Money& obj);
	void makeDeposit(const Money& obj);
	void makeWithdrawals(const Money& obj);
	void checkBal();
	
	//Overload 
	
	
	  friend std::ostream &operator<<(std::ostream &os, const Account &account){
   		os << "Account Details" << std::endl
   		<< "--------------------------" << std::endl
   		<< "Current Balance:" << account.money[0] << std::endl
   		<< "--------------------------" << std::endl
   		<< "Number of Deposits: "<< account.numDeposit << std::endl
   		<<"-------------------"<< std::endl;
   		for (int i=0; i<account.numDeposit; i++){
   		os << "(" << i+1 << ") " << account.deposit[i] << std::endl;
   			};
   		os << "--------------------------" << std::endl
   		<< "Number of Withdrawals: "<< account.numWithdraw << std::endl
   		<< "--------------------------" << std::endl;
   		for (int i=0; i<account.numWithdraw; i++){
   		os << "(" << i+1 << ") " << account.withdraw[i] << std::endl;
   			};
   		
   		return os;
   	}
};


#endif //CODE_ACCOUNT_H
