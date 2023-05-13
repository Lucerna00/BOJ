#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len[3] = { 0, };

	cin >> len[0] >> len[1] >> len[2];

	sort(len, len + 3);
	if (len[0] + len[1] <= len[2])
		cout << 2 * (len[0] + len[1]) - 1;
	else
		cout << len[0] + len[1] + len[2];
	return 0;
}
