#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int q, x, y, z;
    int distA, distB;

    cin >> q;
    while (q--) {
        cin >> x >> y >> z;
        distA = abs(z - x);
        distB = abs(z - y);

        if (distA < distB)
            cout << "Cat A" << endl;
        else if (distB < distA)
            cout << "Cat B" << endl;
        else
            cout << "Mouse C" << endl;
    }

    return 0;
}
