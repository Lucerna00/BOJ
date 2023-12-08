#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, B = 0;

	cin >> N;
	cin >> M;

	vector<int> A(M), answer(N);

	for (int i = 0;i < M;i++)
		cin >> A[i];
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			cin >> B;

			if (B == A[i])
				answer[j]++;
			else
				answer[A[i] - 1]++;
		}
	}

	for (int i = 0;i < N;i++)
		cout << answer[i] << '\n';
	return 0;
}
