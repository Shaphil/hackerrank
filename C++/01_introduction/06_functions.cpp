#include <iostream>
using namespace std;

int max_of_four(int, int, int, int);

int main()
{
	int a, b, c, d, max;
	
	cin >> a >> b >> c >> d;
	max = max_of_four(a, b, c, d);
	cout << max << endl;
	
	return 0;
}

int max2(int a, int b) {
	return a > b ? a : b;
}

int max3(int a, int b, int c) {
	int m = max2(a, b);
	return m > c ? m : c;
}

int max_of_four(int a, int b, int c, int d) {
	int m = max3(a, b, c);
	return m > d ? m : d;
}