#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> v;
    
    while(n/3 != 0)
    {
        v.push_back(n%3);
        n /= 3;
    }
    v.push_back(n%3);
    
    int length = v.size();
    for(int& val : v)
    {
        if(length != 1)
        {
            answer += val*pow(3,(--length));   
        }
        else
            answer += val;
    }
    
    return answer;
}