### ABC005

# B - おいしいたこ焼きの食べ方

  [問題はこちら](https://atcoder.jp/contests/abc005/tasks/abc005_2)

- 発想<br>
  入力で取得した値から最も小さい値を出力すればいい。<br>

- 実装のポイント<br>
  min()を使ったり、配列に入れて並び替えるのもいい。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int answer = 101;

    for (int i = 0; i < N; i++) {
      int T;
      cin >> T;
      answer = min(answer, T);
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
      int a = Integer.parseInt(sc.nextLine());
      Integer arr[] = new Integer[a];

      for (int i=0; i<a; i++) {
        arr[i] = sc.nextInt();
      }
      Arrays.sort(arr);

      System.out.println(arr[0]);
    }
  }
  ```
    