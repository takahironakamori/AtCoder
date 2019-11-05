#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long r = 0;

  vector<long long> arr(n);

  for (int i = 0; i < n; i++){
    if(i < 2){
      arr[i] = 0;
    } else if(i == 2){
      arr[i] = 1;
    } else {
      arr[i] = (arr[i-3] + arr[i-2] + arr[i-1] ) % 10007;
    }
    r = arr[i];
  }

  cout << r << endl;
 
}
