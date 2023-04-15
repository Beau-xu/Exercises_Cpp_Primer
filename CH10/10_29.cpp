#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ifstream ifs("text.txt");
    std::istream_iterator<std::string> itIfs(ifs), eof;
    std::ostream_iterator<std::string> itCout(std::cout, "\n");
    std::vector<std::string> vecStr;
    std::copy(itIfs, eof, std::back_inserter(vecStr));
    std::copy(vecStr.cbegin(), vecStr.cend(), itCout);
}
