### ABC043

# A - キャンディーとN人の子供イージー / Children and Candies (ABC Edit)

  [問題はこちら](https://atcoder.jp/contests/abc043/tasks/abc043_a)


- 発想<br>
  1 から N までループする（C++のコード）。<br>
  または、N (N + 1) / 2 を計算する（Javaのコード）。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> count(11);

    int N;
    cin >> N;

    int answer = 0;

    for (int i = 1; i <= N; i++) {
      answer += i;
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
      int N = sc.nextInt();

      System.out.println(N * (1 + N) / 2);

    }
  }
  ```
    