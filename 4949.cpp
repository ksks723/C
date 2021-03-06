#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    while (1)
    {
        string str;
        getline(cin, str);
        if (str == ".")
        {
            break;
        }
        stack<char> st;
        int ck = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 40 || str[i] == 91)
            {
                st.push(str[i]);
            }
            else if (str[i] == 41)
            {
                if (!st.empty() && st.top() == 40)
                {
                    st.pop();
                }
                else
                {
                    ck = 1;
                }
            }
            else if (str[i] == 93)
            {
                if (!st.empty() && st.top() == 91)
                {
                    st.pop();
                }
                else
                {
                    ck = 1;
                }
            }
        }

        if (st.empty() && ck == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}