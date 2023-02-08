#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char ch;
    if (s[0] >= '5' && s[0] != '9')
    {
        ch = '9' - s[0] + 48;
        s[0] = ch;
    }

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= '5')
        {
            ch = '9' - s[i] + 48;
            s[i] = ch;
        }
    }
    cout << s;
    return 0;
}