#include<iostream>
using namespace std;

int x=10;
void myFunction()
{
    int x=20;
    cout<<"The value of X is: "<<x;   

}
main(){
    myFunction();
    int x=30;
    cout<<"The value of X is: "<<x;   
    myFunction();
}
