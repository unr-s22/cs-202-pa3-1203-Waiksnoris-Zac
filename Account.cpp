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
void Account::checkBal(){
	for(i=0;numDeposit != i; i++){
		money[0] = money[0] - withdraw[i];


	}
	numDeposit = 0;

	for(i=0;numWithdraw != i; i++){
		money[0] = money[0] + deposit[i];
	}
	numWithdraw = 0;
	}
