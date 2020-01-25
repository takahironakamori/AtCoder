### ABC003

# C - AtCoderプログラミング講座

  [問題はこちら](https://atcoder.jp/contests/abc003/tasks/abc003_3)


- 発想<br>
  大きい順から K 個分取り出し、小さい順からの平均を計算する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> R(N);
    for (int i = 0; i < N; i++) {
      cin >> R[i];
    }

    sort(R.begin(), R.end());

    double answer = 0;

    for (int i = N - K; i < N; i++) {
      answer += R[i];
      answer /= 2;
    }

    printf("%.16f", answer);
    printf("\n");

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int K = sc.nextInt();
      Integer arr[] = new Integer[N];

      double r = 0;

      for (int i = 0; i < N; i++) {
        arr[i] = sc.nextInt();
      }
      Arrays.sort(arr,Comparator.reverseOrder());

      for (int j = K - 1; 0 <= j; j--){
        r = (r + (double) arr[j]) / 2;
      }

      System.out.println(r);
    }
  }
  ```
