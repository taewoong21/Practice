#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(char a, char b)
{
    return a > b;
}

long long solution(long long n) {
    
    string s = to_string(n);
    
    sort(s.begin(), s.end(), comp);
    
    
    return stoll(s);
}