// This program calculates the amount of money paid, received and lost 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int stock; 
	double price1; //price of buying
	double price2; // price of selling
	double pay, receiving, loss;

	stock = 750; //shares
	price1 = 35.00; //dollars per share
	price2 = 31.15; // dollars per share

	// calculate
	pay = price1*stock; //in dollars
	receiving = price2 * stock; // in dollars
	loss = pay - receiving; // in dollars		
		
	// Display the result
	cout << fixed << setprecision(2);
    cout << "Kathryn bought " << stock << " shares of stock at a price of $" << price1 << ".";
	cout << " A year later she sold them for $" << price2 << " per share.";
	cout << "\nThe total amount paid for the stock: $" << pay << ".";
	cout << "\nThe total amount received from the selling the stock: $" << receiving << ".";
	cout << "\nThe total amount of money she lost: $" << loss << ".\n"; 		
    
	system("pause");
	return 0;

	
}