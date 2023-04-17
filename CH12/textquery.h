#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <map>
#include <sstream>

#include "queryresult.h"

class TextQuery {
   private:
    std::shared_ptr<std::vector<std::string>> pText;
    std::map<std::string, std::shared_ptr<std::set<size_t>>> mapWord2LineNum;

   public:
    TextQuery() = default;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;
};

TextQuery::TextQuery(std::ifstream &infile) : pText(new std::vector<std::string>) {
    std::istringstream strm;
    std::string line, word;
    size_t lineNum = 1;
    while (getline(infile, line)) {
        pText->push_back(line);
        strm.str(line);
        while (strm >> word) {
            auto &setLine = mapWord2LineNum[word];
            if (!setLine) setLine.reset(new std::set<size_t>);
            setLine->insert(lineNum);
        }
        strm.clear();
        ++lineNum;
    }
}

QueryResult TextQuery::query(const std::string &word) const {
    auto result = mapWord2LineNum.find(word);
    if (result == mapWord2LineNum.end()) return QueryResult(word, nullptr, pText);
    return QueryResult(word, result->second, pText);
}

#endif  // TEXTQUERY_H
