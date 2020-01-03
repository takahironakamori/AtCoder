#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i];
  }

  sort(x.begin(), x.end(), std::greater<int>());

  vector<int> y(M);
  for (int i = 0; i < M; i++) {
    cin >> y[i];
  }

  sort(y.begin(), y.end());

  string answer = "War";

  for (int i = X + 1; i <= Y; i++) {
    if(x[0] < i && i <= y[0]) {
      answer = "No War";
      break;
    }
  }  

  cout << answer << endl;

}