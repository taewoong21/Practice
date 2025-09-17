#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) 
{
    int answer = 0;
    int recent = 0;
    
    for(int s : section)
    {
        if(s > recent)
        {
            answer++;
            recent = s+m-1;
        }
    }
    
    return answer;
}