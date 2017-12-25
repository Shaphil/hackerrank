#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main()
{
    freopen("05.txt", "r", stdin);

    int n;
    cin >> n;
    vector< vector<int> > a(n, vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    int primary, secondary;
    primary = secondary = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                primary += a[i][j];
            if (i + j == n - 1)
                secondary += a[i][j];
        }
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
