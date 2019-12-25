### ABC110

# A - Maximize the Formula

  [問題はこちら](https://atcoder.jp/contests/abc110/tasks/abc110_a)

- 発想<br>
  最も大きい数 * 10 + 残った 2 つの数を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> ABC(3);
    cin >> ABC[0] >> ABC[1] >> ABC[2];

    sort(ABC.begin(), ABC.end());

    cout << ABC[0] + ABC[1] +(ABC[2] * 10) << endl;

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

      System.out.println((arr[2] * 10) + arr[1] + arr[0]);

    }
  }
  ```
    