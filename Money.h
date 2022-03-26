//
// Created by Shannon Keegan 03/26/22
// Collaborated on by Zac Waiksnoris
//

#ifndef CODE_MONEY_H
#define CODE_MONEY_H

#include <iostream>


class Money
{
	int m_dollars;
	int m_cents;
	int all_cents = 100*m_dollars+m_cents;

public:
	Money();
	Money(const int &dollars, const int &cents);
   	
   	//Relational Overloads
   	bool operator<(const Money &rhs) const{
   		return all_cents < rhs.all_cents;
   	}
   	bool operator>(const Money &rhs) const{
   		return all_cents > rhs.all_cents;
   	}
   	bool operator<=(const Money &rhs) const{
   		return all_cents <= rhs.all_cents;
   	}
	bool operator>=(const Money &rhs) const{
   		return all_cents >= rhs.all_cents;
   	}
   	bool operator!=(const Money &rhs) const{
   		return all_cents != rhs.all_cents;
   	}
   	bool operator==(const Money &rhs) const{
   		return all_cents == rhs.all_cents;
   	}
   	
   	//Math Overloads
   	bool operator+(const Money &rhs) const{
   		return all_cents + rhs.all_cents;
   	}
   	bool operator-(const Money &rhs) const{
   		return all_cents - rhs.all_cents;
   	}
   	
   	//Overload Stream Operator
   	friend std::ostream &operator<<(std::ostream &os, const Money &money){
   		os << "$" << money.all_cents * 0.01;
   		return os;
   	}
   	
};

#endif //CODE_MONEY_H
