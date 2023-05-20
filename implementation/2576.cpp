#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0, oddSum = 0, oddMin = 100;

	for (int i = 0;i < 7;i++) {
		cin >> input;

		if (input % 2 == 1) {
			oddSum += input;
			oddMin = min(oddMin, input);
		}
	}

	if (oddSum == 0)
		cout << -1;
	else
		cout << oddSum << '\n' << oddMin;
	return 0;
}
