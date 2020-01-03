#include <bits/stdc++.h>
using namespace std;


int main() {

  int A, B, K;
  cin >> A >> B >> K;

  vector<int> answer;

  for (int i = 1; i <= 100; i++) {
    if (A % i == 0 && B % i == 0) {
      answer.push_back(i);
    }
  }

  sort(answer.begin(), answer.end(), std::greater<int>());

  cout << answer[K - 1] << endl;

}