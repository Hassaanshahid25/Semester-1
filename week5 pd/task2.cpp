#include<iostream>
#include<string>
using namespace std;
float pyramidVolume(int length,int width,int height,string unit);
main(){
    int length,width,height;
    float result;
    string unit;
    cout<<"Enter the length of the pyramid (in meter): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meter): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meter): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters , meters, kilometers): ";
    cin>>unit;

    result = pyramidVolume( length, width, height,unit);
    cout<<"The volume of the pyramid is: "<<to_string(result)<<" cubic "<<unit;
}
float pyramidVolume(int length,int width,int height,string unit)
{   float formula,result;
    
    formula = (length*height*width)/3;
    if( unit == "millimeters"){
    result=formula*(1000*1000*1000);
   
    }
    if(unit == "centimeters"){
    result=formula*(100*100*100);
    

    }
    if(unit == "kilometers"){
    result=formula/(1000*1000*1000);
    
    }
    if(unit == "meters"){
    
    result=formula;
    }
    return result ;
}







