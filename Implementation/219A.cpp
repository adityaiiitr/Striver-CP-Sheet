// https://codeforces.com/problemset/problem/219/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    bool flag = true;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (auto x : s)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        if (x.second % n != 0)
        {
            flag = false;
            cout << -1;
            break;
        }
        else
        {
            m[x.first] = x.second / n;
        }
    }

    if (flag)
    {
        string str = "";
        for (auto x : m)
        {
            int j = x.second;
            while (j--)
                str += x.first;
        }
        while (n--)
            cout << str;
    }
    return 0;
}