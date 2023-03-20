#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	int answer = 0;

	cin >> S;

	for (int i = 0;i < S.length();i++) {
		if (S[i] != S[i + 1])
			answer++;
	}

	cout << answer / 2;
	return 0;
}
