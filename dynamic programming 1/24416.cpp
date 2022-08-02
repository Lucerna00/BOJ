#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int f[41] = { 0,1,1, }, n = 0;

	cin >> n;

	for (int i = 3;i <= n;i++)
		f[i] = f[i - 1] + f[i - 2];

	cout << f[n] << ' ' << n - 2;
	return 0;
}