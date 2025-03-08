#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]= { 2, 4,6,8,10 };
    int n= sizeof(arr)/sizeof(int);

    int result=LinearSearch(arr,n,8);

   if(result!= -1){
    cout<<"Key found at index "<<result<<endl;
   }else{
    cout<<"Key not found ";
   }

    return 0;
};