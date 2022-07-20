#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, num = 0, M = 0;
	vector<int> card;

	cin >> N;
	while (N--) {
		cin >> num;
		card.push_back(num);
	}

	sort(card.begin(), card.end());

	cin >> M;
	while (M--) {
		cin >> num;
		cout << binary_search(card.begin(), card.end(), num) << ' ';
	}
	return 0;
}