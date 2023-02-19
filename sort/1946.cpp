#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, g1 = 0, g2 = 0, temp = 0, answer = 1;

	cin >> T;
	while (T--) {
		cin >> N;
		temp = 0;
		answer = 1;
		vector<pair<int, int>> grades;
		for (int i = 0;i < N;i++) {
			cin >> g1 >> g2;
			grades.push_back({ g1,g2 });
		}
		sort(grades.begin(), grades.end());
		for (int i = 1;i < N;i++) {
			if (grades[i].second < grades[temp].second) {
				temp = i;
				answer++;
			}
		}
		cout << answer << '\n';
	}
	return 0;
}
