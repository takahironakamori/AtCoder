#include <bits/stdc++.h>
using namespace std;


int main() {

  long long N;
  cin >> N;

  set<long long> st;
  
  for (long long i = 2; i * i <= N; ++i) {
    long long v = i * i;
    while (v <= N) {
      st.insert(v);
      v *= i;
    } 
  }
  
  cout << N - st.size() << endl;

  return 0;

}