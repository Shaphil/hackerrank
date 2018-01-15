#include <iostream>

using namespace std;


void input_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

long long gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

long long gcd(int *a, int n)
{
    int _gcd = a[0];
    for (int i = 1; i < n; i++)
        _gcd = gcd(_gcd, a[i]);

    return _gcd;
}

long long lcm(int a, int b)
{
    return (a > b) ? ((a / gcd(a, b)) * b) : ((b / gcd(a, b)) * a);
}

long long lcm(int *a, int n)
{
    long long _lcm = a[0];
    for (int i = 1; i < n; i++)
        _lcm = lcm(_lcm, a[i]);

    return _lcm;
}

int main()
{
    int m, n;
    cin >> n >> m;

    int a[n], b[m];
    input_array(a, n);
    input_array(b, m);

    long long _lcm = lcm(a, n);
    long long _gcd = gcd(b, m);
    int result = 0;

    for (long long i = _lcm; i <= _gcd; i += _lcm) {
        if (_gcd % i == 0)
            result++;
    }

    cout << result << endl;

    return 0;
}
