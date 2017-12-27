#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string time = s.substr(0, 2);
    string ampm = s.substr(s.length() - 2, 2);
    int t = stoi(time);

    // in a 12h clock there are only two possibilities for the hour.
    // it is either less than 12
    if (t < 12) {
        // if it's less, the only time it affects 24h time is
        // when it is PM
        if (ampm == "PM") {
            t += 12;
            time = to_string(t);
        }
    }
    // or equal
    else {
        // and in this case, the only time it affects 24h time
        // is when it is AM
        if (ampm == "AM")
            time = "00";
    }

    cout << time << s.substr(2, s.length() - 4) << endl;

    return 0;
}
