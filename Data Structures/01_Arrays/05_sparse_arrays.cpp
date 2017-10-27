#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    freopen("05.txt", "r", stdin);

    int n, q;
    vector<string> in;

    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        in.push_back(s);
    }

    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int cnt = 0;
        for (auto str: in) {
            if (str.compare(s) == 0)
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
