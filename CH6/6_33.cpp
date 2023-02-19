#include <iostream>
// #include <string>
// #include <cctype>
#include <vector>

using namespace std;

void printVec(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg == end)
        return;
    cout << *beg << endl;
    printVec(++beg, end);
}

int main()
{
    vector<int> ivec({ 1, 2, 3, 4 });
    printVec(ivec.begin(), ivec.end());
    return 0;
}

// g++ -Wall -pedantic -std=c++11 prog1.cpp && a.exe < text
