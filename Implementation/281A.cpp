// https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    if (s[0] >= 97)
        s[0] = s[0] - 32;
    cout << s;

    return 0;
}