#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;

    int count = 0;
    int count_diff = 0;

    char x = s[0];
    for (int i = 0; i < s.size(); ++i)
    {
        if (x == ' ')
        {
            x = s[i];
        }

        if (s[i] == x)
        {
            count++;
        }
        else if (s[i] != x)
        {
            count_diff++;

            if (count == count_diff)
            {
                answer++;
                x = ' ';
                count = 0;
                count_diff = 0;
            }
        }
    }

    if (count != 0) answer++;

    return answer;
}