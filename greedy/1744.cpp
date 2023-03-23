#include<iostream>
#include<algorithm>

using namespace std;

int num[50];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, index1 = 0, index2 = 0, answer = 0;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> num[i];

	sort(num, num + N);
	if (N < 2) {
		cout << num[0];
		return 0;
	}
	for (;(index1 < N - 1) && (num[index1 + 1] <= 0);index1 += 2)
		answer += (num[index1] * num[index1 + 1]);
	index2 = N - 1;
	for (;(index2 > 0) && (index2 - 1 >= index1) && (num[index2 - 1] > 1);index2 -= 2)
		answer += (num[index2 - 1] * num[index2]);
	for (;index1 <= index2;index1++)
		answer += num[index1];

	cout << answer;
	return 0;
}
