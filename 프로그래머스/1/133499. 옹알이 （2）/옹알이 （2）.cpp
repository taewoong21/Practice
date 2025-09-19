#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// word 벡터에서 target 문자열의 인덱스를 찾는 헬퍼 함수
int find_word_index(const vector<string>& word, const string& target) {
    for (int i = 0; i < word.size(); ++i) {
        if (word[i] == target) {
            return i;
        }
    }
    return -1; // 찾지 못함
}

bool comp(const vector<string>& word, const string& s)
{
    // dp[i]는 첫 i개 문자를 만들 때 마지막에 사용된 단어의 인덱스를 저장합니다.
    // -1: 조합 불가능, -2: 시작점(base case)
    vector<int> dp(s.size() + 1, -1);
    dp[0] = -2; // 시작점은 어떤 단어도 사용하지 않았다는 의미

    for (int i = 1; i <= s.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            // 1. s의 j까지 조합이 가능한 경우에만 진행 (dp[j]가 -1이 아니면)
            if (dp[j] != -1)
            {
                string sub = s.substr(j, i - j);
                int current_word_index = find_word_index(word, sub);

                // 2. 잘라낸 부분 문자열(sub)이 조합 가능한 단어이고,
                if (current_word_index != -1)
                {
                    // 3. 이전 단어와 연속되지 않는다면
                    if (current_word_index != dp[j])
                    {
                        dp[i] = current_word_index; // 현재 사용한 단어의 인덱스를 기록
                        break;
                    }
                }
            }
        }
    }

    // 최종적으로 문자열 s 전체를 만들 수 있었다면 dp[s.size()]는 -1이 아닐 것
    return dp[s.size()] != -1;
}

// solution 함수는 이전과 동일합니다.
int solution(vector<string> babbling) 
{
    int answer = 0;
    vector<string> word = {"aya", "ye", "woo", "ma"};
    
    for(string& s : babbling)
    {
        if(comp(word, s))
        {
            answer++;
        }
    }
    
    return answer;
}