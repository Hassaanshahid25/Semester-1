#include<iostream>
using namespace std;
void disc();
main(){
	disc();
}
void disc()
{
	string day;
	float amount,discount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: " << "$" ;
	cin >> amount;
	
	if (day == "Sunday")
{
	discount = amount*0.9;
	cout << "Payable Amount: $" << discount;
}
		if (day != "Sunday")
{
	cout << "Payable Amount: " << "$" << amount;
}
}