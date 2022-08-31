#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }

    auto size = ivec.size();
    if (size == 0) {
        cerr << "ERROR: No input element" << endl;
        return -1;
    } else if (size == 1) {
        cerr << "ERROR: Only one element" << endl;
        return -1;
    }

    cout << "a:" << endl;
    for (auto iti = ivec.cbegin(); iti != ivec.cend() - 1; ++iti) {
        cout << *iti + *(iti + 1) << " ";
    }

    cout << endl
         << "b:" << endl;
    for (auto beg = ivec.cbegin(), end = ivec.cend() - 1; beg <= end; ++beg, --end) {
        cout << *beg + *end << endl;
    }

    return 0;
}
