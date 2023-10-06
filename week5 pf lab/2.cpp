#include<iostream>
#include<cmath>
using namespace std;
void power(float base, float exponent);
main(){
    float base,exponent;
    cout <<"Enter the base number: ";
    cin>>base;
    cout<< "Enter the exponent: ";
    cin>>exponent;
    power(base, exponent);
}

void power (float base, float exponent)
{
float answer;
answer=pow(base,exponent);
cout <<base<<" raised to the power "<<exponent<<" is: "<<answer;
}