#include<iostream>
using namespace std;

int FindUniqueElement(int arr[],int n){
    int ans=0;

    for(int i=0; i<n;i++){
        ans=ans^arr[i];
        //cout<<arr[i]<<",";
    }
cout<<endl;
return ans;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<",";
    // }
}


int main(){
    int arr[]={1,3,4,1,3};
    int n=sizeof(arr)/sizeof(int);

int unique_Element=FindUniqueElement(arr,n);
cout<<unique_Element<<"is your unique element";
    return 0;
}