#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, answer = 0;

	cin >> n;

	while (n) {
		answer += pow(n % 10, 5);
		n /= 10;
	}

	cout << answer;
	return 0;
}
