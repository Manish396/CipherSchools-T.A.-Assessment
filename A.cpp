#include <bits/stdc++.h>
using namespace std;
void print_output(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}
void solve()
{
    int n;
    cout << "Enter the value of N" << endl;
    cin >> n;
    vector<int> res(n);
    if (n % 2 == 1)
    {
        for (int i = 0; i < n / 2; i++)
        {
            res[i] = 1;
        }
        for (int i = n / 2; i < n - 1; i++)
        {
            res[i] = -1;
        }
        res[n - 1] = 0;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            res[i] = 1;
        }
        for (int i = n / 2; i < n; i++)
        {
            res[i] = -1;
        }
    }
    print_output(res);
}
int main()
{
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}