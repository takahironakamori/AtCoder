#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> v(N);
  int answer = 0;
  bool validate = false;
  for (int i = 0; i < N; i++) {
    int p;
    cin >> p;
    if ((p - 1) == i) {
      v[i] = 1;
      if (validate) {
        validate = false;
      } else {
        answer++;
        validate = true;
      }
    } else {
      
    }
  }

  cout << answer << endl;

}