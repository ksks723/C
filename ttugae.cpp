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
    double pattern_co, pattern_cm, my_co;
    cin >> pattern_co >> pattern_cm >> my_co;

    cout << " my_cm : " << (pattern_cm * 10 / my_co) / (10 / pattern_co) << "\n";
} //접미사 다시봐C:\Users\ksks7\OneDrive\바탕 화면\dev\taeheonPush\push_swap