#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
        
    for(int i=0; i<food.size(); ++i)
    {
        if(i != 0)
        {
            for(int j=0; j<(food[i]/2); ++j)
            {
                answer += to_string(i);
            }
        }
    }
    
    answer += '0';
    
    for(int i=food.size()-1; i > 0; --i)
    {
        if(i != 0)
        {
            for(int j=0; j<(food[i]/2); ++j)
            {
                answer += to_string(i);
            }
        }
    }
    
    return answer;
}