#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, index = 1, answer = 0;

	cin >> A >> B;

	for (int i = 1;i <= B;i++) {
		for (int j = 1;j <= i;j++) {
			if (index >= A && index <= B)
				answer += i;
			index++;
		}
	}

	cout << answer;
	return 0;
}
