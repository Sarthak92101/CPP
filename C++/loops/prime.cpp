#include<iostream>
using namespace std;
int main(){
    int n=9;
    bool isPrime=true;

    for(int i=2;i<=n-1; i++){
        if(n % i ==0){
            cout<<"Number is composite"<<endl;
        
        // isPrime = false;
        break;
        
        }else{
            cout<<"Number is prime "<<endl;
        }
    }

    // if(isPrime == true){
    //     cout<<"Number is prime"<<endl;
    // }else{
    //     cout<<"Number is not prime"<<endl;
    // }
    return 0;
}