#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include <regex>

using namespace std;


int main()
{
    int N;
    cin >> N;
    regex e(".+@gmail\\.com$");
    multiset<string> db;
    for(int a0 = 0; a0 < N; a0++)
    {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (regex_match(emailID, e))
            db.insert(firstName);
    }
    for(auto& it : db)
        cout << it << endl;

    return 0;
}

//int main()
//{
//    int n;
//    string name, email;
//    regex e(".+@gmail\\.com$");
//    vector<string> v;
//
//    cin >> n;
//    while (n--) {
//        cin >> name >> email;
//        if (regex_match(email, e))
//            v.push_back(name);
//    }
//
//    sort(v.begin(), v.end());
//    for (auto i: v)
//        cout << i << endl;
//
//    return 0;
//}
