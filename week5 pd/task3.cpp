#include<iostream>
using namespace std;
float tax(char code,float price);
main()
{
    char code;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>code;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    float fprice=tax(code,price);
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<fprice<<".";


}
float tax(char code,float price){
    float finalprice;
    if(code == 'M' ){
        finalprice=(price*(0.06)) + price;
        cout<<finalprice;
       return finalprice; 
    }
 if(code == 'E' ){
        finalprice=(price*(0.08)) + price;
        cout<<finalprice;
        return finalprice;
    }
 if(code == 'S' ){
        finalprice=(price*(0.1)) + price;
        cout<<finalprice;
        return finalprice;
    }
 if(code == 'V' ){
        finalprice=(price*(0.12)) + price;
        cout<<finalprice;
        return finalprice;
    }
 if(code == 'T' ){
        finalprice=(price*(0.15)) + price;
        cout<<finalprice;
       return finalprice;
    }
  return 0;



}