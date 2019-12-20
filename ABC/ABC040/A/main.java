import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int x = sc.nextInt();

    if ((n / 2) < x) {
      System.out.println(n - x);
    } else {
      System.out.println(x - 1);
    }

  }
}