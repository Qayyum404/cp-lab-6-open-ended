#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Name_of_Book, Borrow;
	int Borrow_Days, Borrow_Date=0, Return_Date=0;
	int Total_days = 0;

	int Fine=0;
	cout << "Enter the name of Books you want to get it : ";
	getline(cin, Name_of_Book);
	cout << Name_of_Book << " is Avaliable. \n";
	cout << "Do you want to Barrow ? ";
	cin >> Borrow;
	int Total_Days = 0;
;
	if (Borrow == "Yes" || Borrow == "yes")
	{
		cout << "Okay! You must return the book within 5 days ? Either you will be Fine $1 per Day  \n ";
		cout << "Enter your Borrow_Date : ";
		cin >> Borrow_Date;
		cout << "Enter the Return date of the current Month : ";
		cin >> Return_Date;
		Total_Days = Return_Date - Borrow_Date;
		if (Total_Days > 5)

			Fine = Total_Days * 1;
		cout << "You Should pay the fine : " << Fine;
	}
	else if (Total_Days < 6)
	{
		cout << "Okay ! Book is Recived No Fine Thanks";
	}
	else if (Borrow == "No" || Borrow == "no")
	{
		cout << "Thanks ";
	}
	return 0;
}