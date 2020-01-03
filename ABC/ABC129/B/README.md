### ABC129

# B - Balance

  [問題はこちら](https://atcoder.jp/contests/abc129/tasks/abc129_b)


- 発想<br>
  W_1 から W_N までを配列に入れ、それらの合計を計算しておく。<br>
  合計から W_1 から W_i までの合計を引いたものと W_1 から W_i までの合計の差（絶対値）を N - 1 まで計算する。<br>
  計算した差の最小が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> W(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
      cin >> W[i];
      sum += W[i];
    }

    int answer = 1000000;
    int current = 0;
    for (int i = 0; i < N - 1; i++) {
      current += W[i];
      answer = min(answer, abs((sum - current) - current));
    }

    cout << answer << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      ArrayList<Integer> W = new ArrayList<>();
        for (int i = 0; i < N; i++) {
          W.add(sc.nextInt());
        }
      sc.close();

      Integer A = 0;
      Integer B = 0;

      while (W.size() != 0) {
        if(A < B){
          A += W.get(0);
          W.remove(0);
        } else {
          B += W.get(W.size() - 1);
          W.remove(W.size() - 1);
        }
      }

      System.out.println(Math.abs(A-B));

    }
  }
  ```
    