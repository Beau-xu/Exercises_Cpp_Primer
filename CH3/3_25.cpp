#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    auto beg = scores.begin();
    unsigned int grade;

    while (cin >> grade) {
        if (grade <= 100) {
            *(beg + grade / 10) += 1;
        }
    }

    for (auto u : scores) {
        cout << u << " ";
    }
    cout << endl;

    return 0;
}
