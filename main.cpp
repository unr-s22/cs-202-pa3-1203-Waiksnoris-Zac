//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#include "Money.h"
#include "Account.h"

int main() {
	
	Money m(300,23);
	Account account(m);
	
	Money d1(200,00);
	account.makeDeposit(d1);
	Money d2(300, 24);
	account.makeDeposit(d2);
	Money d3(501,22);
	account.makeDeposit(d3);
	
	Money w1(300,10);
	account.makeWithdrawals(w1);
	Money w2(201,34);
	account.makeWithdrawals(w2);

	std::cout << account << std::endl;
	
	
	
	return  0;
}
