#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Prime
{
    private:
        int n = 50000;
        int status[25001];
        vector<int> primes;

    public:
        Prime()
        {
            this->initStatus();
            this->generatePrimes();
        }

        void initStatus()
        {
            for (int i = 2; i <= (this->n >> 1); i++)
                status[i] = 0;
        }

        // Sieve of Eratosthenes
        void generatePrimes()
        {
            int sqrtN = int(sqrt((double) this->n));
            for (int i = 3; i <= sqrtN; i += 2) {
                if (status[i >> 1] == 0) {
                    for (int j = i * i; j <= this->n; j += 2 * i)
                        status[j >> 1] = 1;
                }
            }

            for (int i = 3; i <= this->n; i += 2) {
                if (status[i >> 1] == 0) {
                    primes.push_back(i);
                }
            }
        }

        // A number is Prime if it is not divisible by any
        // prime smaller than its square root.
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
            if (this->isPrime(n))
                cout << "Prime" << endl;
            else
                cout << "Not prime" << endl;
        }
};

int main()
{
    int t, n;
    Prime p;

    cin >> t;
    while (t--) {
        cin >> n;
        p.printIfPrime(n);
    }

    return 0;
}
