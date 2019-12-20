import java.util.*;
public class Main {
  public static void main(String[] args){
    
    Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int D = sc.nextInt();

    if (A <= D) {
      System.out.println((A + 1) * D);
    } else {
      System.out.println(A * (D + 1));
    }

  }
}
