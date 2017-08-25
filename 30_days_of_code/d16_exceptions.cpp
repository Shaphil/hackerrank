#include <iostream>
#include <string>

using namespace std;

int main()
{
    int val;
    string S;
    cin >> S;

    try
    {
        val = stoi(S);
        cout << val << endl;
    }
    catch(...)
    {
        cout << "Bad String" << endl;
    }

    return 0;
}
