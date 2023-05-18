#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(const pair<string, int>&, const pair<string, int>&);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0, L = 0;
	string id;
	unordered_map<string, int> m;

	cin >> K >> L;
	for (int i = 0;i < L;i++) {
		cin >> id;

		m[id] = i;
	}

	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);

	for (int i = 0;i < min(K, (int)(v.size()));i++)
		cout << v[i].first << '\n';
	return 0;
}

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	return a.second < b.second;
}
