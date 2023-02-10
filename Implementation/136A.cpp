// https://codeforces.com/problemset/problem/136/A

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
    int a[n];
    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        a[d - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}