#include <iostream>
#include <climits>

using namespace std;

const int s = 10000007;
int d[s];

int main()
{
    freopen("06.txt", "r", stdin);

    int n, m, a, b, k;
    int c = 0;
    int _max = INT_MIN;

    cin >> n >> m;
    while(c < m) {
        cin >> a >> b >> k;
        a--;
        for(int i = a; i < b; i++) {
            d[i] += k;
            if (d[i] > _max)
                _max = d[i];
        }

        c++;
    }

    cout << _max << endl;

    return 0;
}
