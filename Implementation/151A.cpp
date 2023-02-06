// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll drink = k * l;
    ll lime_slice = c * d;
    int count = 0;
    while (p >= n * np && drink >= n * nl && lime_slice >= n)
    {
        count++;
        p -= n * np;
        drink -= n * nl;
        lime_slice -= n;
    }
    cout << count;

    return 0;
}