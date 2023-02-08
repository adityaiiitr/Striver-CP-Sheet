// https://codeforces.com/problemset/problem/510/A

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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
                cout << "#";
            else
            {
                if (i % 4 == 1 && j == m - 1)
                    cout << "#";
                else if (i % 4 == 3 && j == 0)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}