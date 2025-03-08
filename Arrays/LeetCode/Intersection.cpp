#include <iostream>
using namespace std;

int intersection(int arr[], int n, int m, int arr2[])
{
    // for (int i = 0; i < n; i++)
    // {
    //     int element = arr[i];

    //     for (int j = 0; j < m; j++)
    //     {
    //         if (element == arr2[j])
    //         {
    //             cout << element << ",";
    //             arr2[j]=INT8_MIN; //BEcause arr2 value not assigned to any other
    //         }
    //     }
    // }   //correct logic but not optimized TIME COMPLEXITY is high

    int i=0; int j=0;     //Optimized solution

    while(i<n && j<m){             //TWO pointer approach
        if(arr[i]==arr2[j]){
            cout<<arr[i];
            i++;
            j++;
        }
        else  if(arr[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3};
    int arr2[] = {3, 4};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    intersection(arr, n, m, arr2);
    return 0;
}