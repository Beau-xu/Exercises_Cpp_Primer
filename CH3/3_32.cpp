#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[10] = {};
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    int arr2[10] = {};
    for (int i = 0; i < 10; ++i) {
        arr2[i] = arr[i];
    }

    vector<int> vec(10, 0);
    for (int i; i < 10; ++i) {
        vec[i] = i;
    }

    vector<int> vec2 = vec;
    for (auto i : vec2)
        cout << i << endl;

    return 0;
}
