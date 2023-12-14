#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char c = 'A';
	int temp = 0, answer = 0;
	string input;

	cin >> input;

	for (int i = 0;i < (int)(input.length());i++) {
		temp = abs(input[i] - c);
		answer += min(temp, 26 - temp);
		c = input[i];
	}

	cout << answer;
	return 0;
}
