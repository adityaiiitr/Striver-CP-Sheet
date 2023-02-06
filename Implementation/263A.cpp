// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main()
{
    int ip, jp;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                ip = i;
                jp = j;
            }
        }
    }

    cout << abs(ip - 2) + abs(jp - 2);
}