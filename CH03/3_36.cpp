#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // pointer
    int arr1[10];
    int arr2[10];
    int* parr1 = arr1;
    int* parr2 = arr2;
    if (end(arr1) - begin(arr1) != end(arr2) - begin(arr2)) {
        cout << "Unequal array size" << endl;
    } else {
        while (*parr1 == *parr2 && parr1 != end(arr1) && parr2 != end(arr2)) {
            ++parr1;
            ++parr2;
        }
        if (parr1 == end(arr1) && parr2 == end(arr2)) {
            cout << "Equal" << endl;
        } else {
            cout << "Not equal" << endl;
        }
    }

    // iterator
    vector<int> vec1(10);
    vector<int> vec2(10);
    if (vec1.size() != vec2.size()) {
        cout << "Unequal vector size" << endl;
    } else {
        for (decltype(vec1.size()) i = 0; i != vec1.size(); ++i) {
            if (vec1[i] != vec2[i]) {
                cout << "Not equal" << endl;
                return 0;
            }
        }
        cout << "Equal" << endl;
    }

    return 0;
}
