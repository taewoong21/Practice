#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
    int answer = 0;
    vector<int> divisor(number+1, 0);
    
    for(int i=1; i<= number; ++i)
    {
        for(int j=i; j<=number; j+=i)
        {
            divisor[j]++;
        }
    }
    
    for(int i=1; i<=number; ++i)
    {
        if(divisor[i] > limit)
        {
            answer += power;
        }
        else
        {
            answer += divisor[i];
        }
    }
    
    return answer;
}