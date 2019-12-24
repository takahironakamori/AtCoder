### ABC081

# A - Placing Marbles

  [問題はこちら](https://atcoder.jp/contests/abc081/tasks/abc081_a)


- 発想<br>
  1 文字ずつ 1 の数を数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string N;
    cin >> N;

    int answer = 0;

    for (int i = 0; i < 3; i++) {
      if (N[i] == '1') {
        answer++;
      }
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
      String a = sc.next();
      String[] arr = a.split("");
      
      int s = 0;
      if(arr[0].equals("1")){ ++s; }
      if(arr[1].equals("1")){ ++s; }
      if(arr[2].equals("1")){ ++s; }
      
      System.out.println(s);
    
    }
  }
  ```
    