import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int B = sc.nextInt();
    int C = sc.nextInt();

    if ((B / A) < C) {
      System.out.println(B / A);
    } else {
      System.out.println(C);
    }

  }
}