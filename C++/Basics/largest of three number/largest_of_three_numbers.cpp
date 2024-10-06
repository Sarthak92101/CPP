#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter value of A";
    cin>>a;
    cout<<"Enter value of B";
    cin>>b;
    cout<<"Enter value of C";
    cin>>c;

    if((a>b) && (a>c)){
        cout<<"A is greatest  number";
    }
    else if(b>c){
        cout<<"B is the greatest number";
    }
    else{
        cout<<"C is greatest number";
    }
    return 0;
}