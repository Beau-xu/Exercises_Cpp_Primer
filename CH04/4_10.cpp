#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec = {};
    int i = 0;
    while (cin >> i && i != 42) {
        ivec.push_back(i);
    }
    for (auto val : ivec) {
        cout << val << endl;
    }

    return 0;
}
