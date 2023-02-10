
// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    int k;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n;

    return 0;
}