#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(string X, string Y) {
    string answer = ""; 

    vector<int> countX(10, 0); 
    vector<int> countY(10, 0);

    for (char c : X) 
    {
        countX[c - '0']++;
    }
    for (char c : Y) 
    {
        countY[c - '0']++;
    }

    for (int k = 9; k >= 0; --k) 
    {
        int commonCount = min(countX[k], countY[k]);
        
        answer.append(commonCount, k + '0');
    }

    if (answer.empty()) 
    {
        return "-1";
    }
    if (answer[0] == '0') 
    {
        return "0";
    }

    return answer;
}