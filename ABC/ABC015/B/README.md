### ABC015

# B - 高橋くんの集計

  [問題はこちら](https://atcoder.jp/contests/abc015/tasks/abc015_2)

- 発想<br>  
  A が 0 以外の場合は、その値とカウントを足し合わせて、値をカウントで割る。<br>
  
  
- 実装のポイント<br>
  小数点第 1 位を切り上げるので型に注意する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int count = 0;
    int sum = 0;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      if (A != 0) {
        count++;
        sum += A;
      }
    }

    cout << ceil((double) sum / count) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      Integer[] arr = new Integer[N];
      double count = 0;
      double sum = 0;

      for (int i = 0; i < N; i++) {
        arr[i] = sc.nextInt();
      }

      for ( int i = 0; i < N; i++ ) {
        if ( arr[i] != 0 ) {
          count++;
          sum += arr[i];
        }
      }

      System.out.println((int)Math.ceil(sum/count));

    }
  }
  ```
    