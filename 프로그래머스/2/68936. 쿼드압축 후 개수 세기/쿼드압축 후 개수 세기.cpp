#include <string>
#include <vector>

using namespace std;

void Compress(int x, int y, int size, const vector<vector<int>>& arr, vector<int>& answer)
{
    int val = arr[x][y];
    bool bIsSame = true;
    
    for(int i = x; i < x + size; ++i)
    {
        for(int j = y; j < y + size; ++j)
        {
            if(arr[i][j] != val)
            {
                bIsSame = false;
                break;
            }
        }
        if(!bIsSame) break;
    }
    
    if(bIsSame)
    {
        answer[val]++;
        return;
    }
    
    Compress(x, y, size/2, arr, answer);
    Compress(x + size/2, y, size/2, arr, answer);
    Compress(x, y + size/2, size/2, arr, answer);
    Compress(x + size/2, y + size/2, size/2, arr, answer);
}

vector<int> solution(vector<vector<int>> arr) 
{
    int N = arr.size();
    
    vector<int> answer(2, 0);
    
    Compress(0, 0, N, arr, answer);
    
    return answer;
}