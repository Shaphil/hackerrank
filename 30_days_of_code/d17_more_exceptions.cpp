#include <iostream>
#include <exception>

using namespace std;


class MyException : public exception
{
    virtual const char* what() const throw()
    {
        return "n and p should be non-negative";
    }
} calculationException;

class Calculator
{
    public:
        int power(int n, int p)
        {
            if(n < 0 || p < 0)
                throw calculationException;

            int result = 1;
            for(int i = 0; i < p; i++) {
                result *= n;
            }

            return result;
        }
};

int main()
{
    freopen("d17_more_exceptions.txt", "r", stdin);

    Calculator myCalculator = Calculator();
    int T, n, p;

    cin >> T;
    while(T-- > 0){
      if(scanf("%d %d", &n, &p) == 2){
         try{
               int ans = myCalculator.power(n,p);
               cout << ans << endl;
         }
         catch(exception& e){
             cout << e.what() << endl;
         }
      }
    }

}
