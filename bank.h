/*
 *  bank.h
 *
 *  Created on: March 5, 2024
 *      Author: Ahmed Gamal
 */
using namespace std;
#include <iostream>
#include "account.h"
class bank
{
private:
	account* p;
public:
	bank();
	void open_account(string f,string l,float b);
	void deposit(int acc_num,float amount);
	void withdraw(int acc_num, float amount);
	void balance_details(int acc_num);
	void show_all();
	~bank();
};
