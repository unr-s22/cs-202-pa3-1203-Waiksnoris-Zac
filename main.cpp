//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#include "Money.h"
#include "Account.h"

int main() {
	
	
	Money m(300,23);
	Account account(m);
	
	std::cout << account << std::endl;
	
	Money a(200,00);
	Money b(300,24);
	Money c(501,22);
	account.makeDeposit(a);
	account.makeDeposit(b);
	account.makeDeposit(c);
	std::cout << account << std::endl;
	Money d(300,10);
	Money f(201,34);
	account.makeWithdrawals(d);
	account.makeWithdrawals(f);
	
	std::cout << account << std::endl;

//Checking Relational Operations per instructions 
	std::cout << "Checking Relational Operators" << std::endl;

	Money t(100,15);
	Money s(120,18);

	if(s > t){
		std::cout << s << " is greater than " << t << std::endl;
	}else {
		std::cout << s << " is not greater than " << t <<std::endl;
	}

	if(s < t){
		std::cout << s << " is less than " << t << std::endl;
	}else {
		std::cout << s << " is not less than " << t <<std::endl;
	}

	if(s >= t){
		std::cout << s << " is greater than or equal to " << t << std::endl;
	}else {
		std::cout << s << " is not greater than or equal to " << t <<std::endl;
	}

	if(s <= t){
		std::cout << s << " is less than or equal to " << t << std::endl;
	}else {
		std::cout << s << " is not less than or equal to " << t <<std::endl;
	}

	Money r(400,15);
	Money u(400,15);

	if(s != t){
		std::cout << s << " is not equal to " << t << std::endl;
	}else {
		std::cout << s << " is equal to" << t <<std::endl;
	}

	if(r == u){
		std::cout << r << " is equal to " << u << std::endl;
	}else {
		std::cout << r << " is not equal to" << u <<std::endl;
	}
	
	return  0;
}
