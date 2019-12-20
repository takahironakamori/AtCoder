import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String[] arr = S.split("");

    if ((arr[0].equals(arr[1])) && (arr[0].equals(arr[2])) && (arr[0].equals(arr[3]))) {
      System.out.println("SAME");
    } else {
      System.out.println("DIFFERENT");
    }

  }
}