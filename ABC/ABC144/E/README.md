### ABC144

# E - Gluttony

  [問題はこちら](https://atcoder.jp/contests/abc144/tasks/abc144_e)

- 発想<br>

  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N;
    long long K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> F(N);
    for(int i = 0; i < N; ++i) {
      cin >> A[i];
    }
    for(int i = 0; i < N; ++i) {
      cin >> F[i];
    }
    sort(A.begin(), A.end());
    sort(F.rbegin(), F.rend());

    long long wa = -1;
    long long ac = 1e12;
    while (1 < ac - wa) {
      long long mid = (wa + ac) / 2;

      bool check = [&]{
        long long count = 0;
        for (int i = 0; i < N; ++i) {
          count += max((long long)0, A[i] - mid / F[i]);
        }
        return count <= K; 
      }();

      if (check) {
        ac = mid;
      } else {
        wa = mid;
      }
    }

    cout << ac << endl;

    return 0;

  }
  ```
