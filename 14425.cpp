#include <set>
#include <string>
#include <iostream>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    fast_io();
    set<string> s;
    int n, m,cnt=0;
    cin >> n >> m;
    while(n--)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    while(m--)
    {
        string str;
        cin >> str;
        if(s.find(str) != s.end())
            cnt++;
    }
    cout << cnt;
}