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

	int N, M; 
	cin >> N >> M;

	unordered_set<int> setA;
	int num;


	for (int i = 0; i < N; ++i)
	{
		cin >> num;
		setA.insert(num);
	}

	int intersection_count = 0; 

	for (int i = 0; i < M; ++i)
	{
		cin >> num;

		if (setA.count(num))
		{
			intersection_count++;
		}
	}

	int result = (N + M) - (2 * intersection_count);

	cout << result << "\n"; 

	return 0;
}