#include<iostream>
using namespace std;

int main(){
    int inc;

    cout<<"Enter your income";
    cin>>inc;

    if(inc<500000){
        cout<<"You have noneed to pay tax";
    }
    else if(inc<1000000){
   cout<<"You have to pay 20% tax";
    }
    else{
        cout<<"You have to pay 30% tax";
    }
}