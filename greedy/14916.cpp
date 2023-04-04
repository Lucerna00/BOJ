#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, answer = 0;

	cin >> n;

	while (n > 0) {
		if (n % 5 != 0) {
			n -= 2;
			answer++;
		}
		else {
			answer += (n / 5);
			n = 0;
			break;
		}
	}

	if (n != 0)
		cout << -1;
	else
		cout << answer;
	return 0;
}