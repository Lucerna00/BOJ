#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M = 0, len = 0;
	string N;

	cin >> N >> M;

	len = (int)(N.length());

	for (int i = 0;i < stoi(N) * len && i < M;i++)
		cout << N[i % len];
	return 0;
}
