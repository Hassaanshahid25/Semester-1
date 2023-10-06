#include<iostream>
using namespace std;
void TimeAfterTimeTravel(int hours, int minutes);
main(){
    int hours,minutes;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>minutes;
    TimeAfterTimeTravel(hours,minutes);
}

void TimeAfterTimeTravel(int hours, int minutes){
int totalmin, Finaltime,finalmin,finalhour;
totalmin=hours*60+minutes;
Finaltime=totalmin+15;
finalmin=Finaltime%60;
finalhour=Finaltime/60;
cout<<finalhour<<":"<<finalmin;


}