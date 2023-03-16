// https://codeforces.com/contest/139/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[7];
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (true)
    {
        n -= arr[i % 7];
        if (n <= 0)
        {
            cout << i % 7 + 1;
            break;
        }
        i++;
    }
    return 0;
}