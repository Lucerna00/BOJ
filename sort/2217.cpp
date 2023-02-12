#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, rope[100000] = { 0, }, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> rope[i];

	sort(rope, rope + N);
	for (int i = 0;i < N;i++)
		answer = max(answer, rope[i] * (N - i));

	cout << answer;
	return 0;
}
