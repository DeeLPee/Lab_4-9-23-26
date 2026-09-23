#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	string foodName;
	cout << "What would you like to eat? ";
	cin.ignore();
	getline(cin, foodName);


	char itemCode;
	cout << "What is the item code? ";
	cin >> itemCode;

	int quantity;
	cout << "How many? ";
	cin >> quantity;


	double unitPrice;
	cout << "What is the cost? ";
	cin >> unitPrice;

	char member;
	cout << "Are you a member (y/n)? ";
	cin >> member;

	cout << "Food =  " << setw(27) << fixed << foodName << std::endl;
	cout << "Item Code = " << setw(15) << fixed << itemCode << std::endl;
	cout << "Quantity =  " << setw(15) << fixed << std::to_string(quantity) << std::endl;
	cout << "Unit Price =  " << setw(20) << fixed << std::to_string(unitPrice) << std::endl;
	cout << "Member = " << setw(18) << fixed << member << std::endl;
}