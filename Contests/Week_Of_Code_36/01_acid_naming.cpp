#include <iostream>
#include <string>

using namespace std;


bool starts_with(string sample, string starts)
{
    return sample.find(starts) == 0;
}

bool ends_with(string sample, string ends)
{
    return sample.rfind(ends) == (sample.length() - ends.length());
}

int main()
{
    freopen("01.txt", "r", stdin);

    int q;
    string starts = "hydro";
    string ends = "ic";

    cin >> q;
    getchar();
    while (q--) {
        string sample;
        getline(cin, sample);

        if (starts_with(sample, starts) && ends_with(sample, ends))
            cout << "non-metal acid" << endl;
        else if (ends_with(sample, ends))
            cout << "polyatomic acid" << endl;
        else
            cout << "not an acid" << endl;
    }

    return 0;
}
