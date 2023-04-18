#include <cctype>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

bool sHasUpper(const string& s)
{
    for (auto ch : s) {
        if (isupper(ch)) {
            return true;
        }
    }
    return false;
}

void sToUpper(string& s)
{
    for (auto& ch : s) {
        ch = tolower(ch);
    }
}

int main()
{
    string astr;
    cout << "Input a string: " << endl;
    while (getline(cin, astr)) {
        cout << astr << endl;
        if (sHasUpper(astr)) {
            cout << "The string has upper char" << endl;
        } else {
            cout << "The string has no upper char" << endl;
        }
        sToUpper(astr);
        cout << "Convert to upper: " << astr << endl;
    }
    cout << astr << endl;

    return 0;
}
