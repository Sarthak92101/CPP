#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<=n-1;i++){
        if(n%2==0){
            return false;
        }else {
            return true;
        }
    }
}

int main(){
    cout<<isPrime(74797939);
    return 0;
}