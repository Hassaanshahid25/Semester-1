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
	if (d <= 10){
	cout << "Fuel needed: 100";
}
	if(d > 10){ float fuel;
	fuel = d*10;
	cout << "Fuel needed: " << fuel;

}
}