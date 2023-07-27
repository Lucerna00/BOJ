#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int getDist(string, string, string);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, answer = 12;

	cin >> T;
	while (T--) {
		cin >> N;

		vector<string> MBTI(N);

		for (int i = 0; i < N; i++)
			cin >> MBTI[i];

		if (N > 32)
			answer = 0;
		else {
			answer = 12;
			for (int i = 0; i < N - 2; i++) {
				for (int j = i + 1; j < N - 1; j++) {
					for (int k = j + 1; k < N; k++)
						answer = min(answer, getDist(MBTI[i], MBTI[j], MBTI[k]));
				}
			}
		}

		cout << answer << '\n';
	}
	return 0;
}

int getDist(string a, string b, string c) {
	int dist = 0;

	for (int i = 0; i < 4; i++) {
		if (a[i] != b[i])
			dist++;
		if (b[i] != c[i])
			dist++;
		if (c[i] != a[i])
			dist++;
	}
	return dist;
}
