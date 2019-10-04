import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    Integer[] check = new Integer[100100];

    for (int i = 0; i < check.length; i++) {
      check[i] = 0;
    }
    
    int _a = 0;
    
    for (int i = 0; i < N; i++) {
      _a = sc.nextInt();
      check[_a] = check[_a] + 1;
    }

    int count = 0;

    for (int i = 0; i < check.length; i++) {
      if (1 < check[i]) {
        count = count + check[i] - 1;
      }
    }

    System.out.println(count);

  }
}