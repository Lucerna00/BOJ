#include<iostream>
#include<vector>

using namespace std;

int arr[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	vector<int>answer;

	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> arr[i];

	for (int i = N - 1;i >= 0;i--)
		answer.insert(answer.begin() + arr[i], i + 1);

	for (vector<int>::iterator i = answer.begin();i != answer.end();i++)
		cout << *i << " ";
	return 0;
}
