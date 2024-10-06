#include<iostream>
using namespace std;


int factorial(int n){
   int  fact=1;
   for(int i=1;i<=n; i++){
    fact=fact*i;
    
   }
   return fact;
}

int main(){
    int n;
    cout<<"Enter the number of whom you wanted factorial: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    // cout<<factorial(10);
    return 0;
}