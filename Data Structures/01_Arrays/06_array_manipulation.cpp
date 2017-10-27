#include <iostream>
#include <climits>
#include <vector>

using namespace std;


int main()
{
    freopen("06.txt", "r", stdin);

    int n, m, a, b, k;
    long long _max = LLONG_MIN;

    cin >> n >> m;
    vector<long long> d(n, 0);

    while(m--) {
        cin >> a >> b >> k;
        a--;
        for(int i = a; i < b; i++) {
            d[i] += k;
        }
    }

    for (auto i: d) {
        if (i > _max)
            _max = i;
    }

    cout << _max << endl;

    return 0;
}
