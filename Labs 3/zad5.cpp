#include <iostream>

using namespace std;
int main(){
    int category,age;
    cin>>category>>age;
    float ticketPrice=0;
    switch (category) {
        case 1:
            ticketPrice=8.0;
            break;
        case 2:
            if(age<=12.0){
                ticketPrice=8.0;
            } else{
                ticketPrice=12.0;
            }
            break;
        case 3:
            if(age<12.0){
                ticketPrice=10.0;
            } else{
                ticketPrice=15.0;
            }
            break;
        case 4:
            if(age<17.0){
                ticketPrice=15.0;
            } else{
                ticketPrice=18.0;
            }
            break;
    }
    cout<<ticketPrice<<"$";
}