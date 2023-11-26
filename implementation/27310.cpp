#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	string input;

	cin >> input;

	for (char i : input) {
		if (i == ':')
			answer++;
		else if (i == '_')
			answer += 5;
		answer++;
	}

	cout << answer;
	return 0;
}
