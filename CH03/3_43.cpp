#include <iostream>

using namespace std;

int main()
{
    int ia[3][4] = {};
    int temp = 0;
    // `auto` for initialization
    for (auto& row : ia) {
        for (auto& item : row) {
            item = temp;
            ++temp;
        }
    }

    cout << "range for:" << endl;
    for (const int(&row)[4] : ia) {
        for (const int item : row) {
            cout << item << " ";
        }
        cout << endl;
    }

    cout << endl
         << "index:" << endl;
    for (size_t row_cnt = 0; row_cnt != 3; ++row_cnt) {
        for (size_t col_cnt = 0; col_cnt != 4; ++col_cnt) {
            cout << ia[row_cnt][col_cnt] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "pointer" << endl;
    for (int(*prow)[4] = ia; prow != ia + 3; ++prow) {
        for (int* pcol = *prow; pcol != *prow + 4; ++pcol) {
            cout << *pcol << " ";
        }
        cout << endl;
    }

    return 0;
}
