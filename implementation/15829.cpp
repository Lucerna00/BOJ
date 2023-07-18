#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L = 0;
	string input;
	long long r = 1, H = 0;

	cin >> L;
	cin >> input;

	for (int i = 0;i < L;i++) {
		H = (H + (input[i] - 'a' + 1) * r) % 1234567891;
		r = (r * 31) % 1234567891;
	}

	cout << H;
	return 0;
}
