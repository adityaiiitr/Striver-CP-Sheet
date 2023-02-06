// https://codeforces.com/problemset/problem/1352/A

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
        vector<int> v;
        int n;
        cin >> n;
        int num = n;
        int p = 0;
        while (n != 0)
        {
            int d = n % 10;
            if (d != 0)
                v.push_back(d * pow(10, p));
            p++;
            n /= 10;
        }
        cout << v.size() << "\n";
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}