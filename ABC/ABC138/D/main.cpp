#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<set<int>> tree;
vector<int> point;

void dfs(int parent) {

  visited[parent] = true;

  for (int i_ : tree[parent]) {
    if (!visited[i_]) {
      point[i_] += point[parent];
      dfs(i_);
    }
  }
 
}

int main() {

  int N, Q;
  cin >> N >> Q;

  tree.resize(N);
  visited.resize(N);
  point.resize(N);

  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    tree[a - 1].insert(b - 1);
    tree[b - 1].insert(a - 1);
  }
  
  for (int i = 0; i < Q; i++) {
    int p, x;
    cin >> p >> x;
    point[p - 1] += x;
  }

  dfs(0);

  for (int i = 0; i < N; i++) {
    cout << point[i] << " ";
  }

  cout << endl;

}