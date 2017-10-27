#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check_match(char i, stack<char> &brackets)
{
    if (!brackets.empty())
        return (brackets.top() == '(' && i == ')') ||
            (brackets.top() == '{' && i == '}') || (brackets.top() == '[' && i == ']');

    return false;
}

int main()
{
    freopen("02_in.txt", "r", stdin);
    freopen("02_out.txt", "w", stdout);

    int n, opening, closing;
    string s;

    cin >> n;
    while (n--) {
        stack<char> brackets;
        cin >> s;
        opening = closing = 0;

        for (auto i: s) {
            if (i == '(' || i == '{' || i == '[') {
                brackets.push(i);
                opening++;
            }
            else if (i == ')' || i =='}' || i == ']') {
                if (check_match(i, brackets))
                    brackets.pop();
                closing++;
            }
        }

        if (brackets.empty() && (opening == closing))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
