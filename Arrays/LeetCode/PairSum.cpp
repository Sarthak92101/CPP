#include<iostream>
using namespace std;
int pairSum(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){  // loop till n not till n-1
            if(arr[i]+arr[j]+arr[k]==12){
                cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<" = 12"<<endl;
            }
            }
        }
    }
    return 0;
}
int main(){
    int arr[]{1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    pairSum(arr,n);
    return 0;
    
}