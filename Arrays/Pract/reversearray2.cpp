#include<iostream>
using namespace std;


int print(int arr[], int n ){
    for(int i=0; i<n; i++){
        cout << arr[i]<<",";
    }
    cout<<endl;
 }

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int start=0; 
    int end=n-1;

    while(start<end){
        int temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
        start++;
        end--;
    }
    print(arr,n);


   return 0; 
}