#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << ">" << endl;
        else if (b > a)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
