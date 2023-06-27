#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input, answer;
	int temp = 0, cnt = 0;

	cin >> input;

	if (input.compare("0") == 0) {
		cout << '0';
		return 0;
	}

	for (int i = input.length() - 1;i >= 0;i--) {
		temp = input[i] - '0';
		cnt = 0;
		while (temp) {
			answer.push_back((temp % 2) + '0');
			temp /= 2;
			cnt++;
		}
		while (cnt < 3) {
			answer.push_back('0');
			cnt++;
		}
	}
	while (answer.back() == '0')
		answer.pop_back();
	reverse(answer.begin(), answer.end());

	cout << answer;
	return 0;
}
