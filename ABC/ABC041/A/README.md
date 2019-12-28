### ABC041

# A - 添字

  [問題はこちら](https://atcoder.jp/contests/abc041/tasks/abc041_a)


- 発想<br>
  i - 1文字目を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int i;
    cin >> i;

    cout << s[i - 1] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String s = sc.next();
      String[] arr = s.split("");
      int i = sc.nextInt();

      System.out.println(arr[i - 1]);

    }
  }
  ```
    