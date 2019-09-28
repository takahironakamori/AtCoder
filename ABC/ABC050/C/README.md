### ABC050

# C - Lining Up

  [問題はこちら](https://atcoder.jp/contests/abc050/tasks/arc066_a)

- 発想
  
  まず、ありうる並び方なのかを判定する。<br>
  N が偶数か奇数によって判断基準が少し異なる。
  
  N が偶数の場合は、1 から N-1 までの奇数が2個ずつで構成していないとありうる並びとならない。<br>
  N が奇数の場合は、0 が 1 個、2 から N-1 までの偶数が2個ずつで構成していないとありうる並びとならない。
  
  ありうる場合で何通りあるかの計算は、1 に 2 を N / 2 回、掛けるのを繰り返す。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> number(100100);
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      number[a]++;
    }

    int mod = 1000000000 + 7;

    bool valid = true;

    if (N % 2 != 0) {
      if (number[0] != 1) {
        valid = false;
      } else {
        for (int i = 1; i < N; i++) {
          if (i % 2 == 0) {
            if (number[i] != 2) {
              valid = false;
              break;
            }
          } else {
            if (number[i] != 0) {
              valid = false;
              break;
            }
          }
        }
      }
    } else {
      if (number[0] != 0) {
        valid = false;
      } else {
        for (int i = 1; i < N; i++) {
          if (i % 2 == 0) {
            if (number[i] != 0) {
              valid = false;
              break;
            }
          } else {
            if (number[i] != 2) {
              valid = false;
              break;
            }
          }
        }
      }
    }

    if (valid){
      int count = 1;
      for (int i = 1; i <= N / 2; i++) {
        count = (count * 2) % mod;
      }
      cout << count << endl;
    } else {
      cout << 0 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] A = new int[100010];

      for (int i = 0; i < N; i++) {
        int a = sc.nextInt();
        A[a]++;
      }

      sc.close();

      int mod = 1000000007;


      if (N % 2 != 0) {

        if (A[0] != 1) {
          System.out.println(0);
          return;
        }

        for (int i = 1; i < A.length; i++) {
          if (i % 2 == 0) {
            if (A[i] != 2 && A[i] != 0) {
              System.out.println(0);
              return;
            }
          } else {
            if (A[i] != 0){
              System.out.println(0);
              return;
            }
          }
        }

      } else {

        if (A[0] != 0) {
          System.out.println(0);
          return;
        }

        for (int i = 1; i < A.length; i++) {
          if (i % 2 != 0) {
            if (A[i] != 2 && A[i] != 0) {
              System.out.println(0);
              return;
            }
          } else {
            if (A[i] != 0) {
              System.out.println(0);
              return;
            }
          }
        }

      }

      long l = (long) N / 2;

      long result = 1;

      while (l > 0) {
        result = result * 2 % mod;
        l--;
      }

      System.out.println(result);

    }

  }
  ```
    