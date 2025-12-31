#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;
    int remainder = 0;
    
    while(n >= a)
    {
        answer += (n/a)*b;
        remainder = n%a;
        n = ((n/a)*b) + remainder; 
    }
    
    return answer;
}