### ABC001

# C - 風力観測

  [問題はこちら](https://atcoder.jp/contests/abc001/tasks/abc001_3)


- 発想<br>
  Deg がどの範囲かを調べる。<br>
  Dis がどの範囲かを調べる。<br>
  
  
- 実装のポイント<br>
  Deg については範囲が一定なので、1 行で判定することができる。(C++のコード)<br>
  if を丁寧に繰り返してもいい。 (Javaのコード)<br>
  Dis については、Dis / 6 を四捨五入する。<br>
  風速の範囲は、すべて * 10 して判定する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int Deg, Dis;
    cin >> Deg >> Dis;

    vector<string> angle = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
    int deg = ((Deg * 10 + 1125) / 2250) % 16;

    Dis = round((double) Dis / 6);

    int dis = 0;
    if (Dis <= 2) {
      dis = 0;
    } else if (Dis <= 15) {
      dis = 1;
    } else if (Dis <= 33) {
      dis = 2;
    } else if (Dis <= 54) {
      dis = 3;
    } else if (Dis <= 79) {
      dis = 4;
    } else if (Dis <= 107) {
      dis = 5;
    } else if (Dis <= 138) {
      dis = 6;
    } else if (Dis <= 171) {
      dis = 7;
    } else if (Dis <= 207) {
      dis = 8;
    } else if (Dis <= 244) {
      dis = 9;
    } else if (Dis <= 284) {
      dis = 10;
    } else if (Dis <= 326) {
      dis = 11;
    } else {
      dis = 12;
    }

    if (dis == 0) {
      cout << "C " << dis << endl;
    } else {
      cout << angle[deg] << " " << dis << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int deg = sc.nextInt();
      float dis = sc.nextInt();

      String dir;
      int w;
      int _deg = deg * 10;
      int _dis = Math.round(dis/6);

      if(1125 <= _deg && _deg < 3375){
        dir = "NNE"; 
      } else if(3375 <= _deg && _deg < 5625){
        dir = "NE"; 
      } else if(5625 <= _deg && _deg < 7875){
        dir = "ENE";
      } else if(7875 <= _deg && _deg < 10125){
        dir = "E";
      } else if(10125 <= _deg && _deg < 12375){
        dir = "ESE"; 
      } else if(12375 <= _deg && _deg < 14625){
        dir = "SE"; 
      } else if(14625 <= _deg && _deg < 16875){
        dir = "SSE"; 
      } else if(16875 <= _deg && _deg < 19125){
        dir = "S"; 
      } else if(19125 <= _deg && _deg < 21375){
        dir = "SSW"; 
      } else if(21375 <= _deg && _deg < 23625){
        dir = "SW"; 
      } else if(23625 <= _deg && _deg < 25875){
        dir = "WSW"; 
      } else if(25875 <= _deg && _deg < 28125){
        dir = "W"; 
      } else if(28125 <= _deg && _deg < 30375){
        dir = "WNW"; 
      } else if(30375 <= _deg && _deg < 32625){
        dir = "NW"; 
      } else if(32625 <= _deg && _deg < 34875){
        dir = "NNW"; 
      } else {
        dir = "N"; 
      }

      if(_dis <= 2){
        w = 0;
      } else if(3 <= _dis && _dis <= 15){
        w = 1;
      } else if(16 <= _dis && _dis <= 33){
        w = 2;
      } else if(34 <= _dis && _dis <= 54){
        w = 3;
      } else if(55 <= _dis && _dis <= 79){
        w = 4;
      } else if(80 <= _dis && _dis <= 107){
        w = 5;
      } else if(108 <= _dis && _dis <= 138){
        w = 6;
      } else if(139 <= _dis && _dis <= 171){
        w = 7;
      } else if(172 <= _dis && _dis <= 207){
        w = 8;
      } else if(208 <= _dis && _dis <= 244){
        w = 9;
      } else if(245 <= _dis && _dis <= 284){
        w = 10;
      } else if(285 <= _dis && _dis <= 326){
        w = 11;
      } else {
        w = 12;
      }

      if(w == 0){
        dir = "C";
      }

      System.out.println(dir + " " + w);

    }
  }
  ```
    