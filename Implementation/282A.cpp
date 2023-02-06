// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            count++;
        else
            count--;
    }
    cout << count;
}