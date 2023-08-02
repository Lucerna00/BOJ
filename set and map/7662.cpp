#include<iostream>
#include<set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char command = 0;
	int T = 0, k = 0, n = 0;

	cin >> T;
	while (T--) {
		cin >> k;

		multiset<int> ms;

		for (int i = 0;i < k;i++) {
			cin >> command >> n;

			if (command == 'I')
				ms.insert(n);
			else if (!ms.empty()) {
				if (n == 1)
					ms.erase(--ms.end());
				else
					ms.erase(ms.begin());
			}
		}

		if (!ms.empty())
			cout << *(--ms.end()) << " " << *ms.begin() << '\n';
		else
			cout << "EMPTY\n";
	}
	return 0;
}
