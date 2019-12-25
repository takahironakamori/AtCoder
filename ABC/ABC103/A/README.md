### ABC103

# A - Task Scheduling Problem

  [問題はこちら](https://atcoder.jp/contests/abc103/tasks/abc103_a)

- 発想<br>
  小さい順に並び替えて、(2 番目に小さいもの - 1 番目に小さいもの) + (3 番目に小さいもの - 2 番目に小さいもの) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];

    sort(A.begin(), A.end());

    cout << (A[1] - A[0]) + (A[2] - A[1]) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int[] arr = new int[3];

      for (int i = 0; i < arr.length; i++) {
        arr[i] = sc.nextInt();
      }

      Arrays.sort(arr);

      System.out.println(arr[2] - arr[0]);

    }
  }
  ```
    