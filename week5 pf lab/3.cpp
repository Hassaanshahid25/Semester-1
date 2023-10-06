#include<iostream>
#include<cmath>
using namespace std;
void squareroot(float number);
main()
{
    float number;
    cout <<"Enter a number: ";
    cin >>number;
    squareroot(number);
}
void squareroot(float number){
float answer=sqrt(number);
cout <<"The square root of "<<number<<" is: "<<answer;

} 
