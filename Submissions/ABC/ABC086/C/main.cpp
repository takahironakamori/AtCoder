#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> t(N);
  vector<int> x(N);
  vector<int> y(N);
  
  for (int i = 0; i < N; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }

  string result = "Yes";

  for (int i = 0; i < N; i++) {
    
    int distance = x[i] + y[i];
    
    if (t[i] < distance) {
      result = "No";
      break;
    } else if (distance % 2 != t[i] % 2) {
      result = "No";
      break;
    }
  }

  cout << result << endl;

}