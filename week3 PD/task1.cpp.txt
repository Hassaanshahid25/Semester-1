#include<iostream>
using namespace std;
void distance();
main(){
	distance();
}
void distance(){
	float fuel,d;
	cout << "Enter the distance: ";
	cin >> d;
	fuel = d*10;
	cout << "Fuel needed: " << fuel;
}