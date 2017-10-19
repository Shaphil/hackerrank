#include <iostream>

using namespace std;

int main()
{
    freopen("04.txt", "r", stdin);

    int n, d;

    cin >> n >> d;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (i + d < n)
            cout << a[i + d] << " ";
        else
            cout << a[i + d - n] << " ";
    }
    cout << endl;

    return 0;
}
