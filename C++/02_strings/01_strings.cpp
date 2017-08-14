#include <iostream>
#include <string>

using namespace std;

void swap_first_char(string &a, string &b);

int main()
{
    freopen("in.txt", "r", stdin);
    string a, b;

    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;

    swap_first_char(a, b);

    cout << a << " " << b << endl;

    return 0;
}

void swap_first_char(string &a, string &b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}
