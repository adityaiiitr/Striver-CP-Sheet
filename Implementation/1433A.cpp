// https://codeforces.com/problemset/problem/1433/A -->

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n;
        int count = 0;
        while (n != 0)
        {
            d = n % 10;
            count++;
            n /= 10;
        }
        if (count == 1)
            cout << count + (d - 1) * 10 << endl;
        else if (count == 2)
            cout << 3 + (d - 1) * 10 << endl;
        else if (count == 3)
            cout << 6 + (d - 1) * 10 << endl;
        else if (count == 4)
            cout << d * 10 << endl;
    }
    return 0;
}
