#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

class Difference {
    private:
        vector<int> elements;

  	public:
        int maximumDifference;

        Difference(vector<int> &v)
        {
            elements = v;
        }

        void computeDifference()
        {
            sort(elements.begin(), elements.end());
            maximumDifference = abs(elements.front() - elements.back());
        }

}; // End of Difference class

int main()
{
    freopen("d14_scope.txt", "r", stdin);

    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
