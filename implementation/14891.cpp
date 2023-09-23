#include<iostream>
#include<deque>

using namespace std;

bool rotated[4];
deque<char> gear[4];

void rotate(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char s = 0;
	int K = 0, n = 0, d = 0;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 8;j++) {
			cin >> s;
			gear[i].push_back(s);
		}
	}
	cin >> K;
	while (K--) {
		cin >> n >> d;

		rotate(n - 1, d);
	}

	cout << gear[0][0] - '0' + (gear[1][0] - '0') * 2 + (gear[2][0] - '0') * 4 + (gear[3][0] - '0') * 8;
	return 0;
}

void rotate(int n, int d) {
	rotated[n] = true;
	if (n > 0 && !rotated[n - 1] && gear[n][6] != gear[n - 1][2])
		rotate(n - 1, -d);
	if (n < 3 && !rotated[n + 1] && gear[n][2] != gear[n + 1][6])
		rotate(n + 1, -d);
	if (d == 1) {
		gear[n].push_front(gear[n].back());
		gear[n].pop_back();
	}
	else {
		gear[n].push_back(gear[n].front());
		gear[n].pop_front();
	}
	rotated[n] = false;
}
