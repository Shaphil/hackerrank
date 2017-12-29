// I Took help, I cheated, I am a bad Guy :'(
// Source: https://www.geeksforgeeks.org/constant-time-range-add-operation-array/

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
        d[a] += k;
        if (b < n)
            d[b] += -k;
    }

    for (int i = 1; i < n; i++) {
        d[i] += d[i - 1];
        if (d[i] > _max)
            _max = d[i];
    }

    cout << _max << endl;

    return 0;
}
