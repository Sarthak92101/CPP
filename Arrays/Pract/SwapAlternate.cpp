#include <iostream>
using namespace std;

void SwapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            //swap(arr[i], arr[i + 1]);
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    int arr[] = {1, 3, 2, 7, 11, };
    int n = sizeof(arr) / sizeof(int);

    SwapAlternate(arr, n);

    return 0;
}