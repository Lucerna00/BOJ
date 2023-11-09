#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, B = 0, index = 0, answer = 0;

	cin >> N >> M;

	vector<int> A(N);

	for (int i = 0;i < N;i++)
		cin >> A[i];

	for (int i = 0;i < M;i++) {
		cin >> B;

		while (true) {
			if (A[index] >= B) {
				A[index] -= B;
				break;
			}
			else
				index++;
		}
	}
	for (int i = 0;i < N;i++)
		answer += A[i];

	cout << answer;
	return 0;
}
