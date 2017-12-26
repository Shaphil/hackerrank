#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    freopen("06.txt", "r", stdin);

    int n;
    cin >> n;
    vector<int> arr(n);
    double positive, negative, zero;
    positive = negative = zero = 0.0;

    for(int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];

        if (arr[arr_i] > 0)
            positive++;
        else if(arr[arr_i] < 0)
            negative++;
        else
            zero++;
    }

    cout << fixed << setprecision(6);

    cout << positive / n << endl;
    cout << negative / n << endl;
    cout << zero / n << endl;

    return 0;
}
