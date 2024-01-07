#include<iostream>

using namespace std;

int line[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, X = 0, Y = 0, temp = 0, answer = 0;

	cin >> N;
	while (N--) {
		cin >> X >> Y;

		line[X]++;
		line[Y]--;
	}

	for (int i = 1;i <= 10000;i++) {
		temp += line[i];

		if (temp > 0)
			answer++;
	}

	cout << answer;
	return 0;
}
