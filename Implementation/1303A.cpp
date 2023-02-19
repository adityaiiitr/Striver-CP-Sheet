// https://codeforces.com/problemset/problem/1303/A -->

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
        string s;
        cin >> s;
        int count = 0;
        int res = 0;
        bool flag = false;
        for (auto x : s)
        {
            if (flag)
            {
                if (x == '0')
                    count++;
            }

            if (x == '1')
            {
                flag = true;
                res = count;
            }
        }
        cout << res << endl;
    }
    return 0;
}
