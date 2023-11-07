#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, A = 0, B = 0, C = 0;

	cin >> T;
	while (T--) {
		int answer = 0;

		cin >> N;

		for (int i = 0;i < N;i++) {
			cin >> A >> B >> C;

			answer += max({ 0, A, B, C });
		}

		cout << answer << '\n';
	}
	return 0;
}
