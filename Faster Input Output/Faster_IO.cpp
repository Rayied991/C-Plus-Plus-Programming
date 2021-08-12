#include <bits/stdc++.h>
using namespace std;
int main()
{
    //We can achieve the same speed  as canf/printf using use cin/cout
    //in only 2 lines
    ios_base::sync_with_stdio(false); //defaultly it is true; thats why cin/cout became slow
    cin.tie(NULL);                    //previous input will be flushed
    int a = 10;
    cout << a << "\n"; // We will use '\n' instead of 'endl' to avoid slowness

    return 0;
}