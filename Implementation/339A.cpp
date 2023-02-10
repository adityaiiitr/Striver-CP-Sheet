// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> s;
    string str;
    cin >> str;
    for (auto x : str)
    {

        if (x != '+')
            s.push_back(x);
    }
    sort(s.begin(), s.end());
    int i = 0;
    for (auto x : s)
    {
        if (i == 0)
            cout << x;
        else
            cout << "+" << x;
        i++;
    }

    return 0;
}