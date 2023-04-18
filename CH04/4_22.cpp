#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec = {};
    int i = 0;
    string state = "";

    while (cin >> i) {
        ivec.push_back(i);
    }

    for (auto grade : ivec) {
        state = (grade > 90) ? "high_pass" : (grade > 75) ? "pass"
            : (grade > 60)                                ? "low_pass"
                                                          : "fail";
        cout << state << " ";
    }
    cout << endl;

    for (auto grade : ivec) {
        if (grade > 90)
            cout << "high_pass";
        else if (grade > 75)
            cout << "pass";
        else if (grade > 60)
            cout << "low_pass";
        else
            cout << "fail";
        cout << " ";
    }
    cout << endl;

    return 0;
}
