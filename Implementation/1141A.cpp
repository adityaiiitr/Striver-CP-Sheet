// https://codeforces.com/problemset/problem/1141/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int d = m / n;

    int count = 0;

    while (d > n)
    {

        if (d % 3 == 0 && d / 3 >= n)
        {
            d /= 3;
            count++;
        }
        else if (d % 2 == 0 && d / 2 >= n)
        {
            d /= 2;
            count++;
        }
        else
        {
            count = -1;
            break;
        }
        if (d == n)
            break;
    }

    cout << count;

    return 0;
}