import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    int K = sc.nextInt();
    Integer[] P = new Integer[K];
    Integer[] check = new Integer[N + 1];

    for (int i = 0; i <= N; i++) {
      check[i] = 0;
    }
    
    check[a] = 1;
    check[b] = 1;

    String result = "YES";

    for (int i = 0; i < K; i++) {
      P[i] = sc.nextInt();
    }

    for (int i = 0; i < K; i++) {
      check[P[i]] = check[P[i]] + 1;
    }

    for (int i = 0; i <= N; i++) {
      if (1 < check[i]) {
        result = "NO";
        break;
      }
    }

    System.out.println(result);

  }
}