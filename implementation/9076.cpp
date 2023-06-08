#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0;
	vector<int> v;

	cin >> T;
	while (T--) {
		v.clear();

		for (int i = 0;i < 5;i++) {
			cin >> N;

			v.push_back(N);
		}

		sort(v.begin(), v.end());

		if (v[3] - v[1] >= 4)
			cout << "KIN\n";
		else
			cout << v[1] + v[2] + v[3] << '\n';
	}
	return 0;
}