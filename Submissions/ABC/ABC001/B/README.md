### ABC001

# B - 視程の通報

  [問題はこちら](https://atcoder.jp/contests/abc001/tasks/abc001_2)

- 発想<br>
  条件通りに分岐して計算する。<br>
  
- 実装のポイント<br>
  回答が 1 桁の場合は、0 で埋めて出力する。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int m;
    cin >> m;

    int vv = 0;

    if (m < 100) {
      vv = 0;
    } else if (100 <= m && m <= 5000){
      vv = m / 100;
    } else if (6000 <= m && m <= 30000){
      vv = m / 1000 + 50;
    } else if (35000 <= m && m <= 70000){
      vv = m / 1000 - 30;
      vv = vv / 5 + 80;
    } else {
      vv = 89;
    }

    printf("%02d", vv);
    printf("\n");

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);

      int m = sc.nextInt();

      int vv = 0;

      if( m < 100 ){
        vv = 0;
      } else if( 100 <= m && m <= 5000 ){
        vv = m / 100;
      } else if( 6000 <= m && m <= 30000 ) {
        vv = m / 1000 + 50;
      } else if( 35000 <= m && m <= 70000 ) {
        vv = (m / 1000 - 30) / 5 + 80;
      } else if( 70000 < m ){
        vv = 89;
      }

      System.out.println(String.format("%02d", vv ));

    }
  }
  ```
    