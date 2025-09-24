#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer(2, 7);
    
    
    for(int num : lottos)
    {
        for(int val : win_nums) 
        {
            if(num == val)
            {
                --answer[0];
                --answer[1];
                break;
            }
            else if(num == 0)
            {
                --answer[0];
                break;
            }
        }
    }
    
    for(int i=0; i < answer.size(); ++i)
    {
        if(answer[i] > 6)
        {
            answer[i] = 6;
        }
    }
    
    return answer;
}