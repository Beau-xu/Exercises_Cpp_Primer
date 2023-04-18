#include <iostream>

using namespace std;

int sum(initializer_list<int> iList)
{
    int res = 0;
    for (auto beg = iList.begin(); beg != iList.end(); ++beg)
        res += *beg;
    return res;
}

int main()
{
    int ans = 0;
    ans = sum({ 4, 5, 9 });
    cout << ans << endl;
    return 0;
}
