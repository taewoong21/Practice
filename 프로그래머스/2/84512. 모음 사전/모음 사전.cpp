#include <string>
#include <vector>

using namespace std;

string vowel = "AEIOU";

int answer = 0;
int cnt = 0;

void dfs(string cur, string target) 
{
    if (answer > 0) return;
    
    if (cur == target) 
    {
        answer = cnt;
        return;
    }

    if (cur.length() >= 5) return;

    for (int i = 0; i < 5; i++) 
    {
        cnt++; 
        dfs(cur + vowel[i], target);
    }
}

int solution(string word) 
{
    dfs("", word);
    
    return answer;
}