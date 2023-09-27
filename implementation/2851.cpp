#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int mushrooms[10] = { 0, }, temp = 0, answer = 0;

	for (int i = 0;i < 10;i++) {
		cin >> mushrooms[i];

		temp += mushrooms[i];
		if (abs(temp - 100) <= abs(answer - 100))
			answer = temp;
	}

	cout << answer;
	return 0;
}
