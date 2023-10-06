#include<iostream>
using namespace std;
void check(int _5digitnumber);
main(){
int _5digitnumber;
cout <<"Enter a five-digit number: ";
cin >>_5digitnumber;
check(_5digitnumber);
}
void check(int _5digitnumber)
{
    int a,b,c,d,e,sum;                             //a,b,c,d,e represents each individual digit in a 5 digit number.
    e=_5digitnumber%10;
    a=_5digitnumber/10000;
    b=(_5digitnumber/1000)%10;
    c=(_5digitnumber/100)%10;
    d=(_5digitnumber%100)/10;
    sum=a+b+c+d+e;
    if (sum%2==1){
        cout<< "Oddish";
    }
    if (sum%2==0){
        cout <<"Evenish";
    }
}