#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("03.txt", "r", stdin);

    int n, q, x, y;
    vector<int> v;
    vector<int>::iterator i;

    cin >> n;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }

    cin >> q;
    while(q--) {
        cin >> y;
        i = lower_bound(v.begin(), v.end(), y);

        if (*i == y)
            cout << "Yes " << i - v.begin() + 1 << endl;
        else
            cout << "No " << i - v.begin() + 1 << endl;
    }

    return 0;
}
