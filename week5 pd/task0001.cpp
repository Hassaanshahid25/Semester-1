#include<iostream>
using namespace std;

int x1=10;
int x2=20;
int sum()
{
    x1=40;
    return x1 + x2  ;

}
main(){
    int x3=x1;
    int x1=40;
    x3=20;
    x2=sum();
    cout<<x1<<" "<<x2;   
}
