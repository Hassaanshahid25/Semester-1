#include <iostream>
using namespace std;
float min(int number1, int number2);
int main()
{
    /* code */
    float number1, number2, minimum;
    cout << "Enter the first number: ";
    cin >>number1;
    cout << "Enter the second number: ";
    cin >>number2;
    minimum=min(number1,number2);
    cout <<"The minimum of "<<number1<<" and "<<number2<<" is: "<<minimum;
    return 0;
}

float min(int number1,int number2)
{
    if(number1>number2){
        return number1;
    }
    if (number2>number1){
        return number2;
    }
}