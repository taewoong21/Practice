#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N; 

    vector<int> count(26, 0);

    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;
        
        char first = name[0];

        count[first - 'a']++;
    }

    string res = "";

    for (int i = 0; i < 26; ++i) 
    {
        if (count[i] >= 5)
        {  
            res += (char)('a' + i);
        }
    }

    if (res.empty())
    {
        cout << "PREDAJA\n";
    } else 
    {
        cout << res << "\n";
    }

    return 0;
}