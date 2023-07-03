#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int date = 0, num = 0, answer = 0;

	cin >> date;
	for (int i = 0;i < 5;i++) {
		cin >> num;

		if (num == date)
			answer++;
	}

	cout << answer;
	return 0;
}
