#include<iostream>
using namespace std;
void sides();
main(){
	sides();
}
void sides(){
	int length,stickers;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> length;
	stickers = (length*length)*6;
	cout << "Number of stickers needed: " << stickers;
}