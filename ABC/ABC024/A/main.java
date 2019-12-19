import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int B = sc.nextInt();
    int C = sc.nextInt();
    int K = sc.nextInt();
    int S = sc.nextInt();
    int T = sc.nextInt();
    int discount = 0;

    if (K <= (S+T)) {
      discount = (S + T) * C;
    }

    System.out.println(S * A + T * B - discount);

  }
}
