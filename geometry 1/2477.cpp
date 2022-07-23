#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0, e = 0, len = 0, temp = 0, area = 0, answer = 0;
	vector<int> list;

	cin >> K;
	for (int i = 0;i < 6;i++) {
		cin >> e >> len;
		list.push_back(len);
	}

	for (int i = 0;i < 6;i++) {
		temp = list[i] * list[(i + 1) % 6];
		if (temp > area) {
			area = temp;
			answer = (area - list[(i + 3) % 6] * list[(i + 4) % 6]) * K;
		}
	}

	cout << answer;
	return 0;
}