#include<iostream>
#include<queue>

using namespace std;

void print(const char[], const int[], int);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, A = 0, B = 0, temp = 0;

	cin >> T;
	while (T--) {
		cin >> A >> B;

		bool visited[10000] = { false, };
		char command[10000] = { 0, };
		int previous[10000] = { 0, };
		queue<int> q;

		q.push(A);
		visited[A] = true;
		while (!q.empty()) {
			temp = q.front();
			q.pop();
			A = temp * 2 % 10000;
			if (!visited[A]) {
				command[A] = 'D';
				previous[A] = temp;

				if (A == B) {
					print(command, previous, A);
					break;
				}

				q.push(A);
				visited[A] = true;
			}
			A = (temp + 9999) % 10000;
			if (!visited[A]) {
				command[A] = 'S';
				previous[A] = temp;

				if (A == B) {
					print(command, previous, A);
					break;
				}

				q.push(A);
				visited[A] = true;
			}
			A = temp % 1000 * 10 + temp / 1000;
			if (!visited[A]) {
				command[A] = 'L';
				previous[A] = temp;

				if (A == B) {
					print(command, previous, A);
					break;
				}

				q.push(A);
				visited[A] = true;
			}
			A = temp % 10 * 1000 + temp / 10;
			if (!visited[A]) {
				command[A] = 'R';
				previous[A] = temp;

				if (A == B) {
					print(command, previous, A);
					break;
				}

				q.push(A);
				visited[A] = true;
			}
		}
	}
	return 0;
}

void print(const char command[], const int previous[], int start) {
	int cur = start;
	vector<char> answer;

	while (command[cur]) {
		answer.push_back(command[cur]);
		cur = previous[cur];
	}

	for (auto i = answer.rbegin();i != answer.rend();i++)
		cout << *i;
	cout << '\n';
}
