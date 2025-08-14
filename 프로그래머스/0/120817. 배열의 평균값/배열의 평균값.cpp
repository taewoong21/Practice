#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double res = 0;
    
    for(int &val : numbers) res += val;
    
    return res / numbers.size();
}