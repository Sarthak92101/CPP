#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

   int  arr[n];
   for(int i=0; i<n; i++){
    cout<<"Enter the element: ";
    cin>>arr[i];
   }
   for(int i=0; i<n; i++){
    cout<<arr[i];
   }
    
    return 0;
}

