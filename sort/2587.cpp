#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input[5] = { 0, }, avg = 0, mid = 0;

	for (int i = 0;i < 5;i++) {
		cin >> input[i];
		avg += input[i];
	}

	sort(input, input + 5);

	cout << avg / 5 << '\n' << input[2];
	return 0;
}
