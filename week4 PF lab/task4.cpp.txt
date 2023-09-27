#include<iostream>
using namespace std;
void calculator();
main(){
	calculator();
}
void calculator(){
	int numb1,numb2,sum,subt,multiply;
	float divide;
	cout << "Enter 1st number: ";
	cin >> numb1;
	cout << "Enter 2nd number: ";
	cin >> numb2;
	cout << "Enter an operator (+, -, *, /): ";
	char op;
	cin >> op;
	if (op == '+')
{
	sum = numb1 + numb2;
	cout << "Addition: " << sum;
}
	if (op == '-')
{
	subt = numb1 - numb2;
	cout << "Subtraction: " << subt;
}
	if (op == '*')
{
	multiply = numb1*numb2;
	cout << "Multiplication: " << multiply;
}
	if (op == '/')
{
	divide = numb1/numb2;
	cout << "Division: " << divide;
}
}