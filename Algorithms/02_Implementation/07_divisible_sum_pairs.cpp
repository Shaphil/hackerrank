#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, k;

    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((v[i] + v[j]) % k == 0)
                sum_count++;
        }
    }

    cout << sum_count << endl;

    return 0;
}
