// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n >> m;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string ch;
            cin >> ch;
            s.push_back(ch);
        }
        int i = 0, j = 0;
        int count = 0;
        while (true)
        {
            if (i == n && j == m)
                break;
            if (i >= n)
            {
                i--;
                if (s[i][j] == 'R')
                    count++;
                j++;
            }
            if (j >= m)
                j--;
            if (s[i][j] == 'D')
                count++;
            j++;
        }
        cout << count;
    }
    return 0;
}