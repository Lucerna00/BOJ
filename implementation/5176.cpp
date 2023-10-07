#include<iostream>
#include<set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K = 0, P = 0, M = 0, num = 0;

	cin >> K;
	while (K--) {
		set<int> s;

		cin >> P >> M;
		for (int i = 0;i < P;i++) {
			cin >> num;

			s.insert(num);
		}

		cout << P - s.size() << '\n';
	}
	return 0;
}
