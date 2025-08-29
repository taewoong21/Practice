#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    sort(strings.begin(), strings.end(), [&n](string a, string b){

        if(a[n] != b[n]) return a[n] < b[n];
        else return a < b;
    });
    
    return strings;
}