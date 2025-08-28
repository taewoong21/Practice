#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int j=1; j<= n; j++)
    {
        for(int i=0; i < s.size(); i++)
        {
            if(s[i] == 'z')
            {
                s[i] = 'a';
            }
            else if(s[i] == 'Z')
            {
                s[i] = 'A';
            }
            else if(s[i] != ' ')
            {
                s[i]++;
            }
        }
    }
    
    return s;
}