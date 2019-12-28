#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;
  
  int answer = 0;

  if (B < 10) {
    answer = (A * 10 + B) * 2;
  } else if (10 <= B && B <= 99) {
    answer = (A * 100 + B) * 2;
  } else {
    answer = (A * 1000 + B) * 2;
  }

  cout << answer << endl;
 
}