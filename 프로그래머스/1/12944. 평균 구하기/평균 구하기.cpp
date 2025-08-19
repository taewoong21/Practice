#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for(int val : arr)
    {
        answer += val;
    }
    
    return answer / arr.size();
}