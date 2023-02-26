#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, A = 0;
	vector<int> v;

	cin >> N;
	cin >> A;
	v.push_back(A);
	for (int i = 1;i < N;i++) {
		cin >> A;
		if (A > v[v.size() - 1])
			v.push_back(A);
		else
			*lower_bound(v.begin(), v.end(), A) = A;
	}

	cout << v.size();
	return 0;
}
