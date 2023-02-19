// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (12 * n == i * (2 * i + 4) * (i + 1))
        {
            cout << i;
            break;
        }
        else if (12 * n < i * (2 * i + 4) * (i + 1))
        {
            cout << i - 1;
            break;
        }
    }
    return 0;
}