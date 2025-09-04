#include <string>
#include <vector>
#include <queue>
#include <functional> 

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int& val : score)
    {
        if(pq.size() < k)
        {
            pq.push(val);
        }
        else
        {
            pq.push(val);
            pq.pop();
        }
        answer.push_back(pq.top());
    }
    
    return answer;
}