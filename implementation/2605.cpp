#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, index = 0;
	vector<int> v;

	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> index;

		v.insert(v.end() - index, i);
	}

	for (int i = 0;i < n;i++)
		cout << v[i] << " ";
	return 0;
}