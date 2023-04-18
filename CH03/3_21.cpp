#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10, 42);
    vector<int> v3 { 10, 42 };
    vector<vector<int>> vv1 { v1, v2, v3 };
    for (auto itv = vv1.cbegin(); itv != vv1.cend(); ++itv) {
        cout << "Capacity: " << itv->size() << endl;
        for (auto it = itv->cbegin(); it != itv->cend(); ++it) {
            cout << *it << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}
