// https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string str, s;
    cin >> str;
    s = "";
    int j = 1;
    for (int i = 0; i <= n; i += j)
    {
        j++;
        s += str[i];
    }
    cout << s;

    return 0;
}
