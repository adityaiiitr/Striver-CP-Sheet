// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 3, res = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    for (int i = 0; i < n; i++)
    {

        res += abs(arr[i] - arr[1]);
    }
    cout << res << "\n";
    return 0;
}