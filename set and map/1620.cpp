#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0, num = 0;
	string temp;
	map<string, int> strBook;
	map<int, string> intBook;

	cin >> N >> M;
	for (int i = 1;i <= N;i++) {
		cin >> temp;
		strBook[temp] = i;
		intBook[i] = temp;
	}

	for (int i = 0;i < M;i++) {
		cin >> temp;
		if (temp[0] < 'A')
			cout << intBook[stoi(temp)] << '\n';
		else
			cout << strBook[temp] << '\n';
	}
	return 0;
}