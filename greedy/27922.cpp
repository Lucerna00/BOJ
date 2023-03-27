#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> ab, bc, ca;
	int N = 0, K = 0, a = 0, b = 0, c = 0, maxAB = 0, maxBC = 0, maxCA = 0;

	cin >> N >> K;
	for (int i = 0;i < N;i++) {
		cin >> a >> b >> c;
		ab.push_back(a + b);
		bc.push_back(b + c);
		ca.push_back(c + a);
	}

	sort(ab.begin(), ab.end(), greater<int>());
	sort(bc.begin(), bc.end(), greater<int>());
	sort(ca.begin(), ca.end(), greater<int>());
	for (int i = 0;i < K;i++) {
		maxAB += ab[i];
		maxBC += bc[i];
		maxCA += ca[i];
	}

	cout << max({ maxAB, maxBC, maxCA });
	return 0;
}