#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0, b = 0, temp = 0, answer = 0;

	for (int i = 0;i < 10;i++) {
		cin >> a >> b;

		temp = (temp - a + b);
		answer = max(answer, temp);
	}

	cout << answer;
	return 0;
}
