#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <memory>
#include <set>
#include <vector>

class QueryResult {
   private:
    std::string word;
    std::shared_ptr<std::set<size_t>> pSetLineNum;
    std::shared_ptr<std::vector<std::string>> pText;

   public:
    QueryResult() = default;
    QueryResult(std::string w, std::shared_ptr<std::set<size_t>> s,
                std::shared_ptr<std::vector<std::string>> v)
        : word(w), pSetLineNum(s), pText(v) {}
    friend std::ostream &print(std::ostream &, QueryResult);
};

std::ostream &print(std::ostream &os, QueryResult qr) {
    if (qr.pSetLineNum == nullptr) {
        os << qr.word << " occurs 0 time" << std::endl;
        return os;
    }
    os << qr.word << " occurs " << qr.pSetLineNum->size() << " time(s)" << '\n';
    for (auto num : *qr.pSetLineNum)
        os << '\t' << "(line " << num << ") " << (*qr.pText)[num-1] << '\n';
    os << std::endl;
    return os;
}

#endif  // QUERYRESULT_H
