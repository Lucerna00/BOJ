#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s[10];
	int N = 0, len = 0, e = 1, alphabet[26] = { 0, }, digit = 9, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s[i];
		len = s[i].length();
		for (int j = len - 1;j >= 0;j--) {
			e = 1;
			for (int k = 0;k < j;k++)
				e *= 10;
			alphabet[s[i][len - j - 1] - 'A'] += e;
		}
	}

	sort(alphabet, alphabet + 26, greater<int>());
	for (int i = 0;i < 26;i++)
		answer += (alphabet[i] * (digit--));

	cout << answer;
	return 0;
}
