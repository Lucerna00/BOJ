#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	int answer = 0;

	cin >> input;

	for (char i : input) {
		answer *= 16;
		if (i >= 'A')
			answer += (i - 'A' + 10);
		else
			answer += (i - '0');
	}

	cout << answer;
	return 0;
}
