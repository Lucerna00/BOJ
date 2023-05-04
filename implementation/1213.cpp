#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char mid = 0;
	int alphabet[26] = { 0, }, oddCnt = 0;
	string input, output;

	cin >> input;

	for (int i = 0, len = input.length(); i < len; i++)
		alphabet[input[i] - 'A']++;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 == 1) {
			mid = i + 'A';
			oddCnt++;
		}
		for (int j = 0; j < alphabet[i] / 2; j++)
			output.push_back(i + 'A');
	}

	if (oddCnt > 1)
		cout << "I'm Sorry Hansoo";
	else {
		cout << output;
		if (mid != 0)
			cout << mid;
		reverse(output.begin(), output.end());
		cout << output;
	}
	return 0;
}
