#include<iostream>
using namespace std;
void eligible();
main(){
	eligible();
}
void eligible(){
	int marks;
	cout << "Enter your score: ";
	cin >> marks;
	if (marks > 50){
	cout << "Pass";
}
	if (marks <= 50){
	cout << "Fail";
}
}