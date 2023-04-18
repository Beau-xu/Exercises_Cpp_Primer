#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi(10, 1);
    for (auto iti = vi.begin(); iti != vi.cend(); ++iti) {
        *iti *= 2;
    }
    for (auto iti = vi.begin(); iti != vi.cend(); ++iti) {
        cout << *iti << " ";
    }
    cout << endl;

    return 0;
}
