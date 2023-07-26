#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, cnt = 0, answer = 0;
	string S;

	cin >> N;
	cin >> M;
	cin >> S;

	for (int i = 0; i <= M - 3;) {
		if (S.substr(i, 3) == "IOI") {
			cnt++;
			i += 2;
		}
		else {
			answer += (cnt - N + 1 >= 0 ? cnt - N + 1 : 0);
			cnt = 0;
			i++;
		}
	}
	answer += (cnt - N + 1 >= 0 ? cnt - N + 1 : 0);

	cout << answer;
	return 0;
}
