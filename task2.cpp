#include<iostream>
using namespace std;
void inches();
main(){
	inches();
}
void inches(){
	float inches,foot;
	cout << "Enter the measurement in inches: ";
	cin >> inches;
	foot = inches/12;
	cout << "Equivalent in feet: " << foot;
}