#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


bool how(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), how);
    for (auto i: v)
        cout << i << endl;

    return 0;
}
