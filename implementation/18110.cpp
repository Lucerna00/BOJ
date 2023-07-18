#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, cut = 0, num = 0, answer = 0;

	cin >> n;

	if (!n) {
		cout << 0;
		return 0;
	}

	for (int i = 0;i < n;i++) {
		cin >> num;

		v.push_back(num);
	}

	sort(v.begin(), v.end());
	cut = (int)round(n * 0.15);
	for (int i = cut;i < n - cut;i++)
		answer += v[i];

	cout << (int)round((float)answer / (n - cut * 2));
	return 0;
}
