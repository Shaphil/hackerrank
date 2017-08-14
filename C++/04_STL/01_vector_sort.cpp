#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int a, n;
	vector<int> v;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for(auto i: v) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
