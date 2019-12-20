### ABC033

# A - 暗証番号

  [問題はこちら](https://atcoder.jp/contests/abc033/tasks/abc033_a)

- 発想<br>
  比較してもいい（Javaのコード）し、Set に 1 文字ずつ入れて Set の長さを調べる方法（C++のコード）などがある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string N;
    cin >> N;

    set<char> n;
    for (int i = 0; i < 4; i++) {
      n.insert(N[i]);
    }

    if (n.size() == 1) {
      cout << "SAME" << endl;
    } else {
      cout << "DIFFERENT" << endl;
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

      if ((arr[0].equals(arr[1])) && (arr[0].equals(arr[2])) && (arr[0].equals(arr[3]))) {
        System.out.println("SAME");
      } else {
        System.out.println("DIFFERENT");
      }

    }
  }
  ```
    