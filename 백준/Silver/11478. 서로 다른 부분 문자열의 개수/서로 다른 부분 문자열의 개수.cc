#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	string s;

	cin >> s;

	set<string> words;
	
	for (int i = 0; i < s.size(); ++i)
	{
		for (int j = i; j < s.size(); ++j)
		{
			words.insert(s.substr(i, j - i + 1));
		}
	}

	cout << words.size();

	return 0;
}