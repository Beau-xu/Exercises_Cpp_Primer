#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    std::istream_iterator<int> itCin(std::cin), eof;
    std::ostream_iterator<int> itCout(std::cout, " ");
    std::vector<int> vecStr;
    std::copy(itCin, eof, std::back_inserter(vecStr));
    std::sort(vecStr.begin(), vecStr.end());
    std::unique_copy(vecStr.begin(), vecStr.end(), itCout);
    std::cout << std::endl;
}
