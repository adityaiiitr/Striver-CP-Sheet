// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, d;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        v.push_back(d);
    }

    int count = 1, res = 0;
    int prev = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > prev)
        {
            count++;
        }
        else
        {
            res = max(res, count);
            count = 1;
        }
        prev = v[i];
    }
    res = max(res, count);
    cout << res;

    return 0;
}