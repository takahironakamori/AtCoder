#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  long K;
  cin >> K;

  vector<int> v;
  v.push_back(1);

  int count = 0;
  
  for (int i = 1; i < S.size(); i++) {
    if (S[i - 1] == S[i]) {
      v[count]++;
    } else {
      count++;
      v.push_back(1);
    }
  }

  if (v.size() == 1) {

    cout << S.size() * K / 2 << endl;

  } else {

    long result = 0;
    int size = v.size();
    
    if (S[0] != S[S.size() - 1]) {
      
      for (int i = 0; i < size; i++) {
        int v_ = v[i];
        result += v_ / 2;
      }

      cout << result * K << endl;

    } else {

      for (int i = 0; i < size; i++) {
        int v_ = v[i];
        result += v_ / 2;
      }
      
      int a1 = v[0] / 2 + v[size - 1] / 2;
      int a2 = (v[0] + v[size - 1]) / 2;

      cout << result * K + (a2 - a1) * (K - 1) << endl;

    }

  }

}