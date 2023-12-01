#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int total = 0, input = 0, sum = 0;

	cin >> total;
	for (int i = 0;i < 9;i++) {
		cin >> input;

		sum += input;
	}

	cout << total - sum;
	return 0;
}
