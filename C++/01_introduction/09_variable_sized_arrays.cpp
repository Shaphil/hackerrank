#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int n, q, k, val, i, j;
    cin >> n >> q;
    vector<int> v[n];

    for(int x = 0; x < n; x++) {
        cin >> k;
        for(int y = 0; y < k; y++) {
            cin >> val;
            v[x].push_back(val);
        }
    }

    for(int x = 0; x < q; x++) {
        cin >> i >> j;
        cout << v[i][j] << endl;
    }

    return 0;
}
