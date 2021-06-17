#include <bits/stdc++.h>
using namespace std;
bool check_robotResponse(vector<int> arr, int cus_amt, int robot_qty)
{
    int n = arr.size();
    int count = 0;
    //Assuming every gadgets price is more than 0;
    for (int i = 0; i < n; i++)
    {
        if (cus_amt % arr[i] == 0 && cus_amt != 0)
        {
            count++;
        }
    }
    if (count == robot_qty)
    {
        return true;
    }
    return false;
}
void solve()
{
    int n;
    cout << "Enter the number of gadgets the robot has = ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the " << n << " prices of gadgets" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int customer_amount, robot_qty;
    cout << "Enter the unit of money customer has" << endl;
    cin >> customer_amount;
    cout << "Enter the quantity of gadgets robot can allow" << endl;
    cin >> robot_qty;
    if (check_robotResponse(arr, customer_amount, robot_qty))
    {
        cout << "Right" << endl;
        return;
    }
    cout << "Wrong" << endl;
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