#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, sum1 = 0, sum2 = 0;

	cin >> N;

	for (int i = 1;i <= N;i++) {
		sum1 += i;
		sum2 += (i * i * i);
	}

	cout << sum1 << '\n' << sum1 * sum1 << '\n' << sum2;
	return 0;
}
