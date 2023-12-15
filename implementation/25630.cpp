#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;
	string input;

	cin >> N;
	cin >> input;

	for (int i = 0;i < N / 2;i++) {
		if (input[i] != input[N - 1 - i])
			answer++;
	}

	cout << answer;
	return 0;
}
