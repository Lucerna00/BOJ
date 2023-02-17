#include<iostream>

using namespace std;

int S[13], k, output[6];

void dfs(int, int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0;

	while (1) {
		cin >> k;
		if (!k)
			break;
		for (int i = 0;i < k;i++)
			cin >> S[i];
		dfs(0, 0);
		cout << '\n';
	}
	return 0;
}

void dfs(int start, int index) {
	if (index == 6) {
		for (int i = 0;i < 6;i++)
			cout << output[i] << " ";
		cout << '\n';
	}
	else {
		for (int i = start;i < k;i++) {
			output[index] = S[i];
			dfs(i + 1, index + 1);
		}
	}
}
