#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, C = 0, N = 0, a = 0, b = 0, c = 0, answer = 0;

	cin >> A >> B >> C;
	cin >> N;

	for (int i = 0;i < N;i++) {
		int sum = 0;

		for (int j = 0;j < 3;j++) {
			cin >> a >> b >> c;

			sum += (A * a + B * b + C * c);
		}

		answer = max(answer, sum);
	}

	cout << answer;
	return 0;
}