#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0,end=n-1;
    while(start<end){
     swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]{1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    
    reverse(arr,n);
    
    print(arr,n);
    return 0;
}