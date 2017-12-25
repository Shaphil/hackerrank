#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3;

vector < int > solve(int a[], int b[]) {
    vector <int> res(2);
    res[0] = res[1] = 0;
    
    for (int i = 0; i < SIZE; i++) {
        if (a[i] > b[i])
            res[0]++;
        else if (a[i] < b[i])
            res[1]++;
    }
    
    return res;
}

void take_input(int a[])
{
    for (int i = 0; i < SIZE; i++)
        cin >> a[i];
}

int main() {
    int a[SIZE], b[SIZE];
    
    take_input(a);
    take_input(b);
    
    vector < int > result = solve(a, b);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
