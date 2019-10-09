import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    sc.close();

    String[] S = s.split("");
    String current = S[0];

    int count = 0;

    System.out.print(current);

    for (int i = 0; i < S.length; i++) {
      if (S[i].equals(current)) {
        count++;
      } else {
        System.out.print(count);
        current = S[i];
        count = 1;
        System.out.print(current);
      }
    }

    System.out.println(count);

  }
}