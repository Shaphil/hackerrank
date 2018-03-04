#include <iostream>
#include <vector>

using namespace std;


int main()
{
    freopen("02.txt", "r", stdin);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pairs = 0;
    int orphans = 0;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && v[i] == 1 && v[i + 1] == 1) {
            pairs++;
            i++;
        }

        // BUG: Need to count non pair locked doors

        // orphan doors
        if (i - 1 >= 0 && i + 1 < n)
            if (v[i] == 1 && v[i - 1] == 0 && v[i + 1] == 0)
                orphans++;
    }

    // exceptions
    bool first = false, last = false;
    if (v[0] == 1 && v[1] == 0) {
        orphans++;
        first = true;
    }
    if (v[n - 1] == 1 && v[n - 2] == 0) {
        orphans++;
        last = true;
    }

    int minimum;
    if (first && last)
        minimum = orphans + pairs - 1;
    else
        minimum = orphans + pairs;
    int maximum = orphans + 2 * pairs;

    cout << minimum << " " << maximum << endl;

    return 0;
}
