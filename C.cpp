#include <bits/stdc++.h>
using namespace std;
long knapsack(vector<int> wt, vector<int> val, int knapsack_capacity)
{
    int n = wt.size();
    // Build table K[][] in bottom up manner
    long dp[n + 1][knapsack_capacity + 1];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i < knapsack_capacity + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < knapsack_capacity + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][knapsack_capacity];
}
void solve()
{
    int items;
    cout << "Enter the number of items(n)" << endl;
    cin >> items;
    vector<int> wt(items), val(items);
    cout << "Enter the weight of the array" << endl;
    for (int i = 0; i < items; i++)
    {
        cin >> wt[i];
    }
    cout << "Enter the value array of " << items << " items" << endl;
    for (int i = 0; i < items; i++)
    {
        cin >> val[i];
    }
    int knapsack_capacity;
    cout << "Enter the knapsack capacity." << endl;
    cin >> knapsack_capacity;
    cout << knapsack(wt, val, knapsack_capacity) << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}