#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str);

int main()
{
    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    string str;

    cin >> str;
    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

vector<int> parseInts(string str)
{
    stringstream s(str);
    vector<int> v;

    for(int i = 0; s >> i; s.ignore())
        v.push_back(i);

    return v;
}
