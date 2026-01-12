#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<string> answer;
bool visited[10002]; 
bool isFinished = false; 

void dfs(string cur, vector<string>& routes, vector<vector<string>>& tickets) 
{
    
    if (isFinished) return;
                                 
    if (routes.size() == tickets.size() + 1) 
    {
        answer = routes; 
        isFinished = true; 
        return;
    }

    for (int i = 0; i < tickets.size(); ++i) 
    {
        if (!visited[i] && tickets[i][0] == cur) 
        {
            visited[i] = true;
            routes.push_back(tickets[i][1]);

            dfs(tickets[i][1], routes, tickets);

            if (isFinished) return;

            routes.pop_back();
            visited[i] = false;
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) 
{
    answer.clear();
    isFinished = false;
   
    fill(visited, visited + tickets.size(), false);

    sort(tickets.begin(), tickets.end());

    vector<string> routes;
    routes.push_back("ICN"); 
    
    dfs("ICN", routes, tickets);
    
    return answer;
}
