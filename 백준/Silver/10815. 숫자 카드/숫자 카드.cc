#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	int N;
	cin >> N;

	int num;

	unordered_set<int> cards;
	for (int i = 0; i < N; ++i)
	{
		cin >> num;
		cards.insert(num);
	}

	int M; 
	cin >> M;

	
	for (int i = 0; i < M; ++i)
	{
		cin >> num; 

		if (cards.count(num))
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}

	return 0;
}