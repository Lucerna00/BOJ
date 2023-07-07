#include<iostream>

using namespace std;

int students[6][2];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 0, S = 0, Y = 0, answer = 0;

	cin >> N >> K;
	while (N--) {
		cin >> S >> Y;

		students[Y - 1][S]++;
	}

	for (int i = 0;i < 6;i++)
		answer += (students[i][0] / K + (students[i][0] % K == 0 ? 0 : 1) + students[i][1] / K + (students[i][1] % K == 0 ? 0 : 1));

	cout << answer;
	return 0;
}
