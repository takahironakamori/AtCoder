import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String[] sArray = S.split("");

    for (int i = 0; i < sArray.length; i++) {
      if (i == 0) {
        System.out.print(sArray[i].toUpperCase());
      } else {
        System.out.print(sArray[i].toLowerCase());
      }
    }

    System.out.println("");

  }
}
