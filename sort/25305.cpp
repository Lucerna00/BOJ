#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, k = 0, list[1000] = { 0 };

	cin >> N >> k;
	for (int i = 0;i < N;i++)
		cin >> list[i];

	sort(list, list + N, greater<int>());

	cout << list[k - 1];
	return 0;
}