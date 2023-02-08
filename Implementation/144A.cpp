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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = arr[0], l = arr[0];
    for (int i = 1; i < n; i++)
    {
        s = min(s, arr[i]);
        l = max(l, arr[i]);
    }
    //  cout<<s<<" "<<l<<endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s == arr[i])
        {
            s = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (l == arr[i])
        {
            l = i;
            break;
        }
    }
    // l++;s++;
    // cout<<s<<" "<<l<<endl;
    int res = l + n - s - 1;
    if (l > s)
    {
        res--;
    }
    cout << res;

    return 0;
}