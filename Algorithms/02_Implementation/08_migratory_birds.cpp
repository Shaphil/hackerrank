#include <iostream>
#include <vector>

using namespace std;


const int SIZE = 6;

int main()
{
    int n, t;
    vector<int> types(SIZE, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        types[t]++;
    }

    int max_val = types[1];
    for (int i = 2; i < SIZE; i++)
        if (types[i] > max_val)
            max_val = types[i];

    for (int i = 1; i < SIZE; i++)
        if (types[i] == max_val) {
            cout << i << endl;
            break;
        }

    return 0;
}
