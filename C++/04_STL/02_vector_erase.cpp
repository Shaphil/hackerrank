#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int a, n, pos, start_pos, end_pos;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    cin >> pos >> start_pos >> end_pos;

    // subtracting 1 because provided indexes are not 0 based.
    v.erase(v.begin() + pos - 1);
    v.erase(v.begin() + start_pos - 1, v.begin() + end_pos - 1);

    cout << v.size() << endl;
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
