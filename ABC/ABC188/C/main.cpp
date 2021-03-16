#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  int count = pow(2,N);
  vector<int> A(count);

  for (int i = 0; i < count; ++i) {
    cin >> A[i];
  }

  int ans = 0;

  int leftV = 0;
  int leftI = 0;

  for (int i = 0; i < count / 2; ++i) {
    if (leftV < A[i]) {
      leftV = A[i];
      leftI = i + 1;
    }
  }

  int rightV = 0;
  int rightI = 0;

  for (int i = count / 2; i < count; ++i) {
    if (rightV < A[i]) {
      rightV = A[i];
      rightI = i + 1;
    }
  }
  
  if (leftV < rightV) {
    ans = leftI;
  } else {
    ans = rightI;
  }

  cout << ans << endl;

  return 0;

}