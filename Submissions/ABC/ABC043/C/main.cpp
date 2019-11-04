  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    int answer = 2001000;

    for (int i = -100; i <= 100; i++) {

      int cost = 0;

      for (int j = 0; j < N; j++) {
        cost += pow(abs(i - a[j]),2);
      }

      answer = min(answer, cost);

    }

    cout << answer << endl;

  }