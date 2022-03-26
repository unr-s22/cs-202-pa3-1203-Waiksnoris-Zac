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

public:
	Account(const Money& obj);
	void makeDeposit(const Money& obj);
	void makeWithdrawals(const Money& obj);
	
	//Overload 
	friend std::ostream &operator<<(std::ostream &os, const Account &account){
   		os << "Account Details" << std::endl
   		<< "--------------------------" << std::endl
   		<< "Current Balance: " << "add money obj here";
   		
   		
   		return os;
   	}
 
  
};


#endif //CODE_ACCOUNT_H
