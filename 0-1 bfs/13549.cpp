#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int N = 0, K = 0, x = 0;
   vector<int> dist(100001, 100001);
   deque<int> q;

   cin >> N >> K;

   dist[N] = 0;
   q.push_back(N);
   while (!q.empty()) {
      x = q.front();

      if (x == K) {
         cout << dist[K];
         break;
      }

      q.pop_front();
      if (2 * x <= 100000 && dist[2 * x] > dist[x]) {
         dist[2 * x] = dist[x];
         q.push_front(2 * x);
      }
      if (x - 1 >= 0 && dist[x - 1] > dist[x] + 1) {
         dist[x - 1] = dist[x] + 1;
         q.push_back(x - 1);
      }
      if (x + 1 <= 100000 && dist[x + 1] > dist[x] + 1) {
         dist[x + 1] = dist[x] + 1;
         q.push_back(x + 1);
      }
   }
   return 0;
}
