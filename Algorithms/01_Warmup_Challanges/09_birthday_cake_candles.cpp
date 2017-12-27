#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int largest = ar[0];
    int candles = 0;

    for (int i = 1; i < n; i++)
        if (ar[i] >= largest)
            largest = ar[i];

    for (int i = 0; i < n; i++)
        if (ar[i] == largest)
            candles++;

    return candles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
