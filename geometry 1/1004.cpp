#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, count = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, n = 0, cx = 0, cy = 0, r = 0;

	cin >> T;
	while (T--) {
		count = 0;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		while (n--) {
			cin >> cx >> cy >> r;
			if (((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) <= r * r) != ((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) <= r * r))
				count++;
		}
		cout << count << '\n';
	}
	return 0;
}
