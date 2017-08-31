#include <iostream>
#include <cmath>

using namespace std;

class AdvancedArithmetic
{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic
{
    public:
        virtual int divisorSum(int n)
        {
            int sqrtN = sqrt(n);
            int sum = 0;
            for(int i = 1; i <= sqrtN; i++) {
                if(n % i == 0) {
                    int div = n / i;
                    cout << i << ", " << div << endl;
                    if(div == i)
                        sum += i;
                    else {
                        sum += i;
                        sum += n / i;
                    }
                }
            }

            return sum;
        }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
