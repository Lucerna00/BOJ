#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;
	string addr, pw;
	unordered_map<string, string> m;

	cin >> N >> M;
	while(N--) {
		cin >> addr >> pw;

		m[addr] = pw;
	}

	while (M--) {
		cin >> addr;

		cout << m[addr] << '\n';
	}
	return 0;
}
