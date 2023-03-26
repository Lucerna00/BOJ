#include<iostream>
#include<algorithm>

using namespace std;

int weights[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> weights[i];

	sort(weights, weights + N);
	answer = 1;
	for (int i = 0;i < N;i++) {
		if (answer < weights[i])
			break;
		answer += weights[i];
	}

	cout << answer;
	return 0;
}
