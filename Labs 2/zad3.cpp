#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"Najmala vrednost ima brojot "<<a;
    }
    else if(b<c && b<a){
        cout<<"Najmala vrednost ima brojot "<<b;
    }
    else if(c<a && c<b){
        cout<<"Najmala vrednost ima brojot "<<c;
    }
    else if(a<b &&a==c){
        cout<<"Najmala vrednost ima brojot "<<a;
    }

    else{
        cout<<"Site tri broja imaat ista vrednost";
    }
}