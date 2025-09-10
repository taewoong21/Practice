#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    
    int i=0;
    int j=0;
    
    for(string& word : goal)
    {
        if(cards1[i] == word)
        {
            i++;
        }
        else if(cards2[j] == word)
        {
            j++;
        }
        else
        {
            return "No";
        }
    }
    
    return "Yes";
}