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
	
	Money d1(200,00);
	account.makeDeposit(d1);
	Money d2(300, 24);
	account.makeDeposit(d2);
	Money d3(501,22);
	account.makeDeposit(d3);
	std::cout << account << std::endl;
	
	Money w1(300,10);
	account.makeWithdrawals(w1);
	Money w2(201,34);
	account.makeWithdrawals(w2);
	std::cout << account << std::endl;
	
	//Checking Relational Operators
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
