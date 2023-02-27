#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int A[1000000], dp[1000000] = { 1, }, answer[1000000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, index = 0, temp = 0;
	vector<int> v;

	cin >> N;
	cin >> A[0];
	v.push_back(A[0]);
	for (int i = 1;i < N;i++) {
		cin >> A[i];
		if (A[i] > v[v.size() - 1]) {
			v.push_back(A[i]);
			dp[i] = v.size();
		}
		else {
			index = lower_bound(v.begin(), v.end(), A[i]) - v.begin();
			v[index] = A[i];
			dp[i] = index + 1;
		}
	}

	temp = v.size();
	for (int i = N - 1;i >= 0 && temp;i--) {
		if (dp[i] == temp)
			answer[--temp] = A[i];
	}

	cout << v.size() << '\n';
	for (int i = 0;i < v.size();i++)
		cout << answer[i] << " ";
	return 0;
}
