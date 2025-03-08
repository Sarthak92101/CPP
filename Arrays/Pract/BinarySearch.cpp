#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n, int key){

    int st=0;
    int end=n-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(arr[mid]==key){
            return mid; //key found 
        }else if (arr[mid]<key){
            st=mid+1;      //element in 2nd half
        }else{
            end=end-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter Number of elements in the array: ";
    cin>>n;

   int  arr[n];
   for(int i=0; i<n; i++){
    cout<<"Enter the element at Index  "<<i<<" ";
    cin>>arr[i];}

    //int n=sizeof(arr)/sizeof(int);

     int result=BinarySearch(arr,n,5);
    cout<<"Your element found at index number "<<result<<endl;
    return 0;

}