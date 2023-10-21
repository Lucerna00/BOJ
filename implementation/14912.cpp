#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, d = 0, answer = 0;

	cin >> n >> d;

	for (int i = 1;i <= n;i++) {
		int temp = i;

		while (temp) {
			if (temp % 10 == d)
				answer++;
			temp /= 10;
		}
	}

	cout << answer;
	return 0;
}
