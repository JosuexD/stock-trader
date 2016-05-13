/*
Author: Josue Magallanes
Date: May 12, 2016
Project : Stock Market emulation
*/
#include <iostream>
#include <string>
//#include <sstream>
#include <iomanip>


void setName();
void getName();
void setBalance();
float getBalance();
void setStock();
void printTraderInfo();



float stockPrice;
float balance;
int quantity;

using namespace std;

int main()
{
	setprecision(3);
	string name;
	string stockName;
	char ans = 'N';
	int choice;
	int totalTransactions = 0;
	int stocksOwned = 0;

	cout << "Enter your full name: ";
	getline(cin, name);

	cout << "What is name of the stock we'll be working with today? ";
	getline(cin, stockName);
	cout << "What is the current price of stock " << stockName << "? ";
	cin >> stockPrice;
	setBalance();

	cout << "\n\nWelcome, " << name << "\nBalance : " << getBalance() << "\nTrading Stock: " << stockName << "\nCurrent Price: " << stockPrice << endl;
	do
	{
		cout << "What do you wish to do ?" << "\n1)Buy Stock\n2)Sell Stock\n3)Account Summary\n";

		cin >> choice;
		switch (choice) {
		case 1:
			float temp;
			totalTransactions += 1;
			cout << "How many stocks of " << stockName << " would you like to buy? ";
			cin >> quantity;
			stocksOwned = stocksOwned + quantity;
			temp = quantity * stockPrice;
			balance = balance - temp;
			if (balance > 0)
			{
				cout << "Order completed, you've purchased " << quantity << " stocks from " << stockName << endl;
			}
			else
			{
				cout << "Error Ocurred, you do not have enough funds!" << endl;
				system("pause");
				return (0);
				
			}
			cout << "Stocks Owned: " << stocksOwned << endl;
			cout << "Current Balance: " << balance << endl;
			
			//cout << "Continue? (y/n)";
			//getline(cin, go);
			break;
		case 2:
			totalTransactions += 1;
			cout << "How many stocks of " << stockName << " would you like to sell? ";
			cin >> quantity;
			stocksOwned = stocksOwned - quantity;
			temp = quantity * stockPrice;
			balance = balance + temp;
			if (stocksOwned > 0)
			{
				cout << "Order completed, you've sold " << quantity << " stocks from " << stockName << endl;
			}
			else
			{
				cout << "Error Ocurred, you do not have enough stocks!" << endl;
				system("pause");
				return (0);
			}
			cout << "Stocks Owned: " << stocksOwned << endl;
			cout << "Current Balance: " << balance << endl;
			//cout << "Continue? (y/n)";
			//getline(cin, go);

			break;
		case 3:
			cout << "\n\n----------------------------------------------------------------------\n";
			cout << "Account Summary for " << name << "\nTotal Balance: " << balance << "\nTotal Transactions: " << totalTransactions << "\nStocks Owned: " << stocksOwned << endl;
			break;
		default:
			cout << "Not a proper choice, exiting." << endl;
			system("pause");
			return (0);
			break;
		}
		cout << "Continue? (y/n)";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');


	system("pause");
}



void setName()
{
	using namespace std;
	cout << "Enter your full name: " << endl;

	
	
}
/*
void getName()
{
	cout << name;
}
*/
void setBalance()
{
	cout << "Enter the balance you wish to transfer to your traders account: ";
	cin >> balance;
}
float getBalance()
{
	return balance;
}
/*void setStock()
{
	cout << "What is name of the stock we'll be working with today?";
	cin >> stockName;
	cout << "What is the current price of stock " << stockName << "?";
	cin >> stockPrice;
}
*/
/*void printTraderInfo()
{
	cout << "Welcome " << name << "\n, We'll be trading Stock: " << stockName << "\nCurrent Price: " << stockPrice << endl;;
}
*/

void printBalance()
{
	//print out a small statement
	
}

