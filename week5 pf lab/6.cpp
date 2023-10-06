#include<iostream>
using namespace std;
string checkAlphabetcase(char character);
int main(){
    char character;
    string statementOutput;
    cout <<"Enter a character (A/a): ";
    cin >> character;
    statementOutput=checkAlphabetcase(character);
    cout<<statementOutput;
    return 0;
}
string checkAlphabetcase(char character){
    string statement;
    if (character=='A')
    {
        statement="You have entered Capital A";
    }

    if (character=='a')
    {
        statement="You have entered small a";
    }
    return statement;
}