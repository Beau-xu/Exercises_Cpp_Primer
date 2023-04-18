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
    for (decltype(size) ind = 0; ind < size - 1; ++ind) {
        cout << ivec[ind] + ivec[ind + 1] << " ";
    }

    cout << endl
         << "b:" << endl;
    if (size % 2 == 0) {
        size /= 2;
    } else {
        size = size / 2 + 1;
    }
    for (decltype(ivec.size()) ind = 0; ind < size; ++ind) {
        cout << ivec[ind] + ivec[ivec.size() - 1 - ind] << " ";
    }
    cout << endl;

    return 0;
}
