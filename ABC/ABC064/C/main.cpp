#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;

  // color[0]:灰 [1]:茶 [2]:緑 [3]:水 [4]:青 [5]:黄 [6]:オレンジ [7]:赤 [8]:自由  
  vector<int> color(9);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    int b = a / 400;
    if (8 <= b) {
      color[8]++;
    } else {
      color[b]++;
    }
  }

  int min = 0;
  int max = 0;

  for (int i = 0; i < 8; i++) {
    if (color[i] != 0) {
      min++;
    }
  }

  max = min + color[8];

  if (min == 0) {
    min = 1;
  }

  cout << min << " " << max << endl;

}