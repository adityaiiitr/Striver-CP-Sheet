// https://codeforces.com/problemset/problem/1391/B
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
        int n, m;

        cin >> n >> m;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string ch;
            cin >> ch;
            s.push_back(ch);
        }
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i][m - 1] == 'R')
                res++;
        }
        for (int i = 0; i < m; i++)
        {
            if (s[n - 1][i] == 'D')
                res++;
        }
        cout << res << endl;
    }
    return 0;
}