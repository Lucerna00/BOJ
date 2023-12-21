#include<iostream>

using namespace std;

int A[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, B = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> A[i];
	for (int i = 0;i < N;i++) {
		cin >> B;

		if (B >= A[i])
			answer++;
	}

	cout << answer;
	return 0;
}
