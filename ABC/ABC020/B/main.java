import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int B = sc.nextInt();

    int b = String.valueOf(B).length();
      int c = 1;

    for (int i = 0; i < b; i++) {
      c = c * 10;
    }

    System.out.println(((A * c) + B) * 2);

  }
}