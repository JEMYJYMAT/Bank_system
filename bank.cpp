/*
 *  bank.cpp
 *
 *  Created on: March 5, 2024
 *      Author: Ahmed Gamal
 */
#include "bank.h"

bank::bank()
{
	p = new account[10];
}

void bank::open_account(string f, string l, float b)
{ 
	account a(f, l, b);
	p[account::next_ac_number - 2] = a;
}

void bank::deposit(int acc_num, float amount)
{ 
	p[acc_num - 1].deposit(amount);
}

void bank::withdraw(int acc_num, float amount)
{
	p[acc_num - 1].withdraw(amount);
}

void bank::balance_details(int acc_num)
{
	p[acc_num - 1].getbalance();
}

void bank::show_all()
{
	for (int i = 0; i < account::next_ac_number - 1; i++)
	{
		cout << p[i];
	}
}

bank::~bank()
{
	delete[]p;
}
