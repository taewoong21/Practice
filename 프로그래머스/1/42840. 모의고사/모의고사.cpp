#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> res(3, 0);
    vector<int> _1st = {1,2,3,4,5};
    vector<int> _2nd = {2,1,2,3,2,4,2,5};
    vector<int> _3rd = {3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0; i<answers.size(); ++i)
    {
        if(answers[i] == _1st[i%5])
        {
            res[0]++;
        }
        if(answers[i] == _2nd[i%8])
        {
            res[1]++;
        }
        if(answers[i] == _3rd[i%10])
        {
            res[2]++;
        }
            
    }
    
    int max = *max_element(res.begin(), res.end());
    
    for(int i=0; i<res.size(); ++i)
    {
        if(max == res[i])
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}