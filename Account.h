/*
 *  account.h
 *
 *  Created on: March 5, 2024
 *      Author: Ahmed Gamal
 */
#ifndef account header
#define account header


using namespace std;
#include <iostream>

class account
{
private:
	string f_name;
	string l_name;
	float balance;
	int ac_number;
	static int next_ac_number;
public:
	account();
	account(string f, string l, float b);
	void setdata();
	void getbalance();
	void deposit(float amount);
	void withdraw(float amount);
	friend class bank;
	friend ostream& operator <<(ostream& out, account& a);
	void operator =(account a);



};

#endif // account header
