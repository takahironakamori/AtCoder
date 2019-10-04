### ABC026

# B - N重丸

  [問題はこちら](https://atcoder.jp/contests/abc026/tasks/abc026_b)

- 発想<br>
  円の半径を大きい順で順番に赤（面積に加える）、白（面積から引く）、赤、白...を繰り返す。
  
- 実装のポイント<br>
  円周率（C++:M_PI、Java:Math.PI）は最後にかけた方がいい。<br>
  大きい順に並び替えて順番に計算した方がいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> R(N);
    for (int i = 0; i < N; i++) {
      cin >> R[i];
    }

    sort(R.begin(), R.end(), std::greater<int>());

    double red = 0;

    for (int i = 0; i < N; i++) {
      if (i % 2 == 0) {
        red += pow(R[i], 2);
      } else {
        red -= pow(R[i], 2);
      }
    }

    cout << setprecision(16) << red * M_PI << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int[] R = new int[N];

      for (int i = 0; i < N; i++) {
        R[i] = sc.nextInt();
      }

      Arrays.sort(R);

      long answer = 0;

      for (int i = 0; i < N; i++) {
        if (i % 2 == 1) {
          answer += R[i] * R[i];
        } else {
          answer -= R[i] * R[i];
        }
      }

      System.out.println(Math.abs(answer) * Math.PI);

    }
  }
  ```
    