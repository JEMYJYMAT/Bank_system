/*
 *  account.cpp
 *
 *  Created on: March 5, 2024
 *      Author: Ahmed Gamal
 */
#include "account.h"

account::account()
{
	f_name = "null";
	l_name = "null";
	balance = 0;
	
}

account::account(string f, string l, float b)
{
	f_name = f;
	l_name = l;
	balance = b;
	ac_number = next_ac_number++;
}

void account::setdata()
{
	cout << "please enter your first name " << endl;
	cin >> f_name;
	cout << "please enter your last name " << endl;
	cin >> l_name;
	cout << "please enter your balance " << endl;
	cin >> balance;

}

void account::getbalance()
{ 
	cout << "your current balance " << balance << endl;
}

void account::deposit(float amount)
{
	balance += amount;
}

void account::withdraw(float amount)
{
	balance -= amount;
}

void account::operator=(account a)
{
	f_name = a.f_name;
	l_name = a.l_name;
	balance = a.balance;
	ac_number = a.ac_number;
}

ostream& operator<<(ostream& out, account& a)
{
	out << "account number is " << a.ac_number << endl;
	out << "account name is " << a.f_name << " " << a.l_name << endl;
	out << "account current balance is " << a.balance << endl;
	return out;
}
int account::next_ac_number = 1;
