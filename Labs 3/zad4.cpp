#include <iostream>

using namespace std;
int main(){
    int poeni;
    cin>>poeni;
    if(poeni<50){
        cout <<"Ocenka: "<< "5"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==49){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
    else if(poeni<60) {
        cout <<"Ocenka: "<< "6"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==59){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
    else if(poeni<70) {
        cout <<"Ocenka: "<< "7"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==69){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
    else if(poeni<80) {
        cout <<"Ocenka: "<< "8"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==79){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
    else if(poeni<90) {
        cout <<"Ocenka: "<< "9"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==89){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
    else if(poeni<100) {
        cout <<"Ocenka: "<< "10"<<", "<<"poeni: "<<poeni<<endl;
        if(poeni==99){
            cout<<"Ima uslov za pogolema ocena"<<endl;
        } else{
            cout<<"Nema uslov za povisoka ocena";
        }
    }
}