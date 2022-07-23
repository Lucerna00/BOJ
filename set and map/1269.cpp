#include<iostream>
#include<map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0, temp = 0;
	map<int, bool> set;

	cin >> A >> B;
	for (int i = 0;i < A + B;i++) {
		cin >> temp;
		if (!set[temp])
			set[temp] = true;
		else
			set.erase(temp);
	}

	cout << set.size();
	return 0;
}