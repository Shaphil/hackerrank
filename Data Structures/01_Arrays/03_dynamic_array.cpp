#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("03.dynamic_array.txt", "r", stdin);

    vector< vector<int> > seqList;
    int lastAnswer = 0;
    int n, q;

    cin >> n >> q;
    seqList.assign(n, vector<int>());

    while(q--)
    {
        int t, x, y;
        cin >> t >> x >> y;
        int seq = (x ^ lastAnswer) % n;

        if (t == 1)
            seqList[seq].push_back(y);
        else {
            int val = y % seqList[seq].size();
            lastAnswer = seqList[seq][val];
            cout << lastAnswer << endl;
        }
    }

    return 0;
}
