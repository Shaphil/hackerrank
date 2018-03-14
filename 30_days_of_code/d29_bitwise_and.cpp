#include <iostream>

using namespace std;


int main()
{
    int t, k, n;

    cin >> t;
    while (t--) {
        int _max = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int _and = (i & j);
                if (_and > _max && _and < k)
                    _max = _and;
            }
        }
        cout << _max << endl;
    }

    return 0;
}
