#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2 ==0){
        return true;
    }else {
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<isEven(n);
    return 0;
}