#include<iostream>
#include<vector>

using namespace std;
typedef vector<vector<long long>> matrix;

const long long mod = 1000000007;

matrix operator*(matrix& a, matrix& b) {
	matrix temp(2, vector<long long>(2));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++)
				temp[i][j] = (temp[i][j] + (a[i][k] * b[k][j] % mod)) % mod;
		}
	}
	return temp;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n = 0;
	matrix F = { {1, 1}, {1, 0} }, answer = { {1, 0}, {0, 1} };

	cin >> n;

	while (n) {
		if (n % 2)
			answer = F * answer;
		F = F * F;
		n /= 2;
	}

	cout << answer[0][1];
	return 0;
}
