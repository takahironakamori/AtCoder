#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<string> D(K);
  for (int i = 0; i < K; i++) {
    cin >> D[i];
  }
  
  for (int i = N; i < 100000; i++) {
    
    string s = to_string(i);

    bool res = true;

    for (int j = 0; j < K; j++) {
      if (s.find(D[j]) != std::string::npos) {
        res = false;
        break;
      }
    }

    if (res) {
      cout << i << endl;
      break;
    }

  }

}