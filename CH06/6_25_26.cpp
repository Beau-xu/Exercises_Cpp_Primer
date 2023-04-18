#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    string s = "";
    for (int i = 1; i != argc; ++i) {
        s += argv[i];
        s += " ";
    }
    cout << s << endl;

    return 0;
}
