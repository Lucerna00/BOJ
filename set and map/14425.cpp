#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, count = 0;
	string temp;
	map<string, bool> hash;

	cin >> N >> M;
	while (N--) {
		cin >> temp;
		hash[temp] = true;
	}
	while (M--) {
		cin >> temp;
		if (hash[temp])
			count++;
	}

	cout << count;
	return 0;
}