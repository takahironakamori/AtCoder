import java.util.*;
public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String X = sc.next();
    if (X.equals("A")){
      System.out.println(1);
    } else if(X.equals("B")) {
      System.out.println(2);
    } else if(X.equals("C")) {
      System.out.println(3);
    } else if(X.equals("D")) {
      System.out.println(4);
    } else {
      System.out.println(5);
    }
  }
}