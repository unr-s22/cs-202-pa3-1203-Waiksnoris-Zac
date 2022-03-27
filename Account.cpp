//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#include "Account.h"

Account::Account(const Money& obj){
	money.push_back(obj);

}

void Account::makeDeposit(const Money& obj){
	deposit.push_back(obj);
	numDeposit++;
}

void Account::makeWithdrawals(const Money& obj){
	withdraw.push_back(obj);
	numWithdraw++;
	
}

