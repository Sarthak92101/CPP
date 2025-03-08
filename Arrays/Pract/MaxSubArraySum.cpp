#include <iostream>
using namespace std;

int SubArrSum(int arr[], int n)

{
    int maxsum;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int CurrSum = 0;
            for (int i = start; i <= end; i++)
            {
                CurrSum = CurrSum + arr[i];
            }
            cout << CurrSum << ", ";
            maxsum = max(maxsum, CurrSum); // max is inbuilt in c++ also min is inbuilt
        }
        cout << endl;
    }
    cout << "Max SubArray is " << maxsum;
} // Time complexity is O(n^3)

int SubArrSum2(int arr[], int n)

{
    int maxsum = INT8_MIN;
    for (int start = 0; start < n; start++)

    {
        int CurrSum = 0;
        for (int end = start; end < n; end++)
        {
            CurrSum += arr[end];
            maxsum = max(maxsum, CurrSum); // max is inbuilt in c++ also min is inbuilt
        }
    }
    cout << "Max SubArray is " << maxsum;
} // Time Complexity is O(n^2)  So it is optimized

// Kedans algorithm more optimized with TIME COMPLEXITY IS O(n)
int SubArrSum3(int arr[], int n)
{
    int maxSum = INT8_MIN;
    int CurrSum = 0;
    for (int i = 0; i < n; i++)
    {
        CurrSum += arr[i];
        maxSum = max(maxSum, CurrSum);
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    cout << endl;
    cout << "Max SubArray with kedans algo is " << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    // SubArrSum(arr, n);
    // SubArrSum2(arr,n);
    SubArrSum3(arr, n);

    return 0;
}
