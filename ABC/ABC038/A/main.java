import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String[] arr = S.split("");

    if (arr[arr.length - 1].equals("T")) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }
}