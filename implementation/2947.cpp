#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num[5] = { 0, };

	for (int i = 0;i < 5;i++)
		cin >> num[i];

	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 4;j++) {
			if (num[j] > num[j + 1]) {
				swap(num[j], num[j + 1]);

				for (int k = 0;k < 5;k++)
					cout << num[k] << ' ';
				cout << '\n';
			}
		}
	}
	return 0;
}
