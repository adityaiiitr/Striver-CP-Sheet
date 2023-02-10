// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k, n, w;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        int cost = i * k;
        n = n - cost;
    }
    if (n < 0)
        cout << abs(n);
    else
        cout << 0;

    return 0;
}