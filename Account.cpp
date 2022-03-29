//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#include "Account.h"

Account::Account(const Money& obj){

	money.push_back(obj);
	numMon++;
}

void Account::makeDeposit(const Money& obj){
	
	deposit.push_back(obj);
	numDeposit++;
	numDeposit2++;
	reCalc = true;

}

void Account::makeWithdrawals(const Money& obj){
	withdraw.push_back(obj);
	numWithdraw++;
	numWithdraw2++;
	reCalc = true;
}

void Account::CalculateBalance() {
	
	for (int i = 0; i<numDeposit2; i++){
		money.push_back(money[money.size()-1]+deposit[i]);
	}
	
	for (int i =0; i<numWithdraw2; i++){
		money.push_back(money[money.size()-1]-withdraw[i]);
	}
	
	numDeposit2=0;
	numWithdraw2 = 0;
	reCalc = false;
}





