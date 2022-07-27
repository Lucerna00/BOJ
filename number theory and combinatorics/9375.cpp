#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, count = 0, n = 0;
	string temp;
	map<string, int>list;

	cin >> T;
	while (T--) {
		count = 1;
		cin >> n;
		for (int i = 0;i < n;i++) {
			cin >> temp >> temp;
			list[temp]++;
		}
		for (auto e : list)
			count *= (e.second + 1);
		cout << count - 1 << '\n';
		list.clear();
	}
	return 0;
}