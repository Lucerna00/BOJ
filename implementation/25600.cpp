#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, a = 0, d = 0, g = 0, answer = 0;

	cin >> N;
	while (N--) {
		cin >> a >> d >> g;

		answer = max(answer, (a * (d + g)) * ((a == d + g) + 1));
	}

	cout << answer;
	return 0;
}
