#include <string>
#include <map>
#include <cctype>
using namespace std;

int solution(string s) {
    map<string, char> dict = {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'},
        {"four", '4'}, {"five", '5'}, {"six", '6'},
        {"seven", '7'}, {"eight", '8'}, {"nine", '9'}
    };

    string res;
    string word;

    for (char c : s) {
        if (isdigit(c)) {
            res.push_back(c);
            word.clear();
        } else {
            word.push_back(c);
            if (dict.count(word)) {   
                res.push_back(dict[word]);
                word.clear();
            }
        }
    }
    return stoi(res);
}
