#include <iostream>
#include <set>

using namespace std;

int main()
{
    freopen("04_in.txt", "r", stdin);
    freopen("04_out.txt", "w", stdout);

    int q, x, y;
    set<int> s;

    cin >> q;
    while(q--) {
        cin >> y >> x;
        switch(y)
        {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                set<int>::iterator val = s.find(x);
                if (val == s.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
                break;
        }
    }

    return 0;
}
