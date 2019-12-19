### ABC018

# A - 豆まき

  [問題はこちら](https://atcoder.jp/contests/abc018/tasks/abc018_1)

- 発想1（C++のコード）<br>
  1人ずつ、それぞれ比較する。
  
  
- 発想2（Javaのコード）<br>
  太郎君の順位は太郎君より点数が多い人の数 + 1<br>
  次郎君の順位は次郎君より点数が多い人の数 + 1<br>
  三郎君の順位は三郎君より点数が多い人の数 + 1<br>
  となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int taro, jiro, saburo;
    cin >> taro >> jiro >> saburo;

    if (taro < jiro) {
      if (taro < saburo) {
        cout << 3 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      if (taro < saburo) {
        cout << 2 << endl;
      } else {
        cout << 1 << endl;
      }
    }

    if (jiro < saburo) {
      if (jiro < taro) {
        cout << 3 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      if (jiro < taro) {
        cout << 2 << endl;
      } else {
        cout << 1 << endl;
      }
    }

    if (saburo < taro) {
      if (saburo < jiro) {
        cout << 3 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      if (saburo < jiro) {
        cout << 2 << endl;
      } else {
        cout << 1 << endl;
      }
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int taro = sc.nextInt();
      int jiro = sc.nextInt();
      int saburo = sc.nextInt();
      sc.close();

      int t = 0;
      int j = 0;
      int s = 0;

      if (taro < jiro ) {
        t++;
      }

      if (taro < saburo) {
        t++;
      }

      if (jiro < saburo) {
        j++;
      }

      if (jiro < taro) {
        j++;
      }

      if (saburo < taro) {
        s++;
      }

      if (saburo < jiro ) {
        s++;
      }

      System.out.println(t + 1);
      System.out.println(j + 1);
      System.out.println(s + 1);

    }

  }
  ```
    