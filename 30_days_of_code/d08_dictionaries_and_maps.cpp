#include <iostream>
#include <map>

using namespace std;

int main()
{
    freopen("d08_dictionaries_and_maps.txt", "r", stdin);

    int n;
    string name, phone, query;
    map<string, string> phone_book;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name >> phone;
        phone_book[name] = phone;
    }

    while(cin >> query) {
        // map.count(key) returns 1 if key is found
        // zero otherwise.
        if(phone_book.count(query))
            cout << query << "=" << phone_book[query] << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}
