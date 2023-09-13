#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len = 0, mul1 = 1, mul2 = 1;
	string N, answer = "NO";

	cin >> N;

	len = (int)(N.length());
	for (int i = 1;i < len;i++) {
		mul1 = 1;
		mul2 = 1;
		for (int j = 0;j < i;j++)
			mul1 *= (N[j] - '0');
		for (int j = i;j < len;j++)
			mul2 *= (N[j] - '0');
		if (mul1 == mul2) {
			answer = "YES";
			break;
		}
	}

	cout << answer;
	return 0;
}
