#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, arr[10000] = { 0, };

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> arr[i];

	if (next_permutation(arr, arr + N)) {
		for (int i = 0;i < N;i++)
			cout << arr[i] << " ";
	}
	else
		cout << -1;
	return 0;
}
