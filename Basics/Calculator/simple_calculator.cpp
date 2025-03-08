#include<iostream>
using namespace std;
int main(){
    int a,b,op;

    cout<<"Enter first operand: ";
    cin>>a;
    
    cout<<"Enter second operand: ";
    cin>>b;
    
    cout<<"Enter operator(+,-,*,/): ";
    cin>>op;

    switch(op){
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        default: cout<<"Enter correct operator";
    }
    return 0;
}