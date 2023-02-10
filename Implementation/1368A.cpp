// https://codeforces.com/problemset/problem/1368/A

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
        ll a, b, n;
        cin >> a >> b >> n;
        if (a < b)
        {
            swap(a, b);
        }
        int count = 0;
        while (a <= n)
        {
            if (a > b)
            {
                swap(a, b);
            }
            // cout<<a<<" "<<b<<endl;
            a += b;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}