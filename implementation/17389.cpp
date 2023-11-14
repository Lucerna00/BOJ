#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, bonus = 0, answer = 0;
	string S;

	cin >> N;
	cin >> S;

	for (int i = 0;i < (int)(S.length());i++) {
		if (S[i] == 'O') {
			answer += (i + 1 + bonus);
			bonus += 1;
		}
		else
			bonus = 0;
	}

	cout << answer;
	return 0;
}
