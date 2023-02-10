// https://codeforces.com/problemset/problem/116/A

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
    int a[n], b[n];
    int tot = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        tot += b[i] - a[i];
        // cout<<tot<<endl;
        res = max(res, tot);
    }
    cout << res;

    return 0;
}