### ABC009

# A - 引越し作業

  [問題はこちら](https://atcoder.jp/contests/abc009/tasks/abc009_1)


- 発想<br>
  割り算（切り上げ）の結果を出力する。<br>
  割り算（切り捨て）＋ その余り と計算してもいい。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double N;
    cin >> N;

    cout << (int) ceil(N / 2) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      
      System.out.println(N / 2 + N % 2);
    
    }
  }
  ```
    