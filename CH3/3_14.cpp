#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi;
    int i;
    while (cin >> i) {
        vi.push_back(i);
    }
    for (auto ele : vi) {
        cout << ele << endl;
    }

    return 0;
}
