#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        if (p > (q + r + s) || q > (p + r + s) || r > (p + q + s) || s > (p + q + r))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
