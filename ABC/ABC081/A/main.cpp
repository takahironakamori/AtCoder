#include <bits/stdc++.h>
using namespace std;

int main() {
 
  string N;
  cin >> N;

  int answer = 0;

  for (int i = 0; i < 3; i++) {
    if (N[i] == '1') {
      answer++;
    }
  }
  
  cout << answer << endl;

}