#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    cout<<"Years: "<<year/365;
    cout<<", ";
    cout<<"months: "<<year%365/30;
    cout<<", ";
    cout<<"days: "<<year%365%30;
}