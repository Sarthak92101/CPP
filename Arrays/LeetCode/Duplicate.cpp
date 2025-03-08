#include<iostream>
using namespace std;
int ans=0;
void duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
ans=ans^arr[i];
    }

    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
    //return ans;
}

int main(){
    int arr[]={1,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    duplicate(arr,n);

    return 0;
}