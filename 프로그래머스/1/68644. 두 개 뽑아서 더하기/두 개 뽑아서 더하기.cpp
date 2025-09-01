#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size()-1; i++)
    {
        for(int j=i+1; j<numbers.size(); j++)
        {
            auto it = find(answer.begin(), answer.end(), numbers[i]+numbers[j]);
            
            if(it != answer.end()) continue;
            else answer.push_back(numbers[i]+numbers[j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}