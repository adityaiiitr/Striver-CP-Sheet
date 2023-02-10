// https : // codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<char> s;

    string str;
    cin >> str;

    for (auto x : str)
    {
        s.insert(x);
    }
    if (s.size() % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}