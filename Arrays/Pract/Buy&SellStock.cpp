#include <iostream>
#include <climits>
using namespace std;
void maxProfit(int prices[], int n)
{ // not working in my VS code but running in online compiler i.e code is correct
    int best_buy[10000];
    best_buy[0] = INT_MAX;
    // cout<<best_buy<<","<<endl;

    for (int i = 1; i < n; i++)
    {
        best_buy[i] = min(best_buy[i - 1], prices[i - 1]);
        // cout<<best_buy[i]<<",";
    }
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int currProfit = prices[i] - best_buy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Max Profit" << maxProfit << endl;
    // Time complexity os O(n+n)=2n=O(n)
}
int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);

    return 0;
}