// https : // codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
            count++;
        n /= 10;
    }
    // cout<<count;
    if (count == 7 || count == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}