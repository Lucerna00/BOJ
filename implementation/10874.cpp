#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, ans = 0;

	cin >> N;
	for (int i = 1;i <= N;i++) {
		bool flag = true;

		for (int j = 1;j <= 10;j++) {
			cin >> ans;

			if (ans != (j - 1) % 5 + 1)
				flag = false;
		}

		if (flag)
			cout << i << '\n';
	}
	return 0;
}
