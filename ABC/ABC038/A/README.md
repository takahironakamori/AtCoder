### ABC038

# A - お茶

  [問題はこちら](https://atcoder.jp/contests/abc038/tasks/abc038_a)


- 発想<br>
  最後の文字が T か否かを調べる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int s = S.size() - 1;

    if (S[s] == 'T') {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      String[] arr = S.split("");

      if (arr[arr.length - 1].equals("T")) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    