#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    freopen("01.txt", "r", stdin);

    int n, t, x;
    vector<int> v;

    cin >> n;
    while (n--) {
        cin >> t;
        if (t == 1) {
            cin >> x;
            v.push_back(x);
        }
        else if (t == 2) {
            v.pop_back();
        }
        else if (t == 3) {
            int _max = INT_MIN;
            for (auto i: v) {
                if (i > _max)
                    _max = i;
            }
            cout << _max << endl;
        }
    }

    return 0;
}
