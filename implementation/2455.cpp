#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int out = 0, in = 0, total = 0, answer = 0;

	for (int i = 0;i < 4;i++) {
		cin >> out >> in;

		total += (in - out);
		answer = max(answer, total);
	}

	cout << answer;
	return 0;
}
