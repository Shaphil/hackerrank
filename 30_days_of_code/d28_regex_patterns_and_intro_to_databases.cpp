#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    string name, email;
    string pattern = "@gmail.com";
    vector<string> v;

    cin >> n;
    while (n--) {
        cin >> name >> email;
        string endsWith = email.substr(email.length() - pattern.length(), email.length());
        if (endsWith == pattern)
            v.push_back(name);
    }

    sort(v.begin(), v.end());
    for (auto i: v)
        cout << i << endl;

    return 0;
}
