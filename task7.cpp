#include<iostream>
using namespace std;
void num();
main(){
	num();
}
void num(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number%2 == 0){
	cout << "Number " << number << " is even";
}
	if (number%2 != 0){
	cout << "Number " << number << " is odd";
}	
}