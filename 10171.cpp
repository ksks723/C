#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char str[101];
    cin >> str;
    int alpha[26];
    fill_n(alpha, 26, -1);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (alpha[str[i] - 97] == -1)
            alpha[str[i] - 97] = i;
    }
    for (int a : alpha)
    {
        cout << a << " ";
    }

    return 0;
}