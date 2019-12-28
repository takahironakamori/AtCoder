### ABC046

# A - AtCoDeerくんとペンキ / AtCoDeer and Paint Cans

  [問題はこちら](https://atcoder.jp/contests/abc046/tasks/abc046_a)


- 発想<br>
  set に入れてサイズを出力する（C++のコード）。<br>
  または、a、b、c を比較する方法がある。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c;
    cin >> a >> b >> c;

    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);

    cout << st.size() << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if (a == b) {
        if (a == c) {
          System.out.println(1);
        } else {
          System.out.println(2);
        }
      } else if (a == c) {
        if (b == c) {
          System.out.println(1);
        } else {
          System.out.println(2);
        }
      } else {
        if (b == c) {
          System.out.println(2);
        } else {
          System.out.println(3);
        }
      }

    }
  }
  ```
    