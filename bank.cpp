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

void bank::menu()
{
	int x;
	string f, l;
	float b;
	cout << "please choose the transaction you want " << endl;
	cout << "1-Getting balance enquiry " << endl;
	cout << "2-Deposit " << endl;
	cout << "3-Withdraw" << endl;
	cout << "4-Getting account details " << endl;
	cout << "5-Showing all accounts" << endl;
	cout << "6-open new account " << endl;
	cout << "7-close menu " << endl;
	cin >> x;
	switch (x)
	{
		float amount;
		int acc_number;
	case 1:
		cout << "please enter account number " << endl;
		cin >> acc_number;
		balance_details(acc_number);
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		
		break;
		
	case 2:
		cout << "please enter account number " << endl;
		cin >> acc_number;
		cout << "please enter the amount " << endl;
		cin >> amount;
		deposit(acc_number, amount);
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		break;
	case 3:
		cout << "please enter account number " << endl;
		cin >> acc_number;
		cout << "please enter the amount " << endl;
		cin >> amount;
		withdraw(acc_number, amount);
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		break;
	case 4:
		cout << "please enter account number " << endl;
		cin >> acc_number;
		show_account_details(acc_number);
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		break;
	case 5:
		show_all();
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		break;
	case 6:
		
		cout << "please enter your first name " << endl;
		cin >> f;
		cout << "please enter your last name " << endl;
		cin >> l;
		cout << "please enter your balance " << endl;
		cin >> b;
		bank::open_account(f,l,b);
		cout << "your account number is " << account::next_ac_number - 1 << endl;
		cout << "Do you want to return to the menu" << endl;
		cout << "1- yes" << "               2-No" << endl;
		cin >> x;
		if (x == 1)
			menu();
		break;
	case 7:
		break;
 
	default:
		cout << "error please try again " << endl;
		menu();

		break;
	}
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

void bank::show_account_details(int acc_num)
{
	cout << p[acc_num - 1];
}

bank::~bank()
{
	delete[]p;
}
