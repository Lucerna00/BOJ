#include<iostream>
#include<string>

using namespace std;

int prefixSum[26][200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char a = 0;
	int q = 0, l = 0, r = 0;
	string input;

	cin >> input >> q;
	for (int i = 1;i <= input.length();i++)
		prefixSum[input[i - 1] - 97][i]++;
	for (int i = 0;i < 26;i++) {
		for (int j = 1;j <= input.length();j++)
			prefixSum[i][j] = prefixSum[i][j - 1] + prefixSum[i][j];
	}
	while (q--) {
		cin >> a >> l >> r;
		cout << prefixSum[a - 97][r + 1] - prefixSum[a - 97][l] << '\n';
	}
	return 0;
}