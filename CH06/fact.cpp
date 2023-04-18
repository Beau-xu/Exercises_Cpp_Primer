#include "Chapter6.h"
#include <stdexcept>
using namespace std;

int fact(int ival)
{
    if (ival > 13 || ival < 1) {
        throw runtime_error("Input integer should be within [1, 12]");
    }
    int res = 1;
    while (ival != 1) {
        res *= ival--;
    }
    return res;
}
