#include <iostream>
using namespace std;

void sortOne(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int steps=0;
    while (left < right)
    {  

        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        // agr yaha tak pahunch gaye ho to iska matlab arr[i]=1,arr[j]=0
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    sortOne(arr, n);
    return 0;
}