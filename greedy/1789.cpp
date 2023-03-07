#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int S = 0, answer = 0;

	cin >> S;

	for (int i = 1;i <= S;i++) {
		S -= i;
		answer++;
	}

	cout << answer;
	return 0;
}
