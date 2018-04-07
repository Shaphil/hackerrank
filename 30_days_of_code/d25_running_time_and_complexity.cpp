#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int N = 50000;
int status[25001]; // if i is prime, status[i] = 0
vector<int> primes;

void init()
{
    for (int i = 2; i <= (N >> 1); i++)
        status[i] = 0;
}

void generatePrimes()
{
    int sqrtN = int(sqrt((double) N));
    for (int i = 3; i <= sqrtN; i += 2) {
        if (status[i >> 1] == 0) {
            for (int j = i * i; j <= N; j += 2 * i)
                status[j >> 1] = 1;
        }
    }
}

void printPrimes()
{
    int largestPrime = 0;
    for (int i = 3; i <= N; i += 2) {
        if (status[i >> 1] == 0) {
            primes.push_back(i);
        }
    }
}

bool isPrime(int n)
{
    if ((n == 1) || (n > 2 && n % 2 == 0))
        return false;

    int sqrtN = (int) sqrt( (double) n );
    for (int i = 0; primes[i] <= sqrtN; i++) {
        if (n % primes[i] == 0) {
            return false;
        }
    }

    return true;
}

void printIfPrime(int n)
{
    if (isPrime(n))
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
}

int main()
{
    init();
    generatePrimes();
    printPrimes();

    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;
        printIfPrime(n);
    }

    return 0;
}
