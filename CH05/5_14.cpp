#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string lastWord = "";
    string curWord = "";
    int cnt = 1;
    vector<string> words;
    vector<int> times;
    while (cin >> curWord) {
        if (curWord == lastWord) {
            ++cnt;
        } else {
            if (cnt != 1) {
                words.push_back(lastWord);
                times.push_back(cnt);
                cnt = 1;
            }
            lastWord = curWord;
        }
    }
    decltype(words.size()) maxSize = words.size();
    if (maxSize != 0) {
        for (decltype(maxSize) i = 0; i != maxSize; ++i) {
            cout << words[i] << " " << times[i] << endl;
        }
    } else {
        cout << "No such word" << endl;
    }

    return 0;
}
