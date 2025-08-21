#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> v) {
    int answer = 0;
    
    for(int i=1; i<10; i++)
    {
        auto it = find(v.begin(), v.end(), i); 
        if (it == v.end()) answer += i;
             
    }
    
    return answer;
}