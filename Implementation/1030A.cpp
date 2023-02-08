// https://codeforces.com/problemset/problem/144/A

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
    int d;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (d == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}