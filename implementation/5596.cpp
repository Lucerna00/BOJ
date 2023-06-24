#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum[2] = { 0, };
	int score = 0;

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 4;j++) {
			cin >> score;

			sum[i] += score;
		}
	}

	cout << (sum[0] >= sum[1] ? sum[0] : sum[1]);
	return 0;
}