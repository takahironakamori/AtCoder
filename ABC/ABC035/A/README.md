### ABC035

# A - テレビ

  [問題はこちら](https://atcoder.jp/contests/abc035/tasks/abc035_a)

- 発想<br>
  比で計算する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int W, H;
    cin >> W >> H;

    if (3 * W == 4 * H) {
      cout << "4:3" << endl;
    } else {
      cout << "16:9" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int W = sc.nextInt();
      int H = sc.nextInt();

      if ((W / 4 * 3) == H){
        System.out.println("4:3");
      } else {
        System.out.println("16:9");
      }

    }
  }
  ```
    