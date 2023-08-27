#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char answer[51] = { 0, }, input = 0;
	int N = 0, len = 0;

	cin >> N;
	cin >> answer;
	for (int i = 1; i < N; i++) {
		for (int j = 0; answer[j]; j++) {
			cin >> input;

			if (input != answer[j])
				answer[j] = '?';
		}
	}

	cout << answer;
	return 0;
}
