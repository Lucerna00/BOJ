#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;
	string temp;
	map<string, bool> list;
	vector<string> answer;

	cin >> N >> M;
	while (N--) {
		cin >> temp;
		list[temp] = true;
	}
	while (M--) {
		cin >> temp;
		if (list[temp])
			answer.push_back(temp);
	}

	sort(answer.begin(), answer.end());

	cout << answer.size() << '\n';
	for (auto e : answer)
		cout << e << '\n';
	return 0;
}