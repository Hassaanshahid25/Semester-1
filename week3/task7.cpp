#include<iostream>
using namespace std;
main(){
	string movie;
	float adultt,childt,adultsold,childsold,charity;
	float donation,totalsale,rem;
	cout << "Enter the movie name: ";
	cin >> movie ;
	cout << "Enter the adult ticket price: " << "$";
	cin >> adultt ;
	cout << "Enter the child ticket price: " << "$";
	cin >> childt;
	cout << "Enter the number of adult tickets sold: ";
	cin >> adultsold;
	cout << "Enter the number of child tickets sold: ";
	cin >> childsold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> charity;
	cout << endl;
	cout << "Movie: " << movie <<endl;
	totalsale=(adultt*adultsold)+(childt*childsold);
	cout << "Total amount generated from ticket sales: " << "$" <<	totalsale << endl;
	donation = totalsale/charity;
	cout << "Donation to charity (10%): " << "$" << donation << endl;
	rem = totalsale-donation;
	cout << "Remaining amount after donation: " << "$" << rem;
}