// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string op, d;
    cin >> op;
    vector<string> v;
    for (int i = 0; i < 5; i++)
    {
        cin >> d;
        v.push_back(d);
    }
    for (auto x : v)
    {
        if (op[0] == x[0] || op[1] == x[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}