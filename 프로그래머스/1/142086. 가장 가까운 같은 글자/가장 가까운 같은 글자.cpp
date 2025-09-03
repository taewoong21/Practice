#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i=0; i < s.size(); ++i)
    {
        if(i==0)
        {
            answer.push_back(-1);
            continue;
        }
        
        size_t it = s.rfind(s[i], i-1);
        
        if(it != string::npos)
        {
            answer.push_back(i-it);
        }
        else
        {
            answer.push_back(-1);
        }
    }
    
    return answer;
}