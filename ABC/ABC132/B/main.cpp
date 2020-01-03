#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  int answer = 0;

  for (int i = 1; i < n-1; i++) {
    if (p[i] < p[i + 1] && p[i - 1] < p[i]) {
      answer++; 
    } else if (p[i] < p[i - 1] && p[i + 1] < p[i]){
      answer++;
    }
  }

  cout << answer << endl;
  
}