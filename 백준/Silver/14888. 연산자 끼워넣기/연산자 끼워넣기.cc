#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<int> Num;
vector<int> Operator(4);

int Max_res = -1000000001;
int Min_res = 1000000001;

void BackTracking(int cur, int idx)
{
    if (idx == N)
    {
        Max_res = max(Max_res, cur);
        Min_res = min(Min_res, cur);
        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        if (Operator[i] > 0)
        {
            Operator[i]--;

            int res = 0;

            if (i == 0)
            {
                res = cur + Num[idx];
            }
            else if (i == 1)
            {
                res = cur - Num[idx];
            }
            else if (i == 2)
            {
                res = cur * Num[idx];
            }
            else
            {
                res = cur / Num[idx];
            }

            BackTracking(res, idx + 1);

            Operator[i]++;
        }
    }
}


int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        Num.push_back(n);
    }

    for (int i = 0; i < 4; ++i)
    {
        cin >> Operator[i];
    }

    BackTracking(Num[0], 1);
    
    cout << Max_res << "\n";
    cout << Min_res << "\n";

    return 0;
}