#include <bits/stdc++.h>
using namespace std;

vector<int> divisor(int N) {
  vector<int> res;
  for (int i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      res.push_back(i);
      if (i != N / i) {
        res.push_back(N / i);
      }
    }
  }
  return res;
}

int main() {

  int N;
  cin >> N;  

  int answer = 0;

  vector<int> res;

  for (int i = 1; i <= N; i++) {
    if (i % 2 == 1) {
      res = divisor(i);
      if (res.size() == 8) {
        answer++;
      }
    }
  }
  
  cout << answer << endl;

}