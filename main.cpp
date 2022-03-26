//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#include "Money.h"
#include "Account.h"

int main() {
	
	Money m(10,13);
	Account account(m);

	std::cout << account << std::endl;
	
	
	
	return  0;
}
