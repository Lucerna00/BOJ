#include<iostream>
#include<string>

using namespace std;

string input[20];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, cnt = 0;

	cin >> N;
	cin >> input[0];
	for (int i = 1;i < N;i++) {
		cin >> input[i];

		if (input[i] >= input[i - 1])
			cnt++;
	}

	if (cnt == N - 1)
		cout << "INCREASING";
	else if (cnt == 0)
		cout << "DECREASING";
	else
		cout << "NEITHER";
	return 0;
}
