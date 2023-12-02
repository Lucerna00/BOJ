#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool flag = false;
	int input = 0, sum = 0;

	for (int i = 0;i < 9;i++) {
		cin >> input;

		sum += input;
		if (input > 100 * (i / 2 + 1))
			flag = true;
	}

	if (flag)
		cout << "hacker";
	else if (sum >= 100)
		cout << "draw";
	else
		cout << "none";
	return 0;
}
