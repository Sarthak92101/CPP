#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,6,7};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<"assignng value "<<arr[i]<<" to max"<<endl;
        }
        if(arr[i]<max){
            max=arr[i];
            cout<<"assignng value "<<arr[i]<<" to min"<<endl;
        }
    }
    cout<<max<<endl;
    cout<<min;
    return 0;
}