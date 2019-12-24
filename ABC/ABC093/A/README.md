### ABC093

# A - abc of ABC

  [問題はこちら](https://atcoder.jp/contests/abc093/tasks/abc093_a)


- 発想<br>
  a と b と c で構成されている場合、並び替えると必ず abc になり、Yes となる。<br>
  全ての文字が異なる、すなわち a と b と c で構成されているので、Yes となる。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    sort(S.begin(), S.end());

    if (S == "abc") {
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
      String s = sc.next();

      String s1 = s.substring(0,1);
      String s2 = s.substring(1,2);
      String s3 = s.substring(2,3);

      if (s1.equals(s2) || s1.equals(s3) || s2.equals(s3)) {
        System.out.println("No");
      } else {
        System.out.println("Yes");
      }

    }
  }
  ```
    