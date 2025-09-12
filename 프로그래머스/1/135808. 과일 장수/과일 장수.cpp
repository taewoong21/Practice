#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.rbegin(), score.rend());
    
    vector<int> tmp;
    int idx = 0;
    int cnt = 0;
    
    for(int& val : score)
    {
        idx++;
        tmp.push_back(val);
        if(idx == m)
        {
            idx = 0;
            answer += tmp[m-1]*m;
            tmp.clear();
        }
    }
    
    return answer;
}