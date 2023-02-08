// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            res += 4;
        else if (s == "Cube")
            res += 6;
        else if (s == "Dodecahedron")
            res += 12;
        else if (s == "Icosahedron")
            res += 20;
        else
            res += 8;
    }
    cout << res;
    return 0;
}