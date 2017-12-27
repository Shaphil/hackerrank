#include <bits/stdc++.h>

using namespace std;

const int SIZE = 5;

int main()
{
    int largest, smallest;
    long long sum = 0;

    smallest = INT_MAX;
    largest = INT_MIN;

    vector<int> arr(5);

    for(int arr_i = 0; arr_i < 5; arr_i++) {
        cin >> arr[arr_i];
        sum += arr[arr_i];

        if (arr[arr_i] > largest)
            largest = arr[arr_i];
        if (arr[arr_i] < smallest)
            smallest = arr[arr_i];
    }

    cout << sum - largest << " " << sum - smallest << endl;

    return 0;
}
