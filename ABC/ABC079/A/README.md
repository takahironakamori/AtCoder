### ABC079

# A - Good Integer

  [問題はこちら](https://atcoder.jp/contests/abc079/tasks/abc079_a)

- 発想<br>
  1 文字目から 3 文字目までが同じ数字か、2 文字目から 4 文字目までが同じ数字かの<br>
  どちらかを満たせば Yes となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string N;
    cin >> N;

    set<char> st1;
    set<char> st2;

    st1.insert(N[0]);
    st1.insert(N[1]);
    st1.insert(N[2]);

    st2.insert(N[1]);
    st2.insert(N[2]);
    st2.insert(N[3]);

    if (st1.size() == 1 || st2.size() == 1) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String N = sc.next();

      String N1 = N.substring(0,1);
      String N2 = N.substring(1,2);
      String N3 = N.substring(2,3);
      String N4 = N.substring(3,4);

      if (N1.equals(N2) && N1.equals(N3)) {
        System.out.println("Yes");
      } else if (N2.equals(N3) && N2.equals(N4)) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    