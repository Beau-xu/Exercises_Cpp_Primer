#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec = {};
    int i = 0;
    while (cin >> i) {
        ivec.push_back(i);
    }

    for (auto& rval : ivec) {
        rval = (rval % 2 == 1) ? 2 * rval : rval;
    }

    for (auto val : ivec) {
        cout << val << endl;
    }

    return 0;
}
