import java.util.*;
public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    double A = sc.nextInt();
    double B = sc.nextInt();
    double C = sc.nextInt();
    double D = sc.nextInt();
    
    double a = B/A;
	  double b = D/C;
    
    if (a == b) {
      System.out.println("DRAW");
    } else if(a < b) {
      System.out.println("AOKI");
    } else {
      System.out.println("TAKAHASHI");
    }

  }
}
