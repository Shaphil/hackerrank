#include <iostream>
#include <map>

using namespace std;

int main()
{
    freopen("05.txt", "r", stdin);

    int q, y, t;
    string x;
    map<string, int> m;

    cin >> q;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> x >> y;
            map<string, int>::iterator i = m.find(x);

            if (i != m.end())
                i->second += y;
            else
                m.insert(make_pair(x, y));
        }
        else if (t == 2) {
            cin >> x;
            m.erase(x);
        }
        else if (t == 3) {
            cin >> x;
            map<string, int>::iterator i = m.find(x);

            if (i != m.end())
                cout << i->second << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
