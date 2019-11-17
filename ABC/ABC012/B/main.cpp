#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;

  int h = N / 3600;
  N %= 3600;

  int m = N / 60;
  N %= 60;

  printf("%02d", h);
  printf(":");
  printf("%02d", m);
  printf(":");
  printf("%02d", N);
  printf("\n");

}