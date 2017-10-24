#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    freopen("06.txt", "r", stdin);

	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << hex << setiosflags(ios::showbase) << resetiosflags(ios::uppercase);
		cout << setw(0) << (int)A << endl;

		string sign;
		if (B < 0)
            sign = "-";
        else
            sign = "+";

        int b = (int)B;
        int len = 0;
        while (b) {
            b /= 10;
            len++;
        }
        len += 3;
        streamsize ss = cout.precision();
        cout << fixed << setprecision(2) << setw(15 - len) << setfill('_');
        cout << sign <<  B << endl;

        cout << scientific << setiosflags(ios::uppercase);
        cout << setfill(' ') << setprecision(ss) << setw(15);
        cout << C << endl;
    }
	return 0;

}
