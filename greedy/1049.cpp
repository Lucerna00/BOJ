#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, input = 0, pack = 1000, single = 1000;

	cin >> N >> M;
	for (int i = 0;i < M;i++) {
		cin >> input;
		pack = min(pack, input);
		cin >> input;
		single = min(single, input);
	}

	cout << min(pack * (N / 6 + 1), min(pack * (N / 6) + single * (N % 6), single * N));
	return 0;
}
